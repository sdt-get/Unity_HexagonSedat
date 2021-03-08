using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {
	void Start () {		
	}

	void Update () {
	}
	public void ChangeScene(string sceneName) {
		SceneManager.LoadScene(sceneName);
	}
	public void QuitGame() {
		Application.Quit();
	}
}