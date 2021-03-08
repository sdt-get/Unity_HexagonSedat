#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>
struct List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>
struct List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<Hexagon>
struct List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.List`1<UnityEngine.Color>[]
struct List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307;
// System.Collections.Generic.List`1<Hexagon>[]
struct List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// Hexagon[]
struct HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// BombHexagon
struct BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GridManager
struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328;
// Hexagon
struct Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// SuperClass
struct SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UrlOpener
struct UrlOpener_t20FA788DFB493BC5EC67E62031AC5A09682D3160;
// UserInterfaceManager
struct UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GridManager/<ProduceHexagons>d__34
struct U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223;
// GridManager/<RotationCheckCoroutine>d__28
struct U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9;
IL2CPP_EXTERN_C String_t* _stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA32AE40A5F8D0E861C4A0372296303150B4B7F4D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE00804D7BA408C4A25046F3D4BEA53838BBE4CEE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0583CD7F33964E64839674073BB0302DBAFBF933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6B104E276DABD6488AF7C013EF6432EDC9ABCF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1383DF1D5436B8B046CD2080291E5ABA69014F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m708D65B549D5906DBD33E8694C0C2980B5B4DDD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProduceHexagonsU3Ed__34_System_Collections_IEnumerator_Reset_m779D0A9C50EF6162F27100731A604F06A6505E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotationCheckCoroutineU3Ed__28_System_Collections_IEnumerator_Reset_m2D454D87726D0B3AB4272354B81DA7D6F06E0815_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>
struct  List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____items_1)); }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>
struct  List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB, ____items_1)); }
	inline List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_tEDCB3A7646B8FD89AF46D27B55ECAEF4E2698BF4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color>
struct  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Hexagon>
struct  List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____items_1)); }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* get__items_1() const { return ____items_1; }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_StaticFields, ____emptyArray_5)); }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GridManager/<RotationCheckCoroutine>d__28
struct  U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0  : public RuntimeObject
{
public:
	// System.Int32 GridManager/<RotationCheckCoroutine>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GridManager/<RotationCheckCoroutine>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GridManager GridManager/<RotationCheckCoroutine>d__28::<>4__this
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___U3CU3E4__this_2;
	// System.Boolean GridManager/<RotationCheckCoroutine>d__28::clockWise
	bool ___clockWise_3;
	// System.Collections.Generic.List`1<Hexagon> GridManager/<RotationCheckCoroutine>d__28::<explosiveHexagons>5__2
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___U3CexplosiveHexagonsU3E5__2_4;
	// System.Boolean GridManager/<RotationCheckCoroutine>d__28::<flag>5__3
	bool ___U3CflagU3E5__3_5;
	// System.Int32 GridManager/<RotationCheckCoroutine>d__28::<i>5__4
	int32_t ___U3CiU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CU3E4__this_2)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_clockWise_3() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___clockWise_3)); }
	inline bool get_clockWise_3() const { return ___clockWise_3; }
	inline bool* get_address_of_clockWise_3() { return &___clockWise_3; }
	inline void set_clockWise_3(bool value)
	{
		___clockWise_3 = value;
	}

	inline static int32_t get_offset_of_U3CexplosiveHexagonsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CexplosiveHexagonsU3E5__2_4)); }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * get_U3CexplosiveHexagonsU3E5__2_4() const { return ___U3CexplosiveHexagonsU3E5__2_4; }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 ** get_address_of_U3CexplosiveHexagonsU3E5__2_4() { return &___U3CexplosiveHexagonsU3E5__2_4; }
	inline void set_U3CexplosiveHexagonsU3E5__2_4(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * value)
	{
		___U3CexplosiveHexagonsU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexplosiveHexagonsU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CflagU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CflagU3E5__3_5)); }
	inline bool get_U3CflagU3E5__3_5() const { return ___U3CflagU3E5__3_5; }
	inline bool* get_address_of_U3CflagU3E5__3_5() { return &___U3CflagU3E5__3_5; }
	inline void set_U3CflagU3E5__3_5(bool value)
	{
		___U3CflagU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0, ___U3CiU3E5__4_6)); }
	inline int32_t get_U3CiU3E5__4_6() const { return ___U3CiU3E5__4_6; }
	inline int32_t* get_address_of_U3CiU3E5__4_6() { return &___U3CiU3E5__4_6; }
	inline void set_U3CiU3E5__4_6(int32_t value)
	{
		___U3CiU3E5__4_6 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Hexagon>
struct  Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC, ___list_0)); }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * get_list_0() const { return ___list_0; }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC, ___current_3)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_current_3() const { return ___current_3; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextAlignment
struct  TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4 
{
public:
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GridManager/<ProduceHexagons>d__34
struct  U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223  : public RuntimeObject
{
public:
	// System.Int32 GridManager/<ProduceHexagons>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GridManager/<ProduceHexagons>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GridManager GridManager/<ProduceHexagons>d__34::<>4__this
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.Int32> GridManager/<ProduceHexagons>d__34::columns
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager/<ProduceHexagons>d__34::colorSeed
	List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colorSeed_4;
	// UnityEngine.Vector3 GridManager/<ProduceHexagons>d__34::<startPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CstartPositionU3E5__2_5;
	// System.Single GridManager/<ProduceHexagons>d__34::<startX>5__3
	float ___U3CstartXU3E5__3_6;
	// System.Collections.Generic.List`1/Enumerator<System.Int32> GridManager/<ProduceHexagons>d__34::<>7__wrap3
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___U3CU3E7__wrap3_7;
	// System.Int32 GridManager/<ProduceHexagons>d__34::<i>5__5
	int32_t ___U3CiU3E5__5_8;
	// Hexagon GridManager/<ProduceHexagons>d__34::<newHex>5__6
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___U3CnewHexU3E5__6_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CU3E4__this_2)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_columns_3() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___columns_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_columns_3() const { return ___columns_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_columns_3() { return &___columns_3; }
	inline void set_columns_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___columns_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columns_3), (void*)value);
	}

	inline static int32_t get_offset_of_colorSeed_4() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___colorSeed_4)); }
	inline List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * get_colorSeed_4() const { return ___colorSeed_4; }
	inline List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 ** get_address_of_colorSeed_4() { return &___colorSeed_4; }
	inline void set_colorSeed_4(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * value)
	{
		___colorSeed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorSeed_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CstartPositionU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CstartPositionU3E5__2_5() const { return ___U3CstartPositionU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CstartPositionU3E5__2_5() { return &___U3CstartPositionU3E5__2_5; }
	inline void set_U3CstartPositionU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CstartPositionU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartXU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CstartXU3E5__3_6)); }
	inline float get_U3CstartXU3E5__3_6() const { return ___U3CstartXU3E5__3_6; }
	inline float* get_address_of_U3CstartXU3E5__3_6() { return &___U3CstartXU3E5__3_6; }
	inline void set_U3CstartXU3E5__3_6(float value)
	{
		___U3CstartXU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CU3E7__wrap3_7)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___U3CU3E7__wrap3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_7))->___list_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CiU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CiU3E5__5_8)); }
	inline int32_t get_U3CiU3E5__5_8() const { return ___U3CiU3E5__5_8; }
	inline int32_t* get_address_of_U3CiU3E5__5_8() { return &___U3CiU3E5__5_8; }
	inline void set_U3CiU3E5__5_8(int32_t value)
	{
		___U3CiU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CnewHexU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223, ___U3CnewHexU3E5__6_9)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_U3CnewHexU3E5__6_9() const { return ___U3CnewHexU3E5__6_9; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_U3CnewHexU3E5__6_9() { return &___U3CnewHexU3E5__6_9; }
	inline void set_U3CnewHexU3E5__6_9(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___U3CnewHexU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewHexU3E5__6_9), (void*)value);
	}
};


// Hexagon/NeighbourHexes
struct  NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 
{
public:
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::up
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___up_0;
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::upLeft
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upLeft_1;
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::upRight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upRight_2;
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::down
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___down_3;
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::downLeft
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downLeft_4;
	// UnityEngine.Vector2 Hexagon/NeighbourHexes::downRight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downRight_5;

public:
	inline static int32_t get_offset_of_up_0() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___up_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_up_0() const { return ___up_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_up_0() { return &___up_0; }
	inline void set_up_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___up_0 = value;
	}

	inline static int32_t get_offset_of_upLeft_1() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___upLeft_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upLeft_1() const { return ___upLeft_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upLeft_1() { return &___upLeft_1; }
	inline void set_upLeft_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upLeft_1 = value;
	}

	inline static int32_t get_offset_of_upRight_2() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___upRight_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upRight_2() const { return ___upRight_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upRight_2() { return &___upRight_2; }
	inline void set_upRight_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upRight_2 = value;
	}

	inline static int32_t get_offset_of_down_3() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___down_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_down_3() const { return ___down_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_down_3() { return &___down_3; }
	inline void set_down_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___down_3 = value;
	}

	inline static int32_t get_offset_of_downLeft_4() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___downLeft_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downLeft_4() const { return ___downLeft_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downLeft_4() { return &___downLeft_4; }
	inline void set_downLeft_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downLeft_4 = value;
	}

	inline static int32_t get_offset_of_downRight_5() { return static_cast<int32_t>(offsetof(NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67, ___downRight_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downRight_5() const { return ___downRight_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downRight_5() { return &___downRight_5; }
	inline void set_downRight_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downRight_5 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// MenuManager
struct  MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SuperClass
struct  SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 SuperClass::HEX_OUTLINE_SCALE
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___HEX_OUTLINE_SCALE_24;
	// UnityEngine.Vector2 SuperClass::HEX_START_POSITION
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___HEX_START_POSITION_25;

public:
	inline static int32_t get_offset_of_HEX_OUTLINE_SCALE_24() { return static_cast<int32_t>(offsetof(SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A, ___HEX_OUTLINE_SCALE_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_HEX_OUTLINE_SCALE_24() const { return ___HEX_OUTLINE_SCALE_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_HEX_OUTLINE_SCALE_24() { return &___HEX_OUTLINE_SCALE_24; }
	inline void set_HEX_OUTLINE_SCALE_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___HEX_OUTLINE_SCALE_24 = value;
	}

	inline static int32_t get_offset_of_HEX_START_POSITION_25() { return static_cast<int32_t>(offsetof(SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A, ___HEX_START_POSITION_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_HEX_START_POSITION_25() const { return ___HEX_START_POSITION_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_HEX_START_POSITION_25() { return &___HEX_START_POSITION_25; }
	inline void set_HEX_START_POSITION_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___HEX_START_POSITION_25 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UrlOpener
struct  UrlOpener_t20FA788DFB493BC5EC67E62031AC5A09682D3160  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UrlOpener::Url
	String_t* ___Url_4;

public:
	inline static int32_t get_offset_of_Url_4() { return static_cast<int32_t>(offsetof(UrlOpener_t20FA788DFB493BC5EC67E62031AC5A09682D3160, ___Url_4)); }
	inline String_t* get_Url_4() const { return ___Url_4; }
	inline String_t** get_address_of_Url_4() { return &___Url_4; }
	inline void set_Url_4(String_t* value)
	{
		___Url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Url_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// GridManager
struct  GridManager_t9D03B7713AD644FF31B45E7A0313130344720328  : public SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A
{
public:
	// UnityEngine.GameObject GridManager::hexPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexPrefab_27;
	// UnityEngine.GameObject GridManager::hexParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexParent_28;
	// UnityEngine.GameObject GridManager::outParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___outParent_29;
	// UnityEngine.Sprite GridManager::outlineSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___outlineSprite_30;
	// UnityEngine.Sprite GridManager::hexagonSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hexagonSprite_31;
	// System.Int32 GridManager::gridWidth
	int32_t ___gridWidth_32;
	// System.Int32 GridManager::gridHeight
	int32_t ___gridHeight_33;
	// System.Int32 GridManager::selectionStatus
	int32_t ___selectionStatus_34;
	// System.Boolean GridManager::bombProduction
	bool ___bombProduction_35;
	// System.Boolean GridManager::gameEnd
	bool ___gameEnd_36;
	// UnityEngine.Vector2 GridManager::selectedPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___selectedPosition_37;
	// Hexagon GridManager::selectedHexagon
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___selectedHexagon_38;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>> GridManager::gameGrid
	List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * ___gameGrid_39;
	// System.Collections.Generic.List`1<Hexagon> GridManager::selectedGroup
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___selectedGroup_40;
	// System.Collections.Generic.List`1<Hexagon> GridManager::bombs
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___bombs_41;
	// System.Collections.Generic.List`1<UnityEngine.Color> GridManager::colorList
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colorList_42;
	// System.Boolean GridManager::gameInitializiationStatus
	bool ___gameInitializiationStatus_43;
	// System.Boolean GridManager::hexagonRotationStatus
	bool ___hexagonRotationStatus_44;
	// System.Boolean GridManager::hexagonExplosionStatus
	bool ___hexagonExplosionStatus_45;
	// System.Boolean GridManager::hexagonProductionStatus
	bool ___hexagonProductionStatus_46;

public:
	inline static int32_t get_offset_of_hexPrefab_27() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexPrefab_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexPrefab_27() const { return ___hexPrefab_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexPrefab_27() { return &___hexPrefab_27; }
	inline void set_hexPrefab_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexPrefab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexPrefab_27), (void*)value);
	}

	inline static int32_t get_offset_of_hexParent_28() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexParent_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexParent_28() const { return ___hexParent_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexParent_28() { return &___hexParent_28; }
	inline void set_hexParent_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexParent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexParent_28), (void*)value);
	}

	inline static int32_t get_offset_of_outParent_29() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___outParent_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_outParent_29() const { return ___outParent_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_outParent_29() { return &___outParent_29; }
	inline void set_outParent_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___outParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_outlineSprite_30() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___outlineSprite_30)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_outlineSprite_30() const { return ___outlineSprite_30; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_outlineSprite_30() { return &___outlineSprite_30; }
	inline void set_outlineSprite_30(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___outlineSprite_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineSprite_30), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonSprite_31() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonSprite_31)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hexagonSprite_31() const { return ___hexagonSprite_31; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hexagonSprite_31() { return &___hexagonSprite_31; }
	inline void set_hexagonSprite_31(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hexagonSprite_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonSprite_31), (void*)value);
	}

	inline static int32_t get_offset_of_gridWidth_32() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gridWidth_32)); }
	inline int32_t get_gridWidth_32() const { return ___gridWidth_32; }
	inline int32_t* get_address_of_gridWidth_32() { return &___gridWidth_32; }
	inline void set_gridWidth_32(int32_t value)
	{
		___gridWidth_32 = value;
	}

	inline static int32_t get_offset_of_gridHeight_33() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gridHeight_33)); }
	inline int32_t get_gridHeight_33() const { return ___gridHeight_33; }
	inline int32_t* get_address_of_gridHeight_33() { return &___gridHeight_33; }
	inline void set_gridHeight_33(int32_t value)
	{
		___gridHeight_33 = value;
	}

	inline static int32_t get_offset_of_selectionStatus_34() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectionStatus_34)); }
	inline int32_t get_selectionStatus_34() const { return ___selectionStatus_34; }
	inline int32_t* get_address_of_selectionStatus_34() { return &___selectionStatus_34; }
	inline void set_selectionStatus_34(int32_t value)
	{
		___selectionStatus_34 = value;
	}

	inline static int32_t get_offset_of_bombProduction_35() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___bombProduction_35)); }
	inline bool get_bombProduction_35() const { return ___bombProduction_35; }
	inline bool* get_address_of_bombProduction_35() { return &___bombProduction_35; }
	inline void set_bombProduction_35(bool value)
	{
		___bombProduction_35 = value;
	}

	inline static int32_t get_offset_of_gameEnd_36() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameEnd_36)); }
	inline bool get_gameEnd_36() const { return ___gameEnd_36; }
	inline bool* get_address_of_gameEnd_36() { return &___gameEnd_36; }
	inline void set_gameEnd_36(bool value)
	{
		___gameEnd_36 = value;
	}

	inline static int32_t get_offset_of_selectedPosition_37() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedPosition_37)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_selectedPosition_37() const { return ___selectedPosition_37; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_selectedPosition_37() { return &___selectedPosition_37; }
	inline void set_selectedPosition_37(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___selectedPosition_37 = value;
	}

	inline static int32_t get_offset_of_selectedHexagon_38() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedHexagon_38)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_selectedHexagon_38() const { return ___selectedHexagon_38; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_selectedHexagon_38() { return &___selectedHexagon_38; }
	inline void set_selectedHexagon_38(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___selectedHexagon_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedHexagon_38), (void*)value);
	}

	inline static int32_t get_offset_of_gameGrid_39() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameGrid_39)); }
	inline List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * get_gameGrid_39() const { return ___gameGrid_39; }
	inline List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB ** get_address_of_gameGrid_39() { return &___gameGrid_39; }
	inline void set_gameGrid_39(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * value)
	{
		___gameGrid_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameGrid_39), (void*)value);
	}

	inline static int32_t get_offset_of_selectedGroup_40() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedGroup_40)); }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * get_selectedGroup_40() const { return ___selectedGroup_40; }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 ** get_address_of_selectedGroup_40() { return &___selectedGroup_40; }
	inline void set_selectedGroup_40(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * value)
	{
		___selectedGroup_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedGroup_40), (void*)value);
	}

	inline static int32_t get_offset_of_bombs_41() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___bombs_41)); }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * get_bombs_41() const { return ___bombs_41; }
	inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 ** get_address_of_bombs_41() { return &___bombs_41; }
	inline void set_bombs_41(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * value)
	{
		___bombs_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombs_41), (void*)value);
	}

	inline static int32_t get_offset_of_colorList_42() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___colorList_42)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_colorList_42() const { return ___colorList_42; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_colorList_42() { return &___colorList_42; }
	inline void set_colorList_42(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___colorList_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorList_42), (void*)value);
	}

	inline static int32_t get_offset_of_gameInitializiationStatus_43() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameInitializiationStatus_43)); }
	inline bool get_gameInitializiationStatus_43() const { return ___gameInitializiationStatus_43; }
	inline bool* get_address_of_gameInitializiationStatus_43() { return &___gameInitializiationStatus_43; }
	inline void set_gameInitializiationStatus_43(bool value)
	{
		___gameInitializiationStatus_43 = value;
	}

	inline static int32_t get_offset_of_hexagonRotationStatus_44() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonRotationStatus_44)); }
	inline bool get_hexagonRotationStatus_44() const { return ___hexagonRotationStatus_44; }
	inline bool* get_address_of_hexagonRotationStatus_44() { return &___hexagonRotationStatus_44; }
	inline void set_hexagonRotationStatus_44(bool value)
	{
		___hexagonRotationStatus_44 = value;
	}

	inline static int32_t get_offset_of_hexagonExplosionStatus_45() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonExplosionStatus_45)); }
	inline bool get_hexagonExplosionStatus_45() const { return ___hexagonExplosionStatus_45; }
	inline bool* get_address_of_hexagonExplosionStatus_45() { return &___hexagonExplosionStatus_45; }
	inline void set_hexagonExplosionStatus_45(bool value)
	{
		___hexagonExplosionStatus_45 = value;
	}

	inline static int32_t get_offset_of_hexagonProductionStatus_46() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonProductionStatus_46)); }
	inline bool get_hexagonProductionStatus_46() const { return ___hexagonProductionStatus_46; }
	inline bool* get_address_of_hexagonProductionStatus_46() { return &___hexagonProductionStatus_46; }
	inline void set_hexagonProductionStatus_46(bool value)
	{
		___hexagonProductionStatus_46 = value;
	}
};

struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields
{
public:
	// GridManager GridManager::instance
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___instance_26;

public:
	inline static int32_t get_offset_of_instance_26() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields, ___instance_26)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_instance_26() const { return ___instance_26; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_instance_26() { return &___instance_26; }
	inline void set_instance_26(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___instance_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_26), (void*)value);
	}
};


// Hexagon
struct  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048  : public SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A
{
public:
	// GridManager Hexagon::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_26;
	// System.Int32 Hexagon::x
	int32_t ___x_27;
	// System.Int32 Hexagon::y
	int32_t ___y_28;
	// UnityEngine.Color Hexagon::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_29;
	// UnityEngine.Vector2 Hexagon::lerpPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lerpPosition_30;
	// System.Boolean Hexagon::lerp
	bool ___lerp_31;
	// UnityEngine.Vector2 Hexagon::speed
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___speed_32;
	// System.Boolean Hexagon::bomb
	bool ___bomb_33;
	// System.Int32 Hexagon::bombTimer
	int32_t ___bombTimer_34;
	// UnityEngine.TextMesh Hexagon::text
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___text_35;

public:
	inline static int32_t get_offset_of_GridManagerObject_26() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___GridManagerObject_26)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_26() const { return ___GridManagerObject_26; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_26() { return &___GridManagerObject_26; }
	inline void set_GridManagerObject_26(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_26), (void*)value);
	}

	inline static int32_t get_offset_of_x_27() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___x_27)); }
	inline int32_t get_x_27() const { return ___x_27; }
	inline int32_t* get_address_of_x_27() { return &___x_27; }
	inline void set_x_27(int32_t value)
	{
		___x_27 = value;
	}

	inline static int32_t get_offset_of_y_28() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___y_28)); }
	inline int32_t get_y_28() const { return ___y_28; }
	inline int32_t* get_address_of_y_28() { return &___y_28; }
	inline void set_y_28(int32_t value)
	{
		___y_28 = value;
	}

	inline static int32_t get_offset_of_color_29() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___color_29)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_29() const { return ___color_29; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_29() { return &___color_29; }
	inline void set_color_29(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_29 = value;
	}

	inline static int32_t get_offset_of_lerpPosition_30() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___lerpPosition_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lerpPosition_30() const { return ___lerpPosition_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lerpPosition_30() { return &___lerpPosition_30; }
	inline void set_lerpPosition_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lerpPosition_30 = value;
	}

	inline static int32_t get_offset_of_lerp_31() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___lerp_31)); }
	inline bool get_lerp_31() const { return ___lerp_31; }
	inline bool* get_address_of_lerp_31() { return &___lerp_31; }
	inline void set_lerp_31(bool value)
	{
		___lerp_31 = value;
	}

	inline static int32_t get_offset_of_speed_32() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___speed_32)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_speed_32() const { return ___speed_32; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_speed_32() { return &___speed_32; }
	inline void set_speed_32(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___speed_32 = value;
	}

	inline static int32_t get_offset_of_bomb_33() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___bomb_33)); }
	inline bool get_bomb_33() const { return ___bomb_33; }
	inline bool* get_address_of_bomb_33() { return &___bomb_33; }
	inline void set_bomb_33(bool value)
	{
		___bomb_33 = value;
	}

	inline static int32_t get_offset_of_bombTimer_34() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___bombTimer_34)); }
	inline int32_t get_bombTimer_34() const { return ___bombTimer_34; }
	inline int32_t* get_address_of_bombTimer_34() { return &___bombTimer_34; }
	inline void set_bombTimer_34(int32_t value)
	{
		___bombTimer_34 = value;
	}

	inline static int32_t get_offset_of_text_35() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___text_35)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_text_35() const { return ___text_35; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_text_35() { return &___text_35; }
	inline void set_text_35(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_35), (void*)value);
	}
};


// InputManager
struct  InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A
{
public:
	// System.Boolean InputManager::validTouch
	bool ___validTouch_26;
	// GridManager InputManager::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_27;
	// UnityEngine.Vector2 InputManager::touchStartPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchStartPosition_28;
	// Hexagon InputManager::selectedHexagon
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___selectedHexagon_29;

public:
	inline static int32_t get_offset_of_validTouch_26() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___validTouch_26)); }
	inline bool get_validTouch_26() const { return ___validTouch_26; }
	inline bool* get_address_of_validTouch_26() { return &___validTouch_26; }
	inline void set_validTouch_26(bool value)
	{
		___validTouch_26 = value;
	}

	inline static int32_t get_offset_of_GridManagerObject_27() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___GridManagerObject_27)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_27() const { return ___GridManagerObject_27; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_27() { return &___GridManagerObject_27; }
	inline void set_GridManagerObject_27(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_27), (void*)value);
	}

	inline static int32_t get_offset_of_touchStartPosition_28() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___touchStartPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchStartPosition_28() const { return ___touchStartPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchStartPosition_28() { return &___touchStartPosition_28; }
	inline void set_touchStartPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchStartPosition_28 = value;
	}

	inline static int32_t get_offset_of_selectedHexagon_29() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___selectedHexagon_29)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_selectedHexagon_29() const { return ___selectedHexagon_29; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_selectedHexagon_29() { return &___selectedHexagon_29; }
	inline void set_selectedHexagon_29(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___selectedHexagon_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedHexagon_29), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UserInterfaceManager
struct  UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9  : public SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A
{
public:
	// UnityEngine.UI.Text UserInterfaceManager::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_26;
	// UnityEngine.UI.Text UserInterfaceManager::widthValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___widthValueText_27;
	// UnityEngine.UI.Text UserInterfaceManager::heightValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___heightValueText_28;
	// UnityEngine.UI.Text UserInterfaceManager::colorCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___colorCountText_29;
	// UnityEngine.UI.Slider UserInterfaceManager::widthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___widthSlider_30;
	// UnityEngine.UI.Slider UserInterfaceManager::heightSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___heightSlider_31;
	// UnityEngine.UI.Slider UserInterfaceManager::colorCountSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___colorCountSlider_32;
	// UnityEngine.GameObject UserInterfaceManager::preparationScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___preparationScreen_33;
	// UnityEngine.GameObject UserInterfaceManager::colorSelectionParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___colorSelectionParent_34;
	// UnityEngine.GameObject UserInterfaceManager::gameOverScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverScreen_35;
	// System.Collections.Generic.List`1<UnityEngine.Color> UserInterfaceManager::availableColors
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___availableColors_36;
	// System.Boolean UserInterfaceManager::tick
	bool ___tick_37;
	// GridManager UserInterfaceManager::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_38;
	// System.Int32 UserInterfaceManager::colorCount
	int32_t ___colorCount_39;
	// System.Int32 UserInterfaceManager::blownHexagons
	int32_t ___blownHexagons_40;
	// System.Int32 UserInterfaceManager::bombCount
	int32_t ___bombCount_41;

public:
	inline static int32_t get_offset_of_score_26() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___score_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_26() const { return ___score_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_26() { return &___score_26; }
	inline void set_score_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_26), (void*)value);
	}

	inline static int32_t get_offset_of_widthValueText_27() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___widthValueText_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_widthValueText_27() const { return ___widthValueText_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_widthValueText_27() { return &___widthValueText_27; }
	inline void set_widthValueText_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___widthValueText_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___widthValueText_27), (void*)value);
	}

	inline static int32_t get_offset_of_heightValueText_28() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___heightValueText_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_heightValueText_28() const { return ___heightValueText_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_heightValueText_28() { return &___heightValueText_28; }
	inline void set_heightValueText_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___heightValueText_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightValueText_28), (void*)value);
	}

	inline static int32_t get_offset_of_colorCountText_29() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___colorCountText_29)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_colorCountText_29() const { return ___colorCountText_29; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_colorCountText_29() { return &___colorCountText_29; }
	inline void set_colorCountText_29(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___colorCountText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorCountText_29), (void*)value);
	}

	inline static int32_t get_offset_of_widthSlider_30() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___widthSlider_30)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_widthSlider_30() const { return ___widthSlider_30; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_widthSlider_30() { return &___widthSlider_30; }
	inline void set_widthSlider_30(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___widthSlider_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___widthSlider_30), (void*)value);
	}

	inline static int32_t get_offset_of_heightSlider_31() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___heightSlider_31)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_heightSlider_31() const { return ___heightSlider_31; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_heightSlider_31() { return &___heightSlider_31; }
	inline void set_heightSlider_31(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___heightSlider_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightSlider_31), (void*)value);
	}

	inline static int32_t get_offset_of_colorCountSlider_32() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___colorCountSlider_32)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_colorCountSlider_32() const { return ___colorCountSlider_32; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_colorCountSlider_32() { return &___colorCountSlider_32; }
	inline void set_colorCountSlider_32(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___colorCountSlider_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorCountSlider_32), (void*)value);
	}

	inline static int32_t get_offset_of_preparationScreen_33() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___preparationScreen_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_preparationScreen_33() const { return ___preparationScreen_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_preparationScreen_33() { return &___preparationScreen_33; }
	inline void set_preparationScreen_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___preparationScreen_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preparationScreen_33), (void*)value);
	}

	inline static int32_t get_offset_of_colorSelectionParent_34() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___colorSelectionParent_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_colorSelectionParent_34() const { return ___colorSelectionParent_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_colorSelectionParent_34() { return &___colorSelectionParent_34; }
	inline void set_colorSelectionParent_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___colorSelectionParent_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorSelectionParent_34), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverScreen_35() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___gameOverScreen_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverScreen_35() const { return ___gameOverScreen_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverScreen_35() { return &___gameOverScreen_35; }
	inline void set_gameOverScreen_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverScreen_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_35), (void*)value);
	}

	inline static int32_t get_offset_of_availableColors_36() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___availableColors_36)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_availableColors_36() const { return ___availableColors_36; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_availableColors_36() { return &___availableColors_36; }
	inline void set_availableColors_36(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___availableColors_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableColors_36), (void*)value);
	}

	inline static int32_t get_offset_of_tick_37() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___tick_37)); }
	inline bool get_tick_37() const { return ___tick_37; }
	inline bool* get_address_of_tick_37() { return &___tick_37; }
	inline void set_tick_37(bool value)
	{
		___tick_37 = value;
	}

	inline static int32_t get_offset_of_GridManagerObject_38() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___GridManagerObject_38)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_38() const { return ___GridManagerObject_38; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_38() { return &___GridManagerObject_38; }
	inline void set_GridManagerObject_38(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_38), (void*)value);
	}

	inline static int32_t get_offset_of_colorCount_39() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___colorCount_39)); }
	inline int32_t get_colorCount_39() const { return ___colorCount_39; }
	inline int32_t* get_address_of_colorCount_39() { return &___colorCount_39; }
	inline void set_colorCount_39(int32_t value)
	{
		___colorCount_39 = value;
	}

	inline static int32_t get_offset_of_blownHexagons_40() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___blownHexagons_40)); }
	inline int32_t get_blownHexagons_40() const { return ___blownHexagons_40; }
	inline int32_t* get_address_of_blownHexagons_40() { return &___blownHexagons_40; }
	inline void set_blownHexagons_40(int32_t value)
	{
		___blownHexagons_40 = value;
	}

	inline static int32_t get_offset_of_bombCount_41() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9, ___bombCount_41)); }
	inline int32_t get_bombCount_41() const { return ___bombCount_41; }
	inline int32_t* get_address_of_bombCount_41() { return &___bombCount_41; }
	inline void set_bombCount_41(int32_t value)
	{
		___bombCount_41 = value;
	}
};

struct UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields
{
public:
	// UserInterfaceManager UserInterfaceManager::instance
	UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * ___instance_42;

public:
	inline static int32_t get_offset_of_instance_42() { return static_cast<int32_t>(offsetof(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields, ___instance_42)); }
	inline UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * get_instance_42() const { return ___instance_42; }
	inline UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 ** get_address_of_instance_42() { return &___instance_42; }
	inline void set_instance_42(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * value)
	{
		___instance_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_42), (void*)value);
	}
};


// BombHexagon
struct  BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C  : public Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048
{
public:
	// UnityEngine.TextMesh BombHexagon::output
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___output_36;
	// System.Int32 BombHexagon::clock
	int32_t ___clock_37;

public:
	inline static int32_t get_offset_of_output_36() { return static_cast<int32_t>(offsetof(BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C, ___output_36)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_output_36() const { return ___output_36; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_output_36() { return &___output_36; }
	inline void set_output_36(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___output_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_36), (void*)value);
	}

	inline static int32_t get_offset_of_clock_37() { return static_cast<int32_t>(offsetof(BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C, ___clock_37)); }
	inline int32_t get_clock_37() const { return ___clock_37; }
	inline int32_t* get_address_of_clock_37() { return &___clock_37; }
	inline void set_clock_37(int32_t value)
	{
		___clock_37 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Hexagon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon__ctor_mF20358A65A652140B91169D2183BCCCA04F37ECE (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Hexagon>::.ctor()
inline void List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>::.ctor()
inline void List_1__ctor_m1383DF1D5436B8B046CD2080291E5ABA69014F06 (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 GridManager::GetGridHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>::Add(!0)
inline void List_1_Add_m6B104E276DABD6488AF7C013EF6432EDC9ABCF5B (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * __this, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB *, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 GridManager::GetGridWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager::ColoredGridProducer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * GridManager_ColoredGridProducer_mFD92DFF981C7B6D20A49BE7E371F9F4D7C604C9A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GridManager::ProduceHexagons(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_ProduceHexagons_mF216882E207AC5B806210D76958CDD156BFECD87 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns0, List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colorSeed1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Hexagon>()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 Hexagon::GetX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Int32 Hexagon::GetY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void GridManager::DestructOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_DestructOutline_m9E83AB4574BD6486074B8E3043209EA49201565C (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void GridManager::ConstructOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_ConstructOutline_m97F86E276C4A76E590D60EE9E02B82A8DE290CAD (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GridManager::RotationCheckCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_RotationCheckCoroutine_mC3BB25898A141129CF08F7F9B14657C07C651AC1 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>::get_Item(System.Int32)
inline List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * (*) (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<Hexagon>::get_Item(System.Int32)
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void GridManager::FindOtherHexagons(UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindOtherHexagons_m9A398592DE92893F522DABA832D17B4E31EA31C8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___first0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___second1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Hexagon>::Clear()
inline void List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53 (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Hexagon>::Add(!0)
inline void List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Component::GetComponent<Hexagon>()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Hexagon/NeighbourHexes Hexagon::GetNeighbours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  Hexagon_GetNeighbours_m99336C11FB163D149207A9753760CF6CF38A966F (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void GridManager/<RotationCheckCoroutine>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCheckCoroutineU3Ed__28__ctor_m165DD50D44CFA13788B0B4942EEA02EE0B5CCC7C (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void Hexagon::Rotate(System.Int32,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___newX0, int32_t ___newY1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPos2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Hexagon>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9 (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, int32_t ___index0, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, int32_t, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Color Hexagon::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Hexagon_GetColor_m2CF9F1A23C0A11CF555E55B0B519625205B941D6 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Boolean GridManager::IsValid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_IsValid_mC97579920A40948FF3A7CE12F84C060760B37C1D (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Hexagon>::Contains(!0)
inline bool List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Hexagon>::get_Count()
inline int32_t List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>::get_Count()
inline int32_t List_1_get_Count_m708D65B549D5906DBD33E8694C0C2980B5B4DDD8_inline (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Hexagon>::GetEnumerator()
inline Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5 (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Hexagon>::get_Current()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_inline (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Hexagon::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Tick_m518A0C64ADDB0BB80C2095646B8F0AC7220A66FD (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Int32 Hexagon::GetTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetTimer_m4EE4E022D23E23947022D6BC749FD7D0E4A54F1C_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void UserInterfaceManager::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_GameEnd_m9EE28FEC19AF5ABB595A42E30116B42385EB1B9A (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Hexagon>::MoveNext()
inline bool Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Hexagon>::Dispose()
inline void Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45 (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Hexagon>::Remove(!0)
inline bool List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8 (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UserInterfaceManager::Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Score_m15090CE7D8C3098A0A965905ACE332644C523CD1 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Single GridManager::GetGridStartCoordinateX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_GetGridStartCoordinateX_m85C8BD73A8793BF8729BEBACE898668BB159A539 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Boolean GridManager::OnStepper(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_OnStepper_m7F5147F822CF9EE299FB007C1C3842D15BD53E72 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Void Hexagon::SetY(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hexagon_SetY_m88841976B92F9280B33C58C7F4C95871733B0350_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Hexagon::SetX(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hexagon_SetX_mADA28155D721819E3571A63AF143CF227D200837_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Hexagon::ChangeWorldPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeWorldPosition_m3576B62AFE71F2439CB204640FCB4A547C13626D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void GridManager::FindHexagonGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindHexagonGroup_m0C19AE1A3F2AE674BFFB971515BC1283A566121B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void GridManager/<ProduceHexagons>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34__ctor_m008E229C265136C469B69C391CED3C385F06D822 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::.ctor()
inline void List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0 (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::Add(!0)
inline void List_1_Add_m0583CD7F33964E64839674073BB0302DBAFBF933 (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::get_Item(System.Int32)
inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
inline int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, const RuntimeMethod*))List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
inline void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_gshared)(__this, ___index0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void SuperClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C (SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_alignment(UnityEngine.TextAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_alignment_m95F437AB7C56DA880A7722AFAF13845B1C6C0947 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean GridManager::InputAvailabile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_InputAvailabile_m8F95A8DE08536C53A8FBA739CED2FBF997C6C818 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapPoint_m023ABB1D290D24A6C77C5F9D7836A736F88AD345 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// Hexagon GridManager::GetSelectedHexagon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GridManager_GetSelectedHexagon_m6AEB5E526F945C630AFFF60C6A31B4C9E098DBA8_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void InputManager::TouchDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_TouchDetection_mC6E110B720303F39816D84C1483BA5F0D993F028 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void InputManager::CheckSelection(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckSelection_mA5EAF79E8B274BDFCE5F76AD33FB235A447B0985 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method);
// System.Void InputManager::CheckRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckRotation_m029C8303D2B59E8CF80DF655BAB675631F677DE2 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GridManager::Select(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Select_m4A59B910D29C1B5EE5C8B76A682D851FC9E62CB8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void GridManager::Rotate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Rotate_m9F9829F3D9C022D6A4536971DEC155425EDAEB62 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Void UserInterfaceManager::InitializeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_InitializeUI_m6200458E05497ACEB9E42513F7768F88C4190E87 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method);
// System.Void UserInterfaceManager::StartGameButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_StartGameButton_m4AF2930A3B0EBA3187975E32B3F5CDFA6DAD750A (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void GridManager::SetBombProduction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetBombProduction_m546671E3DB3BC8DB7380C63F0B035CE7BBBF8588 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void GridManager::SetGridHeight(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetGridHeight_mCC436AE6C56112A070571CE57D725B8AA8D3A674_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method);
// System.Void GridManager::SetGridWidth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetGridWidth_m9C0CA5202101B1CB4F36C31E8F375211FD4C3E02_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void GridManager::SetColorList(System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetColorList_mDAE0B7C49C9B71E9BF61B657214C0DD770843BE2_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___list0, const RuntimeMethod* method);
// System.Void GridManager::InitializeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_InitializeGrid_m74B652C115E94FCE1F74CEEEED8EE574A548FAAF (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UserInterfaceManager::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Default_m57AFDD9D4545E982ED75FB17DA1559B783FE3CB9 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GridManager/<ProduceHexagons>d__34::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34_U3CU3Em__Finally1_m58BCF61255FA6EE67E22BB820C90ACE1185A791D (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Hexagon::SetBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetBomb_m75C5B2B3528757640D84161F104CD373575D4E2D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void Hexagon::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetColor_m0A1ED0BA8B0E153340D3636F64F67E671DEA379D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColor0, const RuntimeMethod* method);
// System.Void Hexagon::ChangeGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeGridPosition_m6F484F8AFFE30B72E04F2F44411DB1E892288FDB (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method);
// System.Void GridManager/<ProduceHexagons>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34_System_IDisposable_Dispose_mDD4A9830BCCF55E80EE4643BA422EC5B31B1CEB0 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GridManager::SwapHexagons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SwapHexagons_m17CF300BD40EB533C521B8A559BFA80BB41C8D27 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Hexagon> GridManager::CheckExplosion(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * GridManager_CheckExplosion_m2F8E40735247CEB5403C0A6CF4E8423A8089B4F1 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * ___listToCheck0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> GridManager::ExplodeHexagons(System.Collections.Generic.List`1<Hexagon>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GridManager_ExplodeHexagons_mF901B62AA85347AD9BE0410E0BFE37B661637A31 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___list0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BombHexagon::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombHexagon_Tick_m3FA7F64CEBEC91E379C084F269AD83808BC3A1C5 (BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C * __this, const RuntimeMethod* method)
{
	{
		// public void Tick() { --clock; output.text = clock.ToString(); }
		int32_t L_0 = __this->get_clock_37();
		__this->set_clock_37(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// public void Tick() { --clock; output.text = clock.ToString(); }
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_output_36();
		int32_t* L_2 = __this->get_address_of_clock_37();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// public void Tick() { --clock; output.text = clock.ToString(); }
		return;
	}
}
// System.Int32 BombHexagon::GetClock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BombHexagon_GetClock_m2F5BC28DA8F6B97DBF95A71E6034BF0E67DFFCFB (BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C * __this, const RuntimeMethod* method)
{
	{
		// public int GetClock() { return clock; }
		int32_t L_0 = __this->get_clock_37();
		return L_0;
	}
}
// System.Void BombHexagon::SetClock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombHexagon_SetClock_m3F9F3902B55CD20AB51315C6CB698926C6443F2C (BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public void SetClock(int value) { clock = value; output.text = clock.ToString(); }
		int32_t L_0 = ___value0;
		__this->set_clock_37(L_0);
		// public void SetClock(int value) { clock = value; output.text = clock.ToString(); }
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_output_36();
		int32_t* L_2 = __this->get_address_of_clock_37();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// public void SetClock(int value) { clock = value; output.text = clock.ToString(); }
		return;
	}
}
// System.Void BombHexagon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BombHexagon__ctor_m1229CC0BA443D6BAD3C46C30DB80BFDE8C3D9CF2 (BombHexagon_tC2ABF5743D3C79F4CEB9ABFDB78867805E69063C * __this, const RuntimeMethod* method)
{
	{
		Hexagon__ctor_mF20358A65A652140B91169D2183BCCCA04F37ECE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Awake_m66D707CD8B7EEDA5C04ED846D28E425136A53678 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->set_instance_26(__this);
		return;
	}

IL_0014:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Start_m7186B78066068856342E44023A308EBE161C73D0 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1383DF1D5436B8B046CD2080291E5ABA69014F06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameEnd = false;
		__this->set_gameEnd_36((bool)0);
		// bombProduction = false;
		__this->set_bombProduction_35((bool)0);
		// hexagonRotationStatus = false;
		__this->set_hexagonRotationStatus_44((bool)0);
		// hexagonExplosionStatus = false;
		__this->set_hexagonExplosionStatus_45((bool)0);
		// hexagonProductionStatus = false;
		__this->set_hexagonProductionStatus_46((bool)0);
		// bombs = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_0, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		__this->set_bombs_41(L_0);
		// selectedGroup = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_1 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_1, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		__this->set_selectedGroup_40(L_1);
		// gameGrid = new List<List<Hexagon>>();
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_2 = (List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB *)il2cpp_codegen_object_new(List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB_il2cpp_TypeInfo_var);
		List_1__ctor_m1383DF1D5436B8B046CD2080291E5ABA69014F06(L_2, /*hidden argument*/List_1__ctor_m1383DF1D5436B8B046CD2080291E5ABA69014F06_RuntimeMethod_var);
		__this->set_gameGrid_39(L_2);
		// }
		return;
	}
}
// System.Void GridManager::InitializeGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_InitializeGrid_m74B652C115E94FCE1F74CEEEED8EE574A548FAAF (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6B104E276DABD6488AF7C013EF6432EDC9ABCF5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// List<int> missingCells = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i<GetGridWidth(); ++i) {
		V_1 = 0;
		goto IL_0036;
	}

IL_000a:
	{
		// for (int j = 0; j<GetGridHeight(); ++j)
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// missingCells.Add(i);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, L_2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int j = 0; j<GetGridHeight(); ++j)
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int j = 0; j<GetGridHeight(); ++j)
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000e;
		}
	}
	{
		// gameGrid.Add(new List<Hexagon>());
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_6 = __this->get_gameGrid_39();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_7 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_7, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_m6B104E276DABD6488AF7C013EF6432EDC9ABCF5B(L_6, L_7, /*hidden argument*/List_1_Add_m6B104E276DABD6488AF7C013EF6432EDC9ABCF5B_RuntimeMethod_var);
		// for (int i = 0; i<GetGridWidth(); ++i) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i<GetGridWidth(); ++i) {
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		// StartCoroutine(ProduceHexagons(missingCells, ColoredGridProducer()));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = V_0;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_12;
		L_12 = GridManager_ColoredGridProducer_mFD92DFF981C7B6D20A49BE7E371F9F4D7C604C9A(__this, /*hidden argument*/NULL);
		RuntimeObject* L_13;
		L_13 = GridManager_ProduceHexagons_mF216882E207AC5B806210D76958CDD156BFECD87(__this, L_11, L_12, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::Select(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Select_m4A59B910D29C1B5EE5C8B76A682D851FC9E62CB8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (selectedHexagon == null || !selectedHexagon.GetComponent<Collider2D>().Equals(collider)) {
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_0 = __this->get_selectedHexagon_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_2 = __this->get_selectedHexagon_38();
		NullCheck(L_2);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3;
		L_3 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(L_2, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collider0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (L_5)
		{
			goto IL_0069;
		}
	}

IL_0021:
	{
		// selectedHexagon = collider.gameObject.GetComponent<Hexagon>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collider0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_8;
		L_8 = GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48(L_7, /*hidden argument*/GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
		__this->set_selectedHexagon_38(L_8);
		// selectedPosition.x = selectedHexagon.GetX();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_selectedPosition_37();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_10 = __this->get_selectedHexagon_38();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_10, /*hidden argument*/NULL);
		L_9->set_x_0(((float)((float)L_11)));
		// selectedPosition.y = selectedHexagon.GetY();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_selectedPosition_37();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_13 = __this->get_selectedHexagon_38();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline(L_13, /*hidden argument*/NULL);
		L_12->set_y_1(((float)((float)L_14)));
		// selectionStatus = 0;
		__this->set_selectionStatus_34(0);
		// }
		goto IL_0082;
	}

IL_0069:
	{
		// selectionStatus = (++selectionStatus) % SELECTION_STATUS_COUNT;
		int32_t L_15 = __this->get_selectionStatus_34();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_0;
		__this->set_selectionStatus_34(L_16);
		int32_t L_17 = V_0;
		__this->set_selectionStatus_34(((int32_t)((int32_t)L_17%(int32_t)6)));
	}

IL_0082:
	{
		// DestructOutline();
		GridManager_DestructOutline_m9E83AB4574BD6486074B8E3043209EA49201565C(__this, /*hidden argument*/NULL);
		// ConstructOutline();
		GridManager_ConstructOutline_m97F86E276C4A76E590D60EE9E02B82A8DE290CAD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::Rotate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Rotate_m9F9829F3D9C022D6A4536971DEC155425EDAEB62 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method)
{
	{
		// DestructOutline();
		GridManager_DestructOutline_m9E83AB4574BD6486074B8E3043209EA49201565C(__this, /*hidden argument*/NULL);
		// StartCoroutine(RotationCheckCoroutine(clockWise));
		bool L_0 = ___clockWise0;
		RuntimeObject* L_1;
		L_1 = GridManager_RotationCheckCoroutine_mC3BB25898A141129CF08F7F9B14657C07C651AC1(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::FindHexagonGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindHexagonGroup_m0C19AE1A3F2AE674BFFB971515BC1283A566121B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// List<Hexagon> returnValue = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_0, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		// selectedHexagon = gameGrid[(int)selectedPosition.x][(int)selectedPosition.y];
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_1 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_selectedPosition_37();
		float L_3 = L_2->get_x_0();
		NullCheck(L_1);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_4;
		L_4 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_1, ((int32_t)((int32_t)L_3)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_selectedPosition_37();
		float L_6 = L_5->get_y_1();
		NullCheck(L_4);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7;
		L_7 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_4, ((int32_t)((int32_t)L_6)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		__this->set_selectedHexagon_38(L_7);
		// FindOtherHexagons(out firstPos, out secondPos);
		GridManager_FindOtherHexagons_m9A398592DE92893F522DABA832D17B4E31EA31C8(__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		// selectedGroup.Clear();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_8 = __this->get_selectedGroup_40();
		NullCheck(L_8);
		List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53(L_8, /*hidden argument*/List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53_RuntimeMethod_var);
		// selectedGroup.Add(selectedHexagon);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_9 = __this->get_selectedGroup_40();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_10 = __this->get_selectedHexagon_38();
		NullCheck(L_9);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_9, L_10, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		// selectedGroup.Add(gameGrid[(int)firstPos.x][(int)firstPos.y].GetComponent<Hexagon>());
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_11 = __this->get_selectedGroup_40();
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_12 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		NullCheck(L_12);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_15;
		L_15 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_12, ((int32_t)((int32_t)L_14)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_0;
		float L_17 = L_16.get_y_1();
		NullCheck(L_15);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_18;
		L_18 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_15, ((int32_t)((int32_t)L_17)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_18);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_19;
		L_19 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_18, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_11, L_19, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		// selectedGroup.Add(gameGrid[(int)secondPos.x][(int)secondPos.y].GetComponent<Hexagon>());
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_20 = __this->get_selectedGroup_40();
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_21 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_1;
		float L_23 = L_22.get_x_0();
		NullCheck(L_21);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_24;
		L_24 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_21, ((int32_t)((int32_t)L_23)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		float L_26 = L_25.get_y_1();
		NullCheck(L_24);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_27;
		L_27 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_24, ((int32_t)((int32_t)L_26)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_27);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_28;
		L_28 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_27, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_20);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_20, L_28, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GridManager::FindOtherHexagons(UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindOtherHexagons_m9A398592DE92893F522DABA832D17B4E31EA31C8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___first0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___second1, const RuntimeMethod* method)
{
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// Hexagon.NeighbourHexes neighbours = selectedHexagon.GetNeighbours();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_0 = __this->get_selectedHexagon_38();
		NullCheck(L_0);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_1;
		L_1 = Hexagon_GetNeighbours_m99336C11FB163D149207A9753760CF6CF38A966F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// bool breakLoop = false;
		V_1 = (bool)0;
	}

IL_000e:
	{
		// switch (selectionStatus) {
		int32_t L_2 = __this->get_selectionStatus_34();
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0089;
			}
			case 4:
			{
				goto IL_00a3;
			}
			case 5:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_0038:
	{
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_5 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5.get_up_0();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_4 = L_6;
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = L_8.get_upRight_2();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_7 = L_9;
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		goto IL_00ed;
	}

IL_0055:
	{
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11.get_upRight_2();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_10 = L_12;
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_14 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14.get_downRight_5();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_13 = L_15;
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		goto IL_00ed;
	}

IL_006f:
	{
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = L_17.get_downRight_5();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_16 = L_18;
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_20 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = L_20.get_down_3();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_19 = L_21;
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		goto IL_00ed;
	}

IL_0089:
	{
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_23 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = L_23.get_down_3();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_22 = L_24;
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_26 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = L_26.get_downLeft_4();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_25 = L_27;
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		goto IL_00ed;
	}

IL_00a3:
	{
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_29 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = L_29.get_downLeft_4();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_28 = L_30;
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_32 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = L_32.get_upLeft_1();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_31 = L_33;
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		goto IL_00ed;
	}

IL_00bd:
	{
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = ___first0;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_35 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = L_35.get_upLeft_1();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_34 = L_36;
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = ___second1;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_38 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = L_38.get_up_0();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_37 = L_39;
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		goto IL_00ed;
	}

IL_00d7:
	{
		// default: first = Vector2.zero; second = Vector2.zero; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = ___first0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_40 = L_41;
		// default: first = Vector2.zero; second = Vector2.zero; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = ___second1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_42 = L_43;
	}

IL_00ed:
	{
		// if (first.x < ZERO || first.x >= gridWidth || first.y < ZERO || first.y >= gridHeight || second.x < ZERO || second.x >= gridWidth || second.y < ZERO || second.y >= gridHeight) {
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = ___first0;
		float L_45 = L_44->get_x_0();
		if ((((float)L_45) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = ___first0;
		float L_47 = L_46->get_x_0();
		int32_t L_48 = __this->get_gridWidth_32();
		if ((((float)L_47) >= ((float)((float)((float)L_48)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = ___first0;
		float L_50 = L_49->get_y_1();
		if ((((float)L_50) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_51 = ___first0;
		float L_52 = L_51->get_y_1();
		int32_t L_53 = __this->get_gridHeight_33();
		if ((((float)L_52) >= ((float)((float)((float)L_53)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_54 = ___second1;
		float L_55 = L_54->get_x_0();
		if ((((float)L_55) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_56 = ___second1;
		float L_57 = L_56->get_x_0();
		int32_t L_58 = __this->get_gridWidth_32();
		if ((((float)L_57) >= ((float)((float)((float)L_58)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_59 = ___second1;
		float L_60 = L_59->get_y_1();
		if ((((float)L_60) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_61 = ___second1;
		float L_62 = L_61->get_y_1();
		int32_t L_63 = __this->get_gridHeight_33();
		if ((!(((float)L_62) >= ((float)((float)((float)L_63))))))
		{
			goto IL_0178;
		}
	}

IL_015d:
	{
		// selectionStatus = (++selectionStatus) % SELECTION_STATUS_COUNT;
		int32_t L_64 = __this->get_selectionStatus_34();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		int32_t L_65 = V_2;
		__this->set_selectionStatus_34(L_65);
		int32_t L_66 = V_2;
		__this->set_selectionStatus_34(((int32_t)((int32_t)L_66%(int32_t)6)));
		// }
		goto IL_017a;
	}

IL_0178:
	{
		// breakLoop = true;
		V_1 = (bool)1;
	}

IL_017a:
	{
		// } while (!breakLoop);
		bool L_67 = V_1;
		if (!L_67)
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GridManager::RotationCheckCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_RotationCheckCoroutine_mC3BB25898A141129CF08F7F9B14657C07C651AC1 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * L_0 = (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 *)il2cpp_codegen_object_new(U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0_il2cpp_TypeInfo_var);
		U3CRotationCheckCoroutineU3Ed__28__ctor_m165DD50D44CFA13788B0B4942EEA02EE0B5CCC7C(L_0, 0, /*hidden argument*/NULL);
		U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * L_2 = L_1;
		bool L_3 = ___clockWise0;
		NullCheck(L_2);
		L_2->set_clockWise_3(L_3);
		return L_2;
	}
}
// System.Void GridManager::SwapHexagons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SwapHexagons_m17CF300BD40EB533C521B8A559BFA80BB41C8D27 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___clockWise0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_9 = NULL;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_10 = NULL;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_11 = NULL;
	{
		// first = selectedGroup[0];
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = __this->get_selectedGroup_40();
		NullCheck(L_0);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_1;
		L_1 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		V_9 = L_1;
		// second = selectedGroup[1];
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_2 = __this->get_selectedGroup_40();
		NullCheck(L_2);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_3;
		L_3 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_2, 1, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		V_10 = L_3;
		// third = selectedGroup[2];
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_4 = __this->get_selectedGroup_40();
		NullCheck(L_4);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_5;
		L_5 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_4, 2, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		V_11 = L_5;
		// x1 = first.GetX();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_6 = V_9;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// x2 = second.GetX();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_8 = V_10;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// x3 = third.GetX();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_10 = V_11;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// y1 = first.GetY();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_12 = V_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// y2 = second.GetY();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_14 = V_10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// y3 = third.GetY();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_16 = V_11;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// pos1 = first.transform.position;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_18 = V_9;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		// pos2 = second.transform.position;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_22 = V_10;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// pos3 = third.transform.position;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_26 = V_11;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		// if (clockWise) {
		bool L_30 = ___clockWise0;
		if (!L_30)
		{
			goto IL_00fa;
		}
	}
	{
		// first.Rotate(x2, y2, pos2);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_31 = V_9;
		int32_t L_32 = V_1;
		int32_t L_33 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_7;
		NullCheck(L_31);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		// gameGrid[x2][y2] = first;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_35 = __this->get_gameGrid_39();
		int32_t L_36 = V_1;
		NullCheck(L_35);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_37;
		L_37 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_38 = V_4;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_39 = V_9;
		NullCheck(L_37);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_37, L_38, L_39, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// second.Rotate(x3, y3, pos3);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_40 = V_10;
		int32_t L_41 = V_2;
		int32_t L_42 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_8;
		NullCheck(L_40);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		// gameGrid[x3][y3] = second;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_44 = __this->get_gameGrid_39();
		int32_t L_45 = V_2;
		NullCheck(L_44);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_46;
		L_46 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_47 = V_5;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_48 = V_10;
		NullCheck(L_46);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_46, L_47, L_48, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// third.Rotate(x1, y1, pos1);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_49 = V_11;
		int32_t L_50 = V_0;
		int32_t L_51 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_6;
		NullCheck(L_49);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		// gameGrid[x1][y1] = third;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_53 = __this->get_gameGrid_39();
		int32_t L_54 = V_0;
		NullCheck(L_53);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_55;
		L_55 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_56 = V_3;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_57 = V_11;
		NullCheck(L_55);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_55, L_56, L_57, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// }
		return;
	}

IL_00fa:
	{
		// first.Rotate(x3, y3, pos3);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_58 = V_9;
		int32_t L_59 = V_2;
		int32_t L_60 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = V_8;
		NullCheck(L_58);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		// gameGrid[x3][y3] = first;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_62 = __this->get_gameGrid_39();
		int32_t L_63 = V_2;
		NullCheck(L_62);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_64;
		L_64 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_65 = V_5;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_66 = V_9;
		NullCheck(L_64);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_64, L_65, L_66, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// second.Rotate(x1, y1, pos1);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_67 = V_10;
		int32_t L_68 = V_0;
		int32_t L_69 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_70 = V_6;
		NullCheck(L_67);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_67, L_68, L_69, L_70, /*hidden argument*/NULL);
		// gameGrid[x1][y1] = second;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_71 = __this->get_gameGrid_39();
		int32_t L_72 = V_0;
		NullCheck(L_71);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_73;
		L_73 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_71, L_72, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_74 = V_3;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_75 = V_10;
		NullCheck(L_73);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_73, L_74, L_75, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// third.Rotate(x2, y2, pos2);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_76 = V_11;
		int32_t L_77 = V_1;
		int32_t L_78 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79 = V_7;
		NullCheck(L_76);
		Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4(L_76, L_77, L_78, L_79, /*hidden argument*/NULL);
		// gameGrid[x2][y2] = third;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_80 = __this->get_gameGrid_39();
		int32_t L_81 = V_1;
		NullCheck(L_80);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_82;
		L_82 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_80, L_81, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_83 = V_4;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_84 = V_11;
		NullCheck(L_82);
		List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9(L_82, L_83, L_84, /*hidden argument*/List_1_set_Item_mCD238DEC8475C96EF5E8743BC971433985FA92D9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Hexagon> GridManager::CheckExplosion(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Hexagon>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * GridManager_CheckExplosion_m2F8E40735247CEB5403C0A6CF4E8423A8089B4F1 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * ___listToCheck0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m708D65B549D5906DBD33E8694C0C2980B5B4DDD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * V_0 = NULL;
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * V_1 = NULL;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_2 = NULL;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// List<Hexagon> neighbourList = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_0, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		V_0 = L_0;
		// List<Hexagon> explosiveList = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_1 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_1, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		V_1 = L_1;
		// for (int i = 0; i<listToCheck.Count; ++i) {
		V_5 = 0;
		goto IL_01f0;
	}

IL_0014:
	{
		// for (int j = 0; j<listToCheck[i].Count; ++j) {
		V_6 = 0;
		goto IL_01d6;
	}

IL_001c:
	{
		// currentHexagon = listToCheck[i][j];
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_2 = ___listToCheck0;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_4;
		L_4 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_5 = V_6;
		NullCheck(L_4);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_6;
		L_6 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		V_2 = L_6;
		// currentColor = currentHexagon.GetColor();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7 = V_2;
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Hexagon_GetColor_m2CF9F1A23C0A11CF555E55B0B519625205B941D6(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// currentNeighbours = currentHexagon.GetNeighbours();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_9 = V_2;
		NullCheck(L_9);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_10;
		L_10 = Hexagon_GetNeighbours_m99336C11FB163D149207A9753760CF6CF38A966F(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (IsValid(currentNeighbours.up)) neighbourList.Add(gameGrid[(int)currentNeighbours.up.x][(int)currentNeighbours.up.y]);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_11 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11.get_up_0();
		bool L_13;
		L_13 = GridManager_IsValid_mC97579920A40948FF3A7CE12F84C060760B37C1D(__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		// if (IsValid(currentNeighbours.up)) neighbourList.Add(gameGrid[(int)currentNeighbours.up.x][(int)currentNeighbours.up.y]);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_14 = V_0;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_15 = __this->get_gameGrid_39();
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_16 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = L_16.get_up_0();
		float L_18 = L_17.get_x_0();
		NullCheck(L_15);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_19;
		L_19 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_15, ((int32_t)((int32_t)L_18)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_20 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = L_20.get_up_0();
		float L_22 = L_21.get_y_1();
		NullCheck(L_19);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_23;
		L_23 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_19, ((int32_t)((int32_t)L_22)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_14, L_23, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		goto IL_0080;
	}

IL_0079:
	{
		// else neighbourList.Add(null);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_24 = V_0;
		NullCheck(L_24);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_24, (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_0080:
	{
		// if (IsValid(currentNeighbours.upRight)) neighbourList.Add(gameGrid[(int)currentNeighbours.upRight.x][(int)currentNeighbours.upRight.y]);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_25 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = L_25.get_upRight_2();
		bool L_27;
		L_27 = GridManager_IsValid_mC97579920A40948FF3A7CE12F84C060760B37C1D(__this, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00be;
		}
	}
	{
		// if (IsValid(currentNeighbours.upRight)) neighbourList.Add(gameGrid[(int)currentNeighbours.upRight.x][(int)currentNeighbours.upRight.y]);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_28 = V_0;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_29 = __this->get_gameGrid_39();
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_30 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = L_30.get_upRight_2();
		float L_32 = L_31.get_x_0();
		NullCheck(L_29);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_33;
		L_33 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_29, ((int32_t)((int32_t)L_32)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_34 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = L_34.get_upRight_2();
		float L_36 = L_35.get_y_1();
		NullCheck(L_33);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_37;
		L_37 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_33, ((int32_t)((int32_t)L_36)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_28);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_28, L_37, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		goto IL_00c5;
	}

IL_00be:
	{
		// else neighbourList.Add(null);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_38 = V_0;
		NullCheck(L_38);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_38, (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_00c5:
	{
		// if (IsValid(currentNeighbours.downRight)) neighbourList.Add(gameGrid[(int)currentNeighbours.downRight.x][(int)currentNeighbours.downRight.y]);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_39 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = L_39.get_downRight_5();
		bool L_41;
		L_41 = GridManager_IsValid_mC97579920A40948FF3A7CE12F84C060760B37C1D(__this, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		// if (IsValid(currentNeighbours.downRight)) neighbourList.Add(gameGrid[(int)currentNeighbours.downRight.x][(int)currentNeighbours.downRight.y]);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_42 = V_0;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_43 = __this->get_gameGrid_39();
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_44 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = L_44.get_downRight_5();
		float L_46 = L_45.get_x_0();
		NullCheck(L_43);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_47;
		L_47 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_43, ((int32_t)((int32_t)L_46)), /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_48 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49 = L_48.get_downRight_5();
		float L_50 = L_49.get_y_1();
		NullCheck(L_47);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_51;
		L_51 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_47, ((int32_t)((int32_t)L_50)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_42, L_51, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		goto IL_010a;
	}

IL_0103:
	{
		// else neighbourList.Add(null);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_52 = V_0;
		NullCheck(L_52);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_52, (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_010a:
	{
		// for (int k = 0; k<neighbourList.Count-1; ++k) {
		V_7 = 0;
		goto IL_01bb;
	}

IL_0112:
	{
		// if (neighbourList[k] != null && neighbourList[k+1] != null) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_53 = V_0;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_55;
		L_55 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_55, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_57 = V_0;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_59;
		L_59 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_57, ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_59, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01b5;
		}
	}
	{
		// if (neighbourList[k].GetColor() == currentColor && neighbourList[k+1].GetColor() == currentColor) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_61 = V_0;
		int32_t L_62 = V_7;
		NullCheck(L_61);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_63;
		L_63 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_63);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		L_64 = Hexagon_GetColor_m2CF9F1A23C0A11CF555E55B0B519625205B941D6(L_63, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65 = V_4;
		bool L_66;
		L_66 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_64, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01b5;
		}
	}
	{
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_67 = V_0;
		int32_t L_68 = V_7;
		NullCheck(L_67);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_69;
		L_69 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_69);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		L_70 = Hexagon_GetColor_m2CF9F1A23C0A11CF555E55B0B519625205B941D6(L_69, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71 = V_4;
		bool L_72;
		L_72 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_70, L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01b5;
		}
	}
	{
		// if (!explosiveList.Contains(neighbourList[k]))
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_73 = V_1;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_74 = V_0;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_76;
		L_76 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_74, L_75, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_73);
		bool L_77;
		L_77 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_73, L_76, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		if (L_77)
		{
			goto IL_0183;
		}
	}
	{
		// explosiveList.Add(neighbourList[k]);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_78 = V_1;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_79 = V_0;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_81;
		L_81 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_79, L_80, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_78);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_78, L_81, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_0183:
	{
		// if (!explosiveList.Contains(neighbourList[k+1]))
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_82 = V_1;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_83 = V_0;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_85;
		L_85 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_83, ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_82);
		bool L_86;
		L_86 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_82, L_85, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		if (L_86)
		{
			goto IL_01a5;
		}
	}
	{
		// explosiveList.Add(neighbourList[k+1]);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_87 = V_1;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_88 = V_0;
		int32_t L_89 = V_7;
		NullCheck(L_88);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_90;
		L_90 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_88, ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)), /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_87, L_90, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_01a5:
	{
		// if (!explosiveList.Contains(currentHexagon))
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_91 = V_1;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_92 = V_2;
		NullCheck(L_91);
		bool L_93;
		L_93 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_91, L_92, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		if (L_93)
		{
			goto IL_01b5;
		}
	}
	{
		// explosiveList.Add(currentHexagon);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_94 = V_1;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_95 = V_2;
		NullCheck(L_94);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_94, L_95, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
	}

IL_01b5:
	{
		// for (int k = 0; k<neighbourList.Count-1; ++k) {
		int32_t L_96 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01bb:
	{
		// for (int k = 0; k<neighbourList.Count-1; ++k) {
		int32_t L_97 = V_7;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_98 = V_0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_98, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)))))
		{
			goto IL_0112;
		}
	}
	{
		// neighbourList.Clear();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_100 = V_0;
		NullCheck(L_100);
		List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53(L_100, /*hidden argument*/List_1_Clear_m64BD3D3539C9C2FE2657A6C6C5B01A78D5104B53_RuntimeMethod_var);
		// for (int j = 0; j<listToCheck[i].Count; ++j) {
		int32_t L_101 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_01d6:
	{
		// for (int j = 0; j<listToCheck[i].Count; ++j) {
		int32_t L_102 = V_6;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_103 = ___listToCheck0;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_105;
		L_105 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_103, L_104, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		NullCheck(L_105);
		int32_t L_106;
		L_106 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_105, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_102) < ((int32_t)L_106)))
		{
			goto IL_001c;
		}
	}
	{
		// for (int i = 0; i<listToCheck.Count; ++i) {
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_01f0:
	{
		// for (int i = 0; i<listToCheck.Count; ++i) {
		int32_t L_108 = V_5;
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_109 = ___listToCheck0;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_m708D65B549D5906DBD33E8694C0C2980B5B4DDD8_inline(L_109, /*hidden argument*/List_1_get_Count_m708D65B549D5906DBD33E8694C0C2980B5B4DDD8_RuntimeMethod_var);
		if ((((int32_t)L_108) < ((int32_t)L_110)))
		{
			goto IL_0014;
		}
	}
	{
		// return explosiveList;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_111 = V_1;
		return L_111;
	}
}
// System.Collections.Generic.List`1<System.Int32> GridManager::ExplodeHexagons(System.Collections.Generic.List`1<Hexagon>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GridManager_ExplodeHexagons_mF901B62AA85347AD9BE0410E0BFE37B661637A31 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_4 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_5 = NULL;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_6 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B21_0 = 0.0f;
	float G_B20_0 = 0.0f;
	float G_B22_0 = 0.0f;
	float G_B22_1 = 0.0f;
	{
		// List<int> missingColumns = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Hexagon hex in bombs) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_1 = __this->get_bombs_41();
		NullCheck(L_1);
		Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  L_2;
		L_2 = List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5(L_1, /*hidden argument*/List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var);
		V_3 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0014:
		{
			// foreach (Hexagon hex in bombs) {
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_3;
			L_3 = Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_inline((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var);
			V_4 = L_3;
			// if (!list.Contains(hex)) {
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_4 = ___list0;
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_5 = V_4;
			NullCheck(L_4);
			bool L_6;
			L_6 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_4, L_5, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0056;
			}
		}

IL_0027:
		{
			// hex.Tick();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7 = V_4;
			NullCheck(L_7);
			Hexagon_Tick_m518A0C64ADDB0BB80C2095646B8F0AC7220A66FD(L_7, /*hidden argument*/NULL);
			// if (hex.GetTimer() == ZERO) {
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_8 = V_4;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = Hexagon_GetTimer_m4EE4E022D23E23947022D6BC749FD7D0E4A54F1C_inline(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0056;
			}
		}

IL_0037:
		{
			// gameEnd = true;
			__this->set_gameEnd_36((bool)1);
			// UserInterfaceManager.instance.GameEnd();
			UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * L_10 = ((UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields*)il2cpp_codegen_static_fields_for(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var))->get_instance_42();
			NullCheck(L_10);
			UserInterfaceManager_GameEnd_m9EE28FEC19AF5ABB595A42E30116B42385EB1B9A(L_10, /*hidden argument*/NULL);
			// StopAllCoroutines();
			MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
			// return missingColumns;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = V_0;
			V_5 = L_11;
			IL2CPP_LEAVE(0x1F5, FINALLY_0061);
		}

IL_0056:
		{
			// foreach (Hexagon hex in bombs) {
			bool L_12;
			L_12 = Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F5, IL_01f5)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// foreach (Hexagon hex in list) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_13 = ___list0;
		NullCheck(L_13);
		Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  L_14;
		L_14 = List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5(L_13, /*hidden argument*/List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_0076:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dc;
		}

IL_0078:
		{
			// foreach (Hexagon hex in list) {
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_15;
			L_15 = Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_inline((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var);
			V_6 = L_15;
			// if (bombs.Contains(hex)) {
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_16 = __this->get_bombs_41();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_17 = V_6;
			NullCheck(L_16);
			bool L_18;
			L_18 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_16, L_17, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_009e;
			}
		}

IL_0090:
		{
			// bombs.Remove(hex);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_19 = __this->get_bombs_41();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_20 = V_6;
			NullCheck(L_19);
			bool L_21;
			L_21 = List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8(L_19, L_20, /*hidden argument*/List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8_RuntimeMethod_var);
		}

IL_009e:
		{
			// UserInterfaceManager.instance.Score(1);
			UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * L_22 = ((UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields*)il2cpp_codegen_static_fields_for(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var))->get_instance_42();
			NullCheck(L_22);
			UserInterfaceManager_Score_m15090CE7D8C3098A0A965905ACE332644C523CD1(L_22, 1, /*hidden argument*/NULL);
			// gameGrid[hex.GetX()].Remove(hex);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_23 = __this->get_gameGrid_39();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_24 = V_6;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_26;
			L_26 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_23, L_25, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_27 = V_6;
			NullCheck(L_26);
			bool L_28;
			L_28 = List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8(L_26, L_27, /*hidden argument*/List_1_Remove_m101F52DCEAFFA3846353FEFB737161FF5BD3B1A8_RuntimeMethod_var);
			// missingColumns.Add(hex.GetX());
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_29 = V_0;
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_30 = V_6;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_29, L_31, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
			// Destroy(hex.gameObject);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_32 = V_6;
			NullCheck(L_32);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
			L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_33, /*hidden argument*/NULL);
		}

IL_00dc:
		{
			// foreach (Hexagon hex in list) {
			bool L_34;
			L_34 = Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0078;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF5, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_3), /*hidden argument*/Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(231)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		// foreach (int i in missingColumns) {
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_35 = V_0;
		NullCheck(L_35);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_36;
		L_36 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_35, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_7 = L_36;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d0;
		}

IL_0102:
		{
			// foreach (int i in missingColumns) {
			int32_t L_37;
			L_37 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_8 = L_37;
			// for (int j=0; j<gameGrid[i].Count; ++j) {
			V_9 = 0;
			goto IL_01b7;
		}

IL_0113:
		{
			// positionX = GetGridStartCoordinateX() + (HEX_DISTANCE_HORIZONTAL * i);
			float L_38;
			L_38 = GridManager_GetGridStartCoordinateX_m85C8BD73A8793BF8729BEBACE898668BB159A539(__this, /*hidden argument*/NULL);
			int32_t L_39 = V_8;
			V_1 = ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)(0.444999993f), (float)((float)((float)L_39))))));
			// positionY = (HEX_DISTANCE_VERTICAL * j * 2) + GRID_VERTICAL_OFFSET + (OnStepper(i) ? HEX_DISTANCE_VERTICAL : ZERO);
			int32_t L_40 = V_9;
			int32_t L_41 = V_8;
			bool L_42;
			L_42 = GridManager_OnStepper_m7F5147F822CF9EE299FB007C1C3842D15BD53E72(__this, L_41, /*hidden argument*/NULL);
			G_B20_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_40)))), (float)(2.0f))), (float)(-3.0f)));
			if (L_42)
			{
				G_B21_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_40)))), (float)(2.0f))), (float)(-3.0f)));
				goto IL_014a;
			}
		}

IL_0143:
		{
			G_B22_0 = (0.0f);
			G_B22_1 = G_B20_0;
			goto IL_014f;
		}

IL_014a:
		{
			G_B22_0 = (0.230000004f);
			G_B22_1 = G_B21_0;
		}

IL_014f:
		{
			V_2 = ((float)il2cpp_codegen_add((float)G_B22_1, (float)G_B22_0));
			// gameGrid[i][j].SetY(j);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_43 = __this->get_gameGrid_39();
			int32_t L_44 = V_8;
			NullCheck(L_43);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_45;
			L_45 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			int32_t L_46 = V_9;
			NullCheck(L_45);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_47;
			L_47 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
			int32_t L_48 = V_9;
			NullCheck(L_47);
			Hexagon_SetY_m88841976B92F9280B33C58C7F4C95871733B0350_inline(L_47, L_48, /*hidden argument*/NULL);
			// gameGrid[i][j].SetX(i);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_49 = __this->get_gameGrid_39();
			int32_t L_50 = V_8;
			NullCheck(L_49);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_51;
			L_51 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			int32_t L_52 = V_9;
			NullCheck(L_51);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_53;
			L_53 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_51, L_52, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
			int32_t L_54 = V_8;
			NullCheck(L_53);
			Hexagon_SetX_mADA28155D721819E3571A63AF143CF227D200837_inline(L_53, L_54, /*hidden argument*/NULL);
			// gameGrid[i][j].ChangeWorldPosition(new Vector3(positionX, positionY, ZERO));
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_55 = __this->get_gameGrid_39();
			int32_t L_56 = V_8;
			NullCheck(L_55);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_57;
			L_57 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_55, L_56, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			int32_t L_58 = V_9;
			NullCheck(L_57);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_59;
			L_59 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
			float L_60 = V_1;
			float L_61 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			memset((&L_62), 0, sizeof(L_62));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), L_60, L_61, (0.0f), /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63;
			L_63 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_62, /*hidden argument*/NULL);
			NullCheck(L_59);
			Hexagon_ChangeWorldPosition_m3576B62AFE71F2439CB204640FCB4A547C13626D(L_59, L_63, /*hidden argument*/NULL);
			// for (int j=0; j<gameGrid[i].Count; ++j) {
			int32_t L_64 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		}

IL_01b7:
		{
			// for (int j=0; j<gameGrid[i].Count; ++j) {
			int32_t L_65 = V_9;
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_66 = __this->get_gameGrid_39();
			int32_t L_67 = V_8;
			NullCheck(L_66);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_68;
			L_68 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_66, L_67, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			NullCheck(L_68);
			int32_t L_69;
			L_69 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_68, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
			if ((((int32_t)L_65) < ((int32_t)L_69)))
			{
				goto IL_0113;
			}
		}

IL_01d0:
		{
			// foreach (int i in missingColumns) {
			bool L_70;
			L_70 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0102;
			}
		}

IL_01dc:
		{
			IL2CPP_LEAVE(0x1EC, FINALLY_01de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01de;
	}

FINALLY_01de:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(478)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(478)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1EC, IL_01ec)
	}

IL_01ec:
	{
		// hexagonExplosionStatus = false;
		__this->set_hexagonExplosionStatus_45((bool)0);
		// return missingColumns;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_71 = V_0;
		return L_71;
	}

IL_01f5:
	{
		// }
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_72 = V_5;
		return L_72;
	}
}
// System.Void GridManager::DestructOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_DestructOutline_m9E83AB4574BD6486074B8E3043209EA49201565C (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (outParent.transform.childCount > ZERO) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_outParent_29();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// foreach (Transform child in outParent.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_outParent_29();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0026:
		{
			// foreach (Transform child in outParent.transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			// Destroy(child.gameObject);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		}

IL_003b:
		{
			// foreach (Transform child in outParent.transform)
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0026;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void GridManager::ConstructOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_ConstructOutline_m97F86E276C4A76E590D60EE9E02B82A8DE290CAD (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// FindHexagonGroup();
		GridManager_FindHexagonGroup_m0C19AE1A3F2AE674BFFB971515BC1283A566121B(__this, /*hidden argument*/NULL);
		// foreach (Hexagon outlinedHexagon in selectedGroup) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = __this->get_selectedGroup_40();
		NullCheck(L_0);
		Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC  L_1;
		L_1 = List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5(L_0, /*hidden argument*/List_1_GetEnumerator_m753C2E6392B53717B5E0268D43DEF718D0372DA5_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0146;
		}

IL_0017:
		{
			// foreach (Hexagon outlinedHexagon in selectedGroup) {
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_2;
			L_2 = Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_inline((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7665EC82057B9C318DEF13E144DED64BD8BCD789_RuntimeMethod_var);
			// GameObject go = outlinedHexagon.gameObject;
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			// GameObject outline = new GameObject("Outline");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_4, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, /*hidden argument*/NULL);
			V_2 = L_4;
			// GameObject outlineInner = new GameObject("Inner Object");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_5, _stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9, /*hidden argument*/NULL);
			// outline.transform.parent = outParent.transform;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_outParent_29();
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_9, /*hidden argument*/NULL);
			// outline.AddComponent<SpriteRenderer>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
			NullCheck(L_10);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
			L_11 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_10, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
			// outline.GetComponent<SpriteRenderer>().sprite = outlineSprite;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
			NullCheck(L_12);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13;
			L_13 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_12, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = __this->get_outlineSprite_30();
			NullCheck(L_13);
			SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_13, L_14, /*hidden argument*/NULL);
			// outline.GetComponent<SpriteRenderer>().color = Color.white;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_2;
			NullCheck(L_15);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16;
			L_16 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_15, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
			L_17 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			NullCheck(L_16);
			SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_16, L_17, /*hidden argument*/NULL);
			// outline.transform.position = new Vector3(go.transform.position.x, go.transform.position.y, -1);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
			L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_1;
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
			float L_23 = L_22.get_x_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_1;
			NullCheck(L_24);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
			L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
			float L_27 = L_26.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			memset((&L_28), 0, sizeof(L_28));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_23, L_27, (-1.0f), /*hidden argument*/NULL);
			NullCheck(L_19);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_28, /*hidden argument*/NULL);
			// outline.transform.localScale = HEX_OUTLINE_SCALE;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_2;
			NullCheck(L_29);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
			L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = ((SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A *)__this)->get_HEX_OUTLINE_SCALE_24();
			NullCheck(L_30);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_31, /*hidden argument*/NULL);
			// outlineInner.AddComponent<SpriteRenderer>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_5;
			NullCheck(L_32);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_33;
			L_33 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_32, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
			// outlineInner.GetComponent<SpriteRenderer>().sprite = hexagonSprite;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_32;
			NullCheck(L_34);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_35;
			L_35 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_34, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_36 = __this->get_hexagonSprite_31();
			NullCheck(L_35);
			SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_35, L_36, /*hidden argument*/NULL);
			// outlineInner.GetComponent<SpriteRenderer>().color = go.GetComponent<SpriteRenderer>().color;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_34;
			NullCheck(L_37);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
			L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_1;
			NullCheck(L_39);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_40;
			L_40 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_39, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
			NullCheck(L_40);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
			L_41 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_40, /*hidden argument*/NULL);
			NullCheck(L_38);
			SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_38, L_41, /*hidden argument*/NULL);
			// outlineInner.transform.position = new Vector3(go.transform.position.x, go.transform.position.y, -2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_37;
			NullCheck(L_42);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
			L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_1;
			NullCheck(L_44);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
			L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
			float L_47 = L_46.get_x_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_1;
			NullCheck(L_48);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
			L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
			L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
			float L_51 = L_50.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			memset((&L_52), 0, sizeof(L_52));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_47, L_51, (-2.0f), /*hidden argument*/NULL);
			NullCheck(L_43);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_52, /*hidden argument*/NULL);
			// outlineInner.transform.localScale = go.transform.localScale;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = L_42;
			NullCheck(L_53);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
			L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = V_1;
			NullCheck(L_55);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
			L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_56, /*hidden argument*/NULL);
			NullCheck(L_54);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_54, L_57, /*hidden argument*/NULL);
			// outlineInner.transform.parent = outline.transform;
			NullCheck(L_53);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
			L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_2;
			NullCheck(L_59);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
			L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
			NullCheck(L_58);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_58, L_60, /*hidden argument*/NULL);
		}

IL_0146:
		{
			// foreach (Hexagon outlinedHexagon in selectedGroup) {
			bool L_61;
			L_61 = Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m52DF158898A45A5E525DB4A636FD80359A31228E_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_0017;
			}
		}

IL_0152:
		{
			IL2CPP_LEAVE(0x162, FINALLY_0154);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0154;
	}

FINALLY_0154:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45((Enumerator_t3443C2902615F345FDDAF1F8D980351996929ABC *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4706CB95910A830705B43DD587258714D2859D45_RuntimeMethod_var);
		IL2CPP_END_FINALLY(340)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(340)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x162, IL_0162)
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GridManager::ProduceHexagons(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_ProduceHexagons_mF216882E207AC5B806210D76958CDD156BFECD87 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns0, List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colorSeed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * L_0 = (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 *)il2cpp_codegen_object_new(U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223_il2cpp_TypeInfo_var);
		U3CProduceHexagonsU3Ed__34__ctor_m008E229C265136C469B69C391CED3C385F06D822(L_0, 0, /*hidden argument*/NULL);
		U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * L_2 = L_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = ___columns0;
		NullCheck(L_2);
		L_2->set_columns_3(L_3);
		U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * L_4 = L_2;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_5 = ___colorSeed1;
		NullCheck(L_4);
		L_4->set_colorSeed_4(L_5);
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager::ColoredGridProducer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * GridManager_ColoredGridProducer_mFD92DFF981C7B6D20A49BE7E371F9F4D7C604C9A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0583CD7F33964E64839674073BB0302DBAFBF933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// List<List<Color>> returnValue = new List<List<Color>>();
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_0 = (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *)il2cpp_codegen_object_new(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var);
		List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0(L_0, /*hidden argument*/List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var);
		V_0 = L_0;
		// List<Color> checkList = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_1 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_1, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		// bool exit = true;
		V_1 = (bool)1;
		// for (int i = 0; i<GetGridWidth(); ++i) {
		V_2 = 0;
		goto IL_00f6;
	}

IL_0015:
	{
		// returnValue.Add(new List<Color>());
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_2 = V_0;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_3 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_3, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m0583CD7F33964E64839674073BB0302DBAFBF933(L_2, L_3, /*hidden argument*/List_1_Add_m0583CD7F33964E64839674073BB0302DBAFBF933_RuntimeMethod_var);
		// for (int j = 0; j<GetGridHeight(); ++j) {
		V_3 = 0;
		goto IL_00e6;
	}

IL_0027:
	{
		// returnValue[i].Add(colorList[(int)(Random.value * RANDOM_SEED)%colorList.Count]);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_6;
		L_6 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = __this->get_colorList_42();
		float L_8;
		L_8 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_9 = __this->get_colorList_42();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_9, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_8, (float)(75486.0f)))))%(int32_t)L_10)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_6, L_11, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
	}

IL_0056:
	{
		// exit = true;
		V_1 = (bool)1;
		// returnValue[i][j] = colorList[(int)(Random.value * RANDOM_SEED)%colorList.Count];
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_14;
		L_14 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		int32_t L_15 = V_3;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_16 = __this->get_colorList_42();
		float L_17;
		L_17 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_18 = __this->get_colorList_42();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_18, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_16, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_17, (float)(75486.0f)))))%(int32_t)L_19)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D(L_14, L_15, L_20, /*hidden argument*/List_1_set_Item_mCDFD2FC5418A7A0CD95DC96D8BCC72A95E44891D_RuntimeMethod_var);
		// if (i-1 >= ZERO && j-1 >= ZERO) {
		int32_t L_21 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		// if (returnValue[i][j-1] == returnValue[i][j] || returnValue[i-1][j] == returnValue[i][j])
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_25;
		L_25 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_28 = V_0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_30;
		L_30 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		bool L_33;
		L_33 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_27, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00da;
		}
	}
	{
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_36;
		L_36 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)), /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_39 = V_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_41;
		L_41 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		int32_t L_42 = V_3;
		NullCheck(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		bool L_44;
		L_44 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_38, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00dc;
		}
	}

IL_00da:
	{
		// exit = false;
		V_1 = (bool)0;
	}

IL_00dc:
	{
		// } while (!exit);
		bool L_45 = V_1;
		if (!L_45)
		{
			goto IL_0056;
		}
	}
	{
		// for (int j = 0; j<GetGridHeight(); ++j) {
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00e6:
	{
		// for (int j = 0; j<GetGridHeight(); ++j) {
		int32_t L_47 = V_3;
		int32_t L_48;
		L_48 = GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0027;
		}
	}
	{
		// for (int i = 0; i<GetGridWidth(); ++i) {
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00f6:
	{
		// for (int i = 0; i<GetGridWidth(); ++i) {
		int32_t L_50 = V_2;
		int32_t L_51;
		L_51 = GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0015;
		}
	}
	{
		// return returnValue;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_52 = V_0;
		return L_52;
	}
}
// System.Boolean GridManager::OnStepper(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_OnStepper_m7F5147F822CF9EE299FB007C1C3842D15BD53E72 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// int midIndex = GetGridWidth()/HALF;
		int32_t L_0;
		L_0 = GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline(__this, /*hidden argument*/NULL);
		// return (midIndex%2 == x%2);
		int32_t L_1 = ___x0;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)2))%(int32_t)2))) == ((int32_t)((int32_t)((int32_t)L_1%(int32_t)2))))? 1 : 0);
	}
}
// System.Boolean GridManager::InputAvailabile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_InputAvailabile_m8F95A8DE08536C53A8FBA739CED2FBF997C6C818 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return !hexagonProductionStatus && !gameEnd && !hexagonRotationStatus && !hexagonExplosionStatus;
		bool L_0 = __this->get_hexagonProductionStatus_46();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_gameEnd_36();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->get_hexagonRotationStatus_44();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->get_hexagonExplosionStatus_45();
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Single GridManager::GetGridStartCoordinateX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_GetGridStartCoordinateX_m85C8BD73A8793BF8729BEBACE898668BB159A539 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridWidth/HALF * -HEX_DISTANCE_HORIZONTAL;
		int32_t L_0 = __this->get_gridWidth_32();
		return ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)((int32_t)L_0/(int32_t)2)))), (float)(-0.444999993f)));
	}
}
// System.Boolean GridManager::IsValid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_IsValid_mC97579920A40948FF3A7CE12F84C060760B37C1D (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	{
		// return pos.x >= ZERO && pos.x < GetGridWidth() && pos.y >= ZERO && pos.y <GetGridHeight();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_x_0();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___pos0;
		float L_3 = L_2.get_x_0();
		int32_t L_4;
		L_4 = GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_3) < ((float)((float)((float)L_4))))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___pos0;
		float L_6 = L_5.get_y_1();
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___pos0;
		float L_8 = L_7.get_y_1();
		int32_t L_9;
		L_9 = GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline(__this, /*hidden argument*/NULL);
		return (bool)((((float)L_8) < ((float)((float)((float)L_9))))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Void GridManager::PrintGameGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_PrintGameGrid_m7D02AA3DBD7DD0739F02DC66F45B91D69847AF02 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32AE40A5F8D0E861C4A0372296303150B4B7F4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE00804D7BA408C4A25046F3D4BEA53838BBE4CEE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// string map = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = GetGridHeight()-1; i>=0; --i) {
		int32_t L_0;
		L_0 = GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0066;
	}

IL_0011:
	{
		// for (int j = 0; j<GetGridWidth(); ++j) {
		V_2 = 0;
		goto IL_004d;
	}

IL_0015:
	{
		// if (gameGrid[j][i] == null)
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_1 = __this->get_gameGrid_39();
		int32_t L_2 = V_2;
		NullCheck(L_1);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_3;
		L_3 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_5;
		L_5 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// map +=  "0 - ";
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteralA32AE40A5F8D0E861C4A0372296303150B4B7F4D, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0049;
	}

IL_003d:
	{
		// map += "1 - ";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, _stringLiteralE00804D7BA408C4A25046F3D4BEA53838BBE4CEE, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0049:
	{
		// for (int j = 0; j<GetGridWidth(); ++j) {
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004d:
	{
		// for (int j = 0; j<GetGridWidth(); ++j) {
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0015;
		}
	}
	{
		// map += "\n";
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		V_0 = L_15;
		// for (int i = GetGridHeight()-1; i>=0; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = GetGridHeight()-1; i>=0; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// print(map);
		String_t* L_18 = V_0;
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::SetGridWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetGridWidth_m9C0CA5202101B1CB4F36C31E8F375211FD4C3E02 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method)
{
	{
		// public void SetGridWidth(int width) { gridWidth = width; }
		int32_t L_0 = ___width0;
		__this->set_gridWidth_32(L_0);
		// public void SetGridWidth(int width) { gridWidth = width; }
		return;
	}
}
// System.Void GridManager::SetGridHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetGridHeight_mCC436AE6C56112A070571CE57D725B8AA8D3A674 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method)
{
	{
		// public void SetGridHeight(int height) { gridHeight = height; }
		int32_t L_0 = ___height0;
		__this->set_gridHeight_33(L_0);
		// public void SetGridHeight(int height) { gridHeight = height; }
		return;
	}
}
// System.Void GridManager::SetColorList(System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetColorList_mDAE0B7C49C9B71E9BF61B657214C0DD770843BE2 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___list0, const RuntimeMethod* method)
{
	{
		// public void SetColorList(List<Color> list) { colorList = list; }
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = ___list0;
		__this->set_colorList_42(L_0);
		// public void SetColorList(List<Color> list) { colorList = list; }
		return;
	}
}
// System.Void GridManager::SetBombProduction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SetBombProduction_m546671E3DB3BC8DB7380C63F0B035CE7BBBF8588 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public void SetBombProduction() { bombProduction = true; }
		__this->set_bombProduction_35((bool)1);
		// public void SetBombProduction() { bombProduction = true; }
		return;
	}
}
// System.Int32 GridManager::GetGridWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int GetGridWidth() { return gridWidth; }
		int32_t L_0 = __this->get_gridWidth_32();
		return L_0;
	}
}
// System.Int32 GridManager::GetGridHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int GetGridHeight() { return gridHeight; }
		int32_t L_0 = __this->get_gridHeight_33();
		return L_0;
	}
}
// Hexagon GridManager::GetSelectedHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GridManager_GetSelectedHexagon_m6AEB5E526F945C630AFFF60C6A31B4C9E098DBA8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public Hexagon GetSelectedHexagon() { return selectedHexagon; }
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_0 = __this->get_selectedHexagon_38();
		return L_0;
	}
}
// System.Void GridManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__ctor_mA0C5D0BA6335DF2309495BC6F90061C3D82365FD (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__cctor_m1A0D4102C9134F068238AC0B464C98F00EBC2707 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hexagon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Start_mA8C08C9B4AF57A53BB643688F34FD904E5926F0B (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_26(L_0);
		// lerp = false;
		__this->set_lerp_31((bool)0);
		// }
		return;
	}
}
// System.Void Hexagon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Update_mDCB179D1584E4EC2E89BB179931E3666BDDB81D7 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (lerp) {
		bool L_0 = __this->get_lerp_31();
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// float newX = Mathf.Lerp(transform.position.x, lerpPosition.x, Time.deltaTime*HEXAGON_ROTATE_CONSTANT);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_lerpPosition_30();
		float L_5 = L_4->get_x_0();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_3, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)(9.0f))), /*hidden argument*/NULL);
		V_0 = L_7;
		// float newY = Mathf.Lerp(transform.position.y, lerpPosition.y, Time.deltaTime*HEXAGON_ROTATE_CONSTANT);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_lerpPosition_30();
		float L_12 = L_11->get_y_1();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)(9.0f))), /*hidden argument*/NULL);
		V_1 = L_14;
		// transform.position = new Vector2(newX, newY);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_16 = V_0;
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_19, /*hidden argument*/NULL);
		// if (Vector3.Distance(transform.position, lerpPosition) < HEXAGON_ROTATE_THRESHOLD) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = __this->get_lerpPosition_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_22, /*hidden argument*/NULL);
		float L_24;
		L_24 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_21, L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) < ((float)(0.0500000007f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// transform.position = lerpPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = __this->get_lerpPosition_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// lerp = false;
		__this->set_lerp_31((bool)0);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void Hexagon::Rotate(System.Int32,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Rotate_m612654093D2A4CBE9882E0ECDE4E918FD6209EC4 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___newX0, int32_t ___newY1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPos2, const RuntimeMethod* method)
{
	{
		// lerpPosition = newPos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newPos2;
		__this->set_lerpPosition_30(L_0);
		// SetX(newX);
		int32_t L_1 = ___newX0;
		Hexagon_SetX_mADA28155D721819E3571A63AF143CF227D200837_inline(__this, L_1, /*hidden argument*/NULL);
		// SetY(newY);
		int32_t L_2 = ___newY1;
		Hexagon_SetY_m88841976B92F9280B33C58C7F4C95871733B0350_inline(__this, L_2, /*hidden argument*/NULL);
		// lerp = true;
		__this->set_lerp_31((bool)1);
		// }
		return;
	}
}
// System.Boolean Hexagon::IsRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hexagon_IsRotating_mCEEB8A86C2130AD55B7C9FCDE0B5A3840798D1E3 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// return lerp;
		bool L_0 = __this->get_lerp_31();
		return L_0;
	}
}
// System.Boolean Hexagon::IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hexagon_IsMoving_m33829745C62A8CF85E6EF38F4021FE5849A01026 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(GetComponent<Rigidbody2D>().velocity == Vector2.zero);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Hexagon::Exploded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Exploded_mDC3F4648B8490ADE3E5BCE22EE0A58AAAFA840DD (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Collider2D>().isTrigger = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0;
		L_0 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		NullCheck(L_0);
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Hexagon/NeighbourHexes Hexagon::GetNeighbours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  Hexagon_GetNeighbours_m99336C11FB163D149207A9753760CF6CF38A966F (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float G_B2_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	float G_B9_1 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67 * G_B12_2 = NULL;
	{
		// bool onStepper = GridManagerObject.OnStepper(GetX());
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_GridManagerObject_26();
		int32_t L_1;
		L_1 = Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = GridManager_OnStepper_m7F5147F822CF9EE299FB007C1C3842D15BD53E72(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// neighbours.down = new Vector2(x, y-1);
		int32_t L_3 = __this->get_x_27();
		int32_t L_4 = __this->get_y_28();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), ((float)((float)L_3)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))), /*hidden argument*/NULL);
		(&V_0)->set_down_3(L_5);
		// neighbours.up = new Vector2(x, y+1);
		int32_t L_6 = __this->get_x_27();
		int32_t L_7 = __this->get_y_28();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_6)), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)))), /*hidden argument*/NULL);
		(&V_0)->set_up_0(L_8);
		// neighbours.upLeft = new Vector2(x-1, onStepper ? y+1 : y);
		int32_t L_9 = __this->get_x_27();
		bool L_10 = V_1;
		G_B1_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))));
		G_B1_1 = (&V_0);
		if (L_10)
		{
			G_B2_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))));
			G_B2_1 = (&V_0);
			goto IL_0060;
		}
	}
	{
		int32_t L_11 = __this->get_y_28();
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0068;
	}

IL_0060:
	{
		int32_t L_12 = __this->get_y_28();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0068:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), G_B3_1, ((float)((float)G_B3_0)), /*hidden argument*/NULL);
		G_B3_2->set_upLeft_1(L_13);
		// neighbours.upRight = new Vector2(x+1, onStepper ? y+1 : y);
		int32_t L_14 = __this->get_x_27();
		bool L_15 = V_1;
		G_B4_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))));
		G_B4_1 = (&V_0);
		if (L_15)
		{
			G_B5_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))));
			G_B5_1 = (&V_0);
			goto IL_0089;
		}
	}
	{
		int32_t L_16 = __this->get_y_28();
		G_B6_0 = L_16;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_17 = __this->get_y_28();
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0091:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), G_B6_1, ((float)((float)G_B6_0)), /*hidden argument*/NULL);
		G_B6_2->set_upRight_2(L_18);
		// neighbours.downLeft = new Vector2(x-1, onStepper ? y : y-1);
		int32_t L_19 = __this->get_x_27();
		bool L_20 = V_1;
		G_B7_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))));
		G_B7_1 = (&V_0);
		if (L_20)
		{
			G_B8_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))));
			G_B8_1 = (&V_0);
			goto IL_00b4;
		}
	}
	{
		int32_t L_21 = __this->get_y_28();
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_22 = __this->get_y_28();
		G_B9_0 = L_22;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ba:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), G_B9_1, ((float)((float)G_B9_0)), /*hidden argument*/NULL);
		G_B9_2->set_downLeft_4(L_23);
		// neighbours.downRight = new Vector2(x+1, onStepper ? y : y-1);
		int32_t L_24 = __this->get_x_27();
		bool L_25 = V_1;
		G_B10_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
		G_B10_1 = (&V_0);
		if (L_25)
		{
			G_B11_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
			G_B11_1 = (&V_0);
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = __this->get_y_28();
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00e3;
	}

IL_00dd:
	{
		int32_t L_27 = __this->get_y_28();
		G_B12_0 = L_27;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00e3:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), G_B12_1, ((float)((float)G_B12_0)), /*hidden argument*/NULL);
		G_B12_2->set_downRight_5(L_28);
		// return neighbours;
		NeighbourHexes_t09BF25C48540DD796F1FAE7CF2D73BD3F3E3AE67  L_29 = V_0;
		return L_29;
	}
}
// System.Void Hexagon::ChangeWorldPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeWorldPosition_m3576B62AFE71F2439CB204640FCB4A547C13626D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// lerpPosition = newPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newPosition0;
		__this->set_lerpPosition_30(L_0);
		// lerp = true;
		__this->set_lerp_31((bool)1);
		// }
		return;
	}
}
// System.Void Hexagon::ChangeGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeGridPosition_m6F484F8AFFE30B72E04F2F44411DB1E892288FDB (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition0, const RuntimeMethod* method)
{
	{
		// x = (int)newPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newPosition0;
		float L_1 = L_0.get_x_0();
		__this->set_x_27(((int32_t)((int32_t)L_1)));
		// y = (int)newPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___newPosition0;
		float L_3 = L_2.get_y_1();
		__this->set_y_28(((int32_t)((int32_t)L_3)));
		// }
		return;
	}
}
// System.Void Hexagon::SetBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetBomb_m75C5B2B3528757640D84161F104CD373575D4E2D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = new GameObject().AddComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1;
		L_1 = GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F(L_0, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		__this->set_text_35(L_1);
		// text.alignment = TextAlignment.Center;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_2 = __this->get_text_35();
		NullCheck(L_2);
		TextMesh_set_alignment_m95F437AB7C56DA880A7722AFAF13845B1C6C0947(L_2, 1, /*hidden argument*/NULL);
		// text.anchor = TextAnchor.MiddleCenter;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_3 = __this->get_text_35();
		NullCheck(L_3);
		TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674(L_3, 4, /*hidden argument*/NULL);
		// text.transform.localScale = transform.localScale;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_4 = __this->get_text_35();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_7, /*hidden argument*/NULL);
		// text.transform.position = new Vector3(transform.position.x, transform.position.y, -4);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_8 = __this->get_text_35();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_12, L_15, (-4.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_16, /*hidden argument*/NULL);
		// text.color = Color.black;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_17 = __this->get_text_35();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_17);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_17, L_18, /*hidden argument*/NULL);
		// text.transform.parent = transform;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_19 = __this->get_text_35();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_21, /*hidden argument*/NULL);
		// bombTimer = BOMB_TIMER_START;
		__this->set_bombTimer_34(3);
		// text.text = bombTimer.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_22 = __this->get_text_35();
		int32_t* L_23 = __this->get_address_of_bombTimer_34();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_22, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hexagon::SetX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetX_mADA28155D721819E3571A63AF143CF227D200837 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public void SetX(int value) { x = value; }
		int32_t L_0 = ___value0;
		__this->set_x_27(L_0);
		// public void SetX(int value) { x = value; }
		return;
	}
}
// System.Void Hexagon::SetY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetY_m88841976B92F9280B33C58C7F4C95871733B0350 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public void SetY(int value) { y = value; }
		int32_t L_0 = ___value0;
		__this->set_y_28(L_0);
		// public void SetY(int value) { y = value; }
		return;
	}
}
// System.Void Hexagon::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_SetColor_m0A1ED0BA8B0E153340D3636F64F67E671DEA379D (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetColor(Color newColor) { GetComponent<SpriteRenderer>().color = newColor; color=newColor; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___newColor0;
		NullCheck(L_0);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_1, /*hidden argument*/NULL);
		// public void SetColor(Color newColor) { GetComponent<SpriteRenderer>().color = newColor; color=newColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___newColor0;
		__this->set_color_29(L_2);
		// public void SetColor(Color newColor) { GetComponent<SpriteRenderer>().color = newColor; color=newColor; }
		return;
	}
}
// System.Void Hexagon::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Tick_m518A0C64ADDB0BB80C2095646B8F0AC7220A66FD (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public void Tick() { --bombTimer; text.text = bombTimer.ToString(); }
		int32_t L_0 = __this->get_bombTimer_34();
		__this->set_bombTimer_34(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// public void Tick() { --bombTimer; text.text = bombTimer.ToString(); }
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_text_35();
		int32_t* L_2 = __this->get_address_of_bombTimer_34();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// public void Tick() { --bombTimer; text.text = bombTimer.ToString(); }
		return;
	}
}
// System.Int32 Hexagon::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetX() { return x; }
		int32_t L_0 = __this->get_x_27();
		return L_0;
	}
}
// System.Int32 Hexagon::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetY() { return y; }
		int32_t L_0 = __this->get_y_28();
		return L_0;
	}
}
// UnityEngine.Color Hexagon::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Hexagon_GetColor_m2CF9F1A23C0A11CF555E55B0B519625205B941D6 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color GetColor() { return GetComponent<SpriteRenderer>().color; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Hexagon::GetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_GetTimer_m4EE4E022D23E23947022D6BC749FD7D0E4A54F1C (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetTimer () { return bombTimer; }
		int32_t L_0 = __this->get_bombTimer_34();
		return L_0;
	}
}
// System.Void Hexagon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon__ctor_mF20358A65A652140B91169D2183BCCCA04F37ECE (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m99C6C0D9277906D13076BCD14E7BE2DDAF88FF08 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_27(L_0);
		// }
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_mE17FD2A03E0E1BE94DFE0B0AB4B5B9C5F3EA285B (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_1 = NULL;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (GridManagerObject.InputAvailabile() && Input.touchCount > ZERO) {
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_GridManagerObject_27();
		NullCheck(L_0);
		bool L_1;
		L_1 = GridManager_InputAvailabile_m8F95A8DE08536C53A8FBA739CED2FBF997C6C818(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_2;
		L_2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// Vector3 wp = Camera.main.ScreenToWorldPoint(Input.GetTouch(ZERO).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 touchPos = new Vector2(wp.x, wp.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_9, L_11, /*hidden argument*/NULL);
		// Collider2D collider = Physics2D.OverlapPoint(touchPos);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13;
		L_13 = Physics2D_OverlapPoint_m023ABB1D290D24A6C77C5F9D7836A736F88AD345(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// selectedHexagon = GridManagerObject.GetSelectedHexagon();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_14 = __this->get_GridManagerObject_27();
		NullCheck(L_14);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_15;
		L_15 = GridManager_GetSelectedHexagon_m6AEB5E526F945C630AFFF60C6A31B4C9E098DBA8_inline(L_14, /*hidden argument*/NULL);
		__this->set_selectedHexagon_29(L_15);
		// TouchDetection();
		InputManager_TouchDetection_mC6E110B720303F39816D84C1483BA5F0D993F028(__this, /*hidden argument*/NULL);
		// CheckSelection(collider);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_1;
		InputManager_CheckSelection_mA5EAF79E8B274BDFCE5F76AD33FB235A447B0985(__this, L_16, /*hidden argument*/NULL);
		// CheckRotation();
		InputManager_CheckRotation_m029C8303D2B59E8CF80DF655BAB675631F677DE2(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void InputManager::TouchDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_TouchDetection_mC6E110B720303F39816D84C1483BA5F0D993F028 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetTouch(ZERO).phase == TouchPhase.Began) {
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_0;
		L_0 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// validTouch = true;
		__this->set_validTouch_26((bool)1);
		// touchStartPosition = Input.GetTouch(ZERO).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_touchStartPosition_28(L_3);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void InputManager::CheckSelection(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckSelection_mA5EAF79E8B274BDFCE5F76AD33FB235A447B0985 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collider != null && collider.transform.tag == TAG_HEXAGON) {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collider0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___collider0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// if (Input.GetTouch(ZERO).phase == TouchPhase.Ended && validTouch) {
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_6;
		L_6 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}
	{
		bool L_8 = __this->get_validTouch_26();
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// validTouch = false;
		__this->set_validTouch_26((bool)0);
		// GridManagerObject.Select(collider);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_9 = __this->get_GridManagerObject_27();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collider0;
		NullCheck(L_9);
		GridManager_Select_m4A59B910D29C1B5EE5C8B76A682D851FC9E62CB8(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void InputManager::CheckRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckRotation_m029C8303D2B59E8CF80DF655BAB675631F677DE2 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B14_0 = 0;
	{
		// if (Input.GetTouch(ZERO).phase == TouchPhase.Moved && validTouch) {
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_0;
		L_0 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		bool L_2 = __this->get_validTouch_26();
		if (!L_2)
		{
			goto IL_0111;
		}
	}
	{
		// Vector2 touchCurrentPosition = Input.GetTouch(ZERO).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3;
		L_3 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// float distanceX = touchCurrentPosition.x - touchStartPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_1;
		float L_6 = L_5.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_touchStartPosition_28();
		float L_8 = L_7->get_x_0();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_8));
		// float distanceY = touchCurrentPosition.y - touchStartPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_touchStartPosition_28();
		float L_12 = L_11->get_y_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_12));
		// if ((Mathf.Abs(distanceX) > HEX_ROTATE_SLIDE_DISTANCE || Mathf.Abs(distanceY) > HEX_ROTATE_SLIDE_DISTANCE) && selectedHexagon != null) {
		float L_13 = V_2;
		float L_14;
		L_14 = fabsf(L_13);
		if ((((float)L_14) > ((float)(5.0f))))
		{
			goto IL_0071;
		}
	}
	{
		float L_15 = V_3;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_16) > ((float)(5.0f)))))
		{
			goto IL_0111;
		}
	}

IL_0071:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_17 = __this->get_selectedHexagon_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0111;
		}
	}
	{
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(selectedHexagon.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_20 = __this->get_selectedHexagon_29();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_19, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// bool triggerOnX = Mathf.Abs(distanceX) > Mathf.Abs(distanceY);
		float L_24 = V_2;
		float L_25;
		L_25 = fabsf(L_24);
		float L_26 = V_3;
		float L_27;
		L_27 = fabsf(L_26);
		// bool swipeRightUp = triggerOnX ? distanceX > ZERO : distanceY > ZERO;
		int32_t L_28 = ((((float)L_25) > ((float)L_27))? 1 : 0);
		G_B6_0 = L_28;
		if (L_28)
		{
			G_B7_0 = L_28;
			goto IL_00b9;
		}
	}
	{
		float L_29 = V_3;
		G_B8_0 = ((((float)L_29) > ((float)(0.0f)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_00c1;
	}

IL_00b9:
	{
		float L_30 = V_2;
		G_B8_0 = ((((float)L_30) > ((float)(0.0f)))? 1 : 0);
		G_B8_1 = G_B7_0;
	}

IL_00c1:
	{
		V_5 = (bool)G_B8_0;
		// bool touchThanHex = triggerOnX ? touchCurrentPosition.y > screenPosition.y : touchCurrentPosition.x > screenPosition.x;
		int32_t L_31 = G_B8_1;
		G_B9_0 = L_31;
		if (L_31)
		{
			G_B10_0 = L_31;
			goto IL_00d7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_1;
		float L_33 = L_32.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_4;
		float L_35 = L_34.get_x_2();
		G_B11_0 = ((((float)L_33) > ((float)L_35))? 1 : 0);
		G_B11_1 = G_B9_0;
		goto IL_00e6;
	}

IL_00d7:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_1;
		float L_37 = L_36.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_4;
		float L_39 = L_38.get_y_3();
		G_B11_0 = ((((float)L_37) > ((float)L_39))? 1 : 0);
		G_B11_1 = G_B10_0;
	}

IL_00e6:
	{
		V_6 = (bool)G_B11_0;
		// bool clockWise = triggerOnX ? swipeRightUp == touchThanHex : swipeRightUp != touchThanHex;
		if (G_B11_1)
		{
			goto IL_00f5;
		}
	}
	{
		bool L_40 = V_5;
		bool L_41 = V_6;
		G_B14_0 = ((((int32_t)((((int32_t)L_40) == ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00f5:
	{
		bool L_42 = V_5;
		bool L_43 = V_6;
		G_B14_0 = ((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
	}

IL_00fb:
	{
		V_7 = (bool)G_B14_0;
		// validTouch = false;
		__this->set_validTouch_26((bool)0);
		// GridManagerObject.Rotate(clockWise);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_44 = __this->get_GridManagerObject_27();
		bool L_45 = V_7;
		NullCheck(L_44);
		GridManager_Rotate_m9F9829F3D9C022D6A4536971DEC155425EDAEB62(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Update_m732CF78C4240CF880048E66B580BE32A72FB8779 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ChangeScene_mF668E21AB8BFE61ED29354FCD8C005A32C77EC06 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_QuitGame_m181685808151B2087C84F8B6F3C4D7D8E1F807D3 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SuperClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C (SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A * __this, const RuntimeMethod* method)
{
	{
		// protected readonly Vector3 HEX_OUTLINE_SCALE = new Vector3(0.685f, 0.685f, 0.685f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.685000002f), (0.685000002f), (0.685000002f), /*hidden argument*/NULL);
		__this->set_HEX_OUTLINE_SCALE_24(L_0);
		// protected readonly Vector2 HEX_START_POSITION = new Vector3(0f, 5.5f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (5.5f), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		__this->set_HEX_START_POSITION_25(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UrlOpener::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrlOpener_Open_mF36C921F9BA41ABCA24DA12A7A8227E41A8BDC8A (UrlOpener_t20FA788DFB493BC5EC67E62031AC5A09682D3160 * __this, const RuntimeMethod* method)
{
	{
		// Application.OpenURL(Url);
		String_t* L_0 = __this->get_Url_4();
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UrlOpener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UrlOpener__ctor_mF938F0D63A9EAEA861C3FCF211DA3ABCA10085F6 (UrlOpener_t20FA788DFB493BC5EC67E62031AC5A09682D3160 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserInterfaceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Awake_mB800F0A6998EF984858126F2EC0FA7FDD78A6FDC (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * L_0 = ((UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields*)il2cpp_codegen_static_fields_for(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var))->get_instance_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_StaticFields*)il2cpp_codegen_static_fields_for(UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9_il2cpp_TypeInfo_var))->set_instance_42(__this);
		return;
	}

IL_0014:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Start_mE262C482ADFFA9A3E181EAB29D83A7D02EB83725 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bombCount = ZERO;
		__this->set_bombCount_41(0);
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_38(L_0);
		// blownHexagons = ZERO;
		__this->set_blownHexagons_40(0);
		// colorCount = 10;
		__this->set_colorCount_39(((int32_t)10));
		// InitializeUI();
		UserInterfaceManager_InitializeUI_m6200458E05497ACEB9E42513F7768F88C4190E87(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Update_m3AE97D600E0994F0C62AD7BA715828CBFBA0A131 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	{
		// if (tick) {
		bool L_0 = __this->get_tick_37();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartGameButton();
		UserInterfaceManager_StartGameButton_m4AF2930A3B0EBA3187975E32B3F5CDFA6DAD750A(__this, /*hidden argument*/NULL);
		// tick = false;
		__this->set_tick_37((bool)0);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UserInterfaceManager::Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Score_m15090CE7D8C3098A0A965905ACE332644C523CD1 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// blownHexagons += x;
		int32_t L_0 = __this->get_blownHexagons_40();
		int32_t L_1 = ___x0;
		__this->set_blownHexagons_40(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// score.text = (SCORE_CONSTANT * blownHexagons).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_score_26();
		int32_t L_3 = __this->get_blownHexagons_40();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)5, (int32_t)L_3));
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (Int32.Parse(score.text) > BOMB_SCORE_THRESHOLD*bombCount + BOMB_SCORE_THRESHOLD) {
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_score_26();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		int32_t L_7;
		L_7 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_bombCount_41();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1000), (int32_t)L_8)), (int32_t)((int32_t)1000))))))
		{
			goto IL_0066;
		}
	}
	{
		// ++bombCount;
		int32_t L_9 = __this->get_bombCount_41();
		__this->set_bombCount_41(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// GridManagerObject.SetBombProduction();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_10 = __this->get_GridManagerObject_38();
		NullCheck(L_10);
		GridManager_SetBombProduction_m546671E3DB3BC8DB7380C63F0B035CE7BBBF8588(L_10, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UserInterfaceManager::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_GameEnd_m9EE28FEC19AF5ABB595A42E30116B42385EB1B9A (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	{
		// gameOverScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverScreen_35();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::BackButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_BackButton_m120436A76773F8F72854BB3ABB384B3B3B4E562C (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::WidthSliderChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_WidthSliderChange_m146DF5F2147038616F979A2DF7F58E47977D1E42 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// widthValueText.text = ((widthSlider.value-MINIMUM_GRID_WIDTH)*DOUBLE + MINIMUM_GRID_WIDTH).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_widthValueText_27();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_widthSlider_30();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)(5.0f))), (float)(2.0f))), (float)(5.0f)));
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::HeightSliderChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_HeightSliderChange_mD48F172CD13C22C9660EB2421DF6724199EE2531 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// heightValueText.text = heightSlider.value.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_heightValueText_28();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_heightSlider_31();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::ColorCountSliderChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_ColorCountSliderChange_m73155A7F5FEF0E8216DF24374AEA3AC3E184D917 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int childCount = colorSelectionParent.transform.childCount;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_colorSelectionParent_34();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int newCount = (int)colorCountSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_colorCountSlider_32();
		NullCheck(L_3);
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		V_1 = ((int32_t)((int32_t)L_4));
		// colorCountText.text = newCount.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_colorCountText_29();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// if (newCount > colorCount) {
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_colorCount_39();
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0085;
		}
	}
	{
		// for (int i=0; i<childCount; ++i) {
		V_2 = 0;
		goto IL_007f;
	}

IL_003d:
	{
		// if (!colorSelectionParent.transform.GetChild(i).gameObject.activeSelf) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_colorSelectionParent_34();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007b;
		}
	}
	{
		// colorSelectionParent.transform.GetChild(i).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_colorSelectionParent_34();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_007b:
	{
		// for (int i=0; i<childCount; ++i) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		// for (int i=0; i<childCount; ++i) {
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		goto IL_00fb;
	}

IL_0085:
	{
		// else if (newCount < colorCount) {
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_colorCount_39();
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00fb;
		}
	}
	{
		// for (int i = 0; i<childCount; ++i) {
		V_3 = 0;
		goto IL_00f7;
	}

IL_0092:
	{
		// if (i+1>=childCount) {
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))) < ((int32_t)L_26)))
		{
			goto IL_00b6;
		}
	}
	{
		// colorSelectionParent.transform.GetChild(i).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_colorSelectionParent_34();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_00b6:
	{
		// else if (!colorSelectionParent.transform.GetChild(i+1).gameObject.activeSelf) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_colorSelectionParent_34();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_37;
		L_37 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00f3;
		}
	}
	{
		// colorSelectionParent.transform.GetChild(i).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_colorSelectionParent_34();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_3;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_00f3:
	{
		// for (int i = 0; i<childCount; ++i) {
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00f7:
	{
		// for (int i = 0; i<childCount; ++i) {
		int32_t L_44 = V_3;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0092;
		}
	}

IL_00fb:
	{
		// colorCount = newCount;
		int32_t L_46 = V_1;
		__this->set_colorCount_39(L_46);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::StartGameButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_StartGameButton_m4AF2930A3B0EBA3187975E32B3F5CDFA6DAD750A (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * V_0 = NULL;
	{
		// preparationScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_preparationScreen_33();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GridManagerObject.SetGridHeight((int)heightSlider.value);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_GridManagerObject_38();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_heightSlider_31();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		GridManager_SetGridHeight_mCC436AE6C56112A070571CE57D725B8AA8D3A674_inline(L_1, ((int32_t)((int32_t)L_3)), /*hidden argument*/NULL);
		// GridManagerObject.SetGridWidth((int)(widthSlider.value-MINIMUM_GRID_WIDTH)*DOUBLE + MINIMUM_GRID_WIDTH);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = __this->get_GridManagerObject_38();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_widthSlider_30();
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		GridManager_SetGridWidth_m9C0CA5202101B1CB4F36C31E8F375211FD4C3E02_inline(L_4, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_6, (float)(5.0f))))), (int32_t)2)), (int32_t)5)), /*hidden argument*/NULL);
		// List<Color> colors = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_7, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		V_0 = L_7;
		// colors.Add(Color.blue);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_8 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_8, L_9, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		// colors.Add(Color.red);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_10 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_10, L_11, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		// colors.Add(Color.yellow);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_12 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_12, L_13, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		// colors.Add(Color.green);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_14 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_14, L_15, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		// colors.Add(Color.cyan);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_16 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_16, L_17, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		// GridManagerObject.SetColorList(colors);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_18 = __this->get_GridManagerObject_38();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_19 = V_0;
		NullCheck(L_18);
		GridManager_SetColorList_mDAE0B7C49C9B71E9BF61B657214C0DD770843BE2_inline(L_18, L_19, /*hidden argument*/NULL);
		// GridManagerObject.InitializeGrid();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_20 = __this->get_GridManagerObject_38();
		NullCheck(L_20);
		GridManager_InitializeGrid_m74B652C115E94FCE1F74CEEEED8EE574A548FAAF(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::InitializeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_InitializeUI_m6200458E05497ACEB9E42513F7768F88C4190E87 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// Default();
		UserInterfaceManager_Default_m57AFDD9D4545E982ED75FB17DA1559B783FE3CB9(__this, /*hidden argument*/NULL);
		// for (int i=0; i<colorSelectionParent.transform.childCount-colorCount; ++i) {
		V_0 = 0;
		goto IL_003d;
	}

IL_000a:
	{
		// colorSelectionParent.transform.GetChild(colorSelectionParent.transform.childCount - i -1).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_colorSelectionParent_34();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_colorSelectionParent_34();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for (int i=0; i<colorSelectionParent.transform.childCount-colorCount; ++i) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		// for (int i=0; i<colorSelectionParent.transform.childCount-colorCount; ++i) {
		int32_t L_9 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_colorSelectionParent_34();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_colorCount_39();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UserInterfaceManager::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager_Default_m57AFDD9D4545E982ED75FB17DA1559B783FE3CB9 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// heightSlider.value = DEFAULT_GRID_HEIGHT;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_heightSlider_31();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (8.0f));
		// widthSlider.value = DEFAULT_GRID_WIDTH;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_widthSlider_30();
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (7.0f));
		// colorCountSlider.value = DEFAULT_COLOR_COUNT;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_colorCountSlider_32();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (4.0f));
		// colorCount = DEFAULT_COLOR_COUNT;
		__this->set_colorCount_39(4);
		// widthValueText.text = ((widthSlider.value-MINIMUM_GRID_WIDTH)*DOUBLE + MINIMUM_GRID_WIDTH).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_widthValueText_27();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_widthSlider_30();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f))), (float)(2.0f))), (float)(5.0f)));
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// heightValueText.text = heightSlider.value.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_heightValueText_28();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_heightSlider_31();
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// score.text = blownHexagons.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_score_26();
		int32_t* L_12 = __this->get_address_of_blownHexagons_40();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void UserInterfaceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInterfaceManager__ctor_m8D67D8F89C150ABE6B36E83A9431136B5B142563 (UserInterfaceManager_t0264C4983188B9E3E2EEED43C0BAD5C589C2E1F9 * __this, const RuntimeMethod* method)
{
	{
		SuperClass__ctor_m71FCEF6FAF5000A1DFF6B701A109660CFB68DA6C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager/<ProduceHexagons>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34__ctor_m008E229C265136C469B69C391CED3C385F06D822 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GridManager/<ProduceHexagons>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34_System_IDisposable_Dispose_mDD4A9830BCCF55E80EE4643BA422EC5B31B1CEB0 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CProduceHexagonsU3Ed__34_U3CU3Em__Finally1_m58BCF61255FA6EE67E22BB820C90ACE1185A791D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GridManager/<ProduceHexagons>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProduceHexagonsU3Ed__34_MoveNext_m79024A36DA4FD46DFC38A153007CF7E76DCA0818 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_012d;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_026a;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// float startX = GetGridStartCoordinateX();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = V_2;
			NullCheck(L_4);
			float L_5;
			L_5 = GridManager_GetGridStartCoordinateX_m85C8BD73A8793BF8729BEBACE898668BB159A539(L_4, /*hidden argument*/NULL);
			__this->set_U3CstartXU3E5__3_6(L_5);
			// hexagonProductionStatus = true;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_6 = V_2;
			NullCheck(L_6);
			L_6->set_hexagonProductionStatus_46((bool)1);
			// foreach (int i in columns) {
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_columns_3();
			NullCheck(L_7);
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_8;
			L_8 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_7, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_7(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0236;
		}

IL_0057:
		{
			// foreach (int i in columns) {
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_9 = __this->get_address_of_U3CU3E7__wrap3_7();
			int32_t L_10;
			L_10 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_9, /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			__this->set_U3CiU3E5__5_8(L_10);
			// stepperStatus = OnStepper(i);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_11 = V_2;
			int32_t L_12 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_11);
			bool L_13;
			L_13 = GridManager_OnStepper_m7F5147F822CF9EE299FB007C1C3842D15BD53E72(L_11, L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			// positionX = startX + (HEX_DISTANCE_HORIZONTAL * i);
			float L_14 = __this->get_U3CstartXU3E5__3_6();
			int32_t L_15 = __this->get_U3CiU3E5__5_8();
			V_3 = ((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)(0.444999993f), (float)((float)((float)L_15))))));
			// positionY = (HEX_DISTANCE_VERTICAL * gameGrid[i].Count * 2)  + GRID_VERTICAL_OFFSET + (stepperStatus ? HEX_DISTANCE_VERTICAL : ZERO);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_16 = V_2;
			NullCheck(L_16);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_17 = L_16->get_gameGrid_39();
			int32_t L_18 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_17);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_19;
			L_19 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			NullCheck(L_19);
			int32_t L_20;
			L_20 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_19, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
			bool L_21 = V_5;
			G_B5_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_20)))), (float)(2.0f))), (float)(-3.0f)));
			if (L_21)
			{
				G_B6_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_20)))), (float)(2.0f))), (float)(-3.0f)));
				goto IL_00bf;
			}
		}

IL_00b8:
		{
			G_B7_0 = (0.0f);
			G_B7_1 = G_B5_0;
			goto IL_00c4;
		}

IL_00bf:
		{
			G_B7_0 = (0.230000004f);
			G_B7_1 = G_B6_0;
		}

IL_00c4:
		{
			V_4 = ((float)il2cpp_codegen_add((float)G_B7_1, (float)G_B7_0));
			// startPosition = new Vector3(positionX, positionY, ZERO);
			float L_22 = V_3;
			float L_23 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			memset((&L_24), 0, sizeof(L_24));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_22, L_23, (0.0f), /*hidden argument*/NULL);
			__this->set_U3CstartPositionU3E5__2_5(L_24);
			// GameObject newObj = Instantiate(hexPrefab, HEX_START_POSITION, Quaternion.identity, hexParent.transform);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_25 = V_2;
			NullCheck(L_25);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_hexPrefab_27();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_27 = V_2;
			NullCheck(L_27);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ((SuperClass_t6BA29F867B148D7509F89DA8E6E400A5F8D0EC6A *)L_27)->get_HEX_START_POSITION_25();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
			L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
			L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_31 = V_2;
			NullCheck(L_31);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_hexParent_28();
			NullCheck(L_32);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
			L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_26, L_29, L_30, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
			V_6 = L_34;
			// Hexagon newHex = newObj.GetComponent<Hexagon>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_6;
			NullCheck(L_35);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_36;
			L_36 = GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48(L_35, /*hidden argument*/GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
			__this->set_U3CnewHexU3E5__6_9(L_36);
			// yield return new WaitForSeconds(DELAY_TO_PRODUCE_HEXAGON);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_37 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_37, (0.0250000004f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_37);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_026a;
		}

IL_012d:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (bombProduction) {
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_38 = V_2;
			NullCheck(L_38);
			bool L_39 = L_38->get_bombProduction_35();
			if (!L_39)
			{
				goto IL_0160;
			}
		}

IL_013d:
		{
			// newHex.SetBomb();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_40 = __this->get_U3CnewHexU3E5__6_9();
			NullCheck(L_40);
			Hexagon_SetBomb_m75C5B2B3528757640D84161F104CD373575D4E2D(L_40, /*hidden argument*/NULL);
			// bombs.Add(newHex);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_41 = V_2;
			NullCheck(L_41);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_42 = L_41->get_bombs_41();
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_43 = __this->get_U3CnewHexU3E5__6_9();
			NullCheck(L_42);
			List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_42, L_43, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
			// bombProduction = false;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_44 = V_2;
			NullCheck(L_44);
			L_44->set_bombProduction_35((bool)0);
		}

IL_0160:
		{
			// if (colorSeed == null)
			List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_45 = __this->get_colorSeed_4();
			if (L_45)
			{
				goto IL_0198;
			}
		}

IL_0168:
		{
			// newHex.SetColor(colorList[(int)(Random.value * RANDOM_SEED)%colorList.Count]);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_46 = __this->get_U3CnewHexU3E5__6_9();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_47 = V_2;
			NullCheck(L_47);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_48 = L_47->get_colorList_42();
			float L_49;
			L_49 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_50 = V_2;
			NullCheck(L_50);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_51 = L_50->get_colorList_42();
			NullCheck(L_51);
			int32_t L_52;
			L_52 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_51, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
			NullCheck(L_48);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53;
			L_53 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_48, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_49, (float)(75486.0f)))))%(int32_t)L_52)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
			NullCheck(L_46);
			Hexagon_SetColor_m0A1ED0BA8B0E153340D3636F64F67E671DEA379D(L_46, L_53, /*hidden argument*/NULL);
			goto IL_01cf;
		}

IL_0198:
		{
			// newHex.SetColor(colorSeed[i][gameGrid[i].Count]);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_54 = __this->get_U3CnewHexU3E5__6_9();
			List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_55 = __this->get_colorSeed_4();
			int32_t L_56 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_55);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_57;
			L_57 = List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_inline(L_55, L_56, /*hidden argument*/List_1_get_Item_m2D1B0FA1DDFFC5258D566015BA62B635C1BFB2C7_RuntimeMethod_var);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_58 = V_2;
			NullCheck(L_58);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_59 = L_58->get_gameGrid_39();
			int32_t L_60 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_59);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_61;
			L_61 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_59, L_60, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			NullCheck(L_61);
			int32_t L_62;
			L_62 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_61, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
			NullCheck(L_57);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
			L_63 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_57, L_62, /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
			NullCheck(L_54);
			Hexagon_SetColor_m0A1ED0BA8B0E153340D3636F64F67E671DEA379D(L_54, L_63, /*hidden argument*/NULL);
		}

IL_01cf:
		{
			// newHex.ChangeGridPosition(new Vector2(i, gameGrid[i].Count));
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_64 = __this->get_U3CnewHexU3E5__6_9();
			int32_t L_65 = __this->get_U3CiU3E5__5_8();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_66 = V_2;
			NullCheck(L_66);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_67 = L_66->get_gameGrid_39();
			int32_t L_68 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_67);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_69;
			L_69 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_67, L_68, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			NullCheck(L_69);
			int32_t L_70;
			L_70 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_69, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
			memset((&L_71), 0, sizeof(L_71));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_71), ((float)((float)L_65)), ((float)((float)L_70)), /*hidden argument*/NULL);
			NullCheck(L_64);
			Hexagon_ChangeGridPosition_m6F484F8AFFE30B72E04F2F44411DB1E892288FDB(L_64, L_71, /*hidden argument*/NULL);
			// newHex.ChangeWorldPosition(startPosition);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_72 = __this->get_U3CnewHexU3E5__6_9();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = __this->get_U3CstartPositionU3E5__2_5();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
			L_74 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_73, /*hidden argument*/NULL);
			NullCheck(L_72);
			Hexagon_ChangeWorldPosition_m3576B62AFE71F2439CB204640FCB4A547C13626D(L_72, L_74, /*hidden argument*/NULL);
			// gameGrid[i].Add(newHex);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_75 = V_2;
			NullCheck(L_75);
			List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_76 = L_75->get_gameGrid_39();
			int32_t L_77 = __this->get_U3CiU3E5__5_8();
			NullCheck(L_76);
			List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_78;
			L_78 = List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_inline(L_76, L_77, /*hidden argument*/List_1_get_Item_m944A15014F50688FB756F3D7B92B2943B69F9148_RuntimeMethod_var);
			Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_79 = __this->get_U3CnewHexU3E5__6_9();
			NullCheck(L_78);
			List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_78, L_79, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
			// }
			__this->set_U3CnewHexU3E5__6_9((Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL);
		}

IL_0236:
		{
			// foreach (int i in columns) {
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_80 = __this->get_address_of_U3CU3E7__wrap3_7();
			bool L_81;
			L_81 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_80, /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_81)
			{
				goto IL_0057;
			}
		}

IL_0246:
		{
			U3CProduceHexagonsU3Ed__34_U3CU3Em__Finally1_m58BCF61255FA6EE67E22BB820C90ACE1185A791D(__this, /*hidden argument*/NULL);
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_82 = __this->get_address_of_U3CU3E7__wrap3_7();
			il2cpp_codegen_initobj(L_82, sizeof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C ));
			// hexagonProductionStatus = false;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_83 = V_2;
			NullCheck(L_83);
			L_83->set_hexagonProductionStatus_46((bool)0);
			// }
			V_0 = (bool)0;
			goto IL_026a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0263;
	}

FAULT_0263:
	{ // begin fault (depth: 1)
		U3CProduceHexagonsU3Ed__34_System_IDisposable_Dispose_mDD4A9830BCCF55E80EE4643BA422EC5B31B1CEB0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(611)
	} // end fault
	IL2CPP_CLEANUP(611)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_026a:
	{
		bool L_84 = V_0;
		return L_84;
	}
}
// System.Void GridManager/<ProduceHexagons>d__34::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34_U3CU3Em__Finally1_m58BCF61255FA6EE67E22BB820C90ACE1185A791D (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_0 = __this->get_address_of_U3CU3E7__wrap3_7();
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_0, /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		return;
	}
}
// System.Object GridManager/<ProduceHexagons>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProduceHexagonsU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA6FC5D66BB39A656C5082D04BC0BFDDF6F042143 (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GridManager/<ProduceHexagons>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProduceHexagonsU3Ed__34_System_Collections_IEnumerator_Reset_m779D0A9C50EF6162F27100731A604F06A6505E1D (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProduceHexagonsU3Ed__34_System_Collections_IEnumerator_Reset_m779D0A9C50EF6162F27100731A604F06A6505E1D_RuntimeMethod_var)));
	}
}
// System.Object GridManager/<ProduceHexagons>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProduceHexagonsU3Ed__34_System_Collections_IEnumerator_get_Current_m5D57B24FAA5F106928FAE3591948C45EAF3EC38A (U3CProduceHexagonsU3Ed__34_tFDCB3105AF0F9D302584FA282EF2D91C0CB06223 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager/<RotationCheckCoroutine>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCheckCoroutineU3Ed__28__ctor_m165DD50D44CFA13788B0B4942EEA02EE0B5CCC7C (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GridManager/<RotationCheckCoroutine>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCheckCoroutineU3Ed__28_System_IDisposable_Dispose_m929C5F8524F855762F720C87227736F0AE58196A (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GridManager/<RotationCheckCoroutine>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotationCheckCoroutineU3Ed__28_MoveNext_m086488520BCABA4B9B37146C6E893C06C789EF0B (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// List<Hexagon> explosiveHexagons = null;
		__this->set_U3CexplosiveHexagonsU3E5__2_4((List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)NULL);
		// bool flag = true;
		__this->set_U3CflagU3E5__3_5((bool)1);
		// hexagonRotationStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_hexagonRotationStatus_44((bool)1);
		// for (int i=0; i<selectedGroup.Count; ++i) {
		__this->set_U3CiU3E5__4_6(0);
		goto IL_00a3;
	}

IL_0047:
	{
		// SwapHexagons(clockWise);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = V_1;
		bool L_5 = __this->get_clockWise_3();
		NullCheck(L_4);
		GridManager_SwapHexagons_m17CF300BD40EB533C521B8A559BFA80BB41C8D27(L_4, L_5, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// explosiveHexagons = CheckExplosion(gameGrid);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_7 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_8 = V_1;
		NullCheck(L_8);
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_9 = L_8->get_gameGrid_39();
		NullCheck(L_7);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_10;
		L_10 = GridManager_CheckExplosion_m2F8E40735247CEB5403C0A6CF4E8423A8089B4F1(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U3CexplosiveHexagonsU3E5__2_4(L_10);
		// if (explosiveHexagons.Count > ZERO) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_11 = __this->get_U3CexplosiveHexagonsU3E5__2_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_11, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// for (int i=0; i<selectedGroup.Count; ++i) {
		int32_t L_13 = __this->get_U3CiU3E5__4_6();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_2;
		__this->set_U3CiU3E5__4_6(L_14);
	}

IL_00a3:
	{
		// for (int i=0; i<selectedGroup.Count; ++i) {
		int32_t L_15 = __this->get_U3CiU3E5__4_6();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_17 = L_16->get_selectedGroup_40();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_17, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_0047;
		}
	}

IL_00b6:
	{
		// hexagonExplosionStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_19 = V_1;
		NullCheck(L_19);
		L_19->set_hexagonExplosionStatus_45((bool)1);
		// hexagonRotationStatus = false;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set_hexagonRotationStatus_44((bool)0);
		goto IL_0139;
	}

IL_00c6:
	{
		// if (flag) {
		bool L_21 = __this->get_U3CflagU3E5__3_5();
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		// hexagonProductionStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set_hexagonProductionStatus_46((bool)1);
		// StartCoroutine(ProduceHexagons(ExplodeHexagons(explosiveHexagons)));
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_23 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_24 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_25 = V_1;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_26 = __this->get_U3CexplosiveHexagonsU3E5__2_4();
		NullCheck(L_25);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_27;
		L_27 = GridManager_ExplodeHexagons_mF901B62AA85347AD9BE0410E0BFE37B661637A31(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = GridManager_ProduceHexagons_mF216882E207AC5B806210D76958CDD156BFECD87(L_24, L_27, (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_23);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_23, L_28, /*hidden argument*/NULL);
		// flag = false;
		__this->set_U3CflagU3E5__3_5((bool)0);
		// }
		goto IL_0119;
	}

IL_00f8:
	{
		// else if (!hexagonProductionStatus) {
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_30 = V_1;
		NullCheck(L_30);
		bool L_31 = L_30->get_hexagonProductionStatus_46();
		if (L_31)
		{
			goto IL_0119;
		}
	}
	{
		// explosiveHexagons = CheckExplosion(gameGrid);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_32 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_33 = V_1;
		NullCheck(L_33);
		List_1_t1AB82BAB62BFF310C9EC8F760A0511EDD17F7DBB * L_34 = L_33->get_gameGrid_39();
		NullCheck(L_32);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_35;
		L_35 = GridManager_CheckExplosion_m2F8E40735247CEB5403C0A6CF4E8423A8089B4F1(L_32, L_34, /*hidden argument*/NULL);
		__this->set_U3CexplosiveHexagonsU3E5__2_4(L_35);
		// flag = true;
		__this->set_U3CflagU3E5__3_5((bool)1);
	}

IL_0119:
	{
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_36 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_36, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0132:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0139:
	{
		// while (explosiveHexagons.Count > ZERO) {
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_37 = __this->get_U3CexplosiveHexagonsU3E5__2_4();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_37, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_38) > ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		// hexagonExplosionStatus = false;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_39 = V_1;
		NullCheck(L_39);
		L_39->set_hexagonExplosionStatus_45((bool)0);
		// FindHexagonGroup();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_40 = V_1;
		NullCheck(L_40);
		GridManager_FindHexagonGroup_m0C19AE1A3F2AE674BFFB971515BC1283A566121B(L_40, /*hidden argument*/NULL);
		// ConstructOutline();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_41 = V_1;
		NullCheck(L_41);
		GridManager_ConstructOutline_m97F86E276C4A76E590D60EE9E02B82A8DE290CAD(L_41, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GridManager/<RotationCheckCoroutine>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotationCheckCoroutineU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m83971AB5D5A64D31D7BE1162E5E87B62A18CE64D (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GridManager/<RotationCheckCoroutine>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCheckCoroutineU3Ed__28_System_Collections_IEnumerator_Reset_m2D454D87726D0B3AB4272354B81DA7D6F06E0815 (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotationCheckCoroutineU3Ed__28_System_Collections_IEnumerator_Reset_m2D454D87726D0B3AB4272354B81DA7D6F06E0815_RuntimeMethod_var)));
	}
}
// System.Object GridManager/<RotationCheckCoroutine>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotationCheckCoroutineU3Ed__28_System_Collections_IEnumerator_get_Current_mC516E893BD0AF806D9355124558E0A429A19CFDA (U3CRotationCheckCoroutineU3Ed__28_tD8DBF662C5C8B49B9C2726E2FC94AB6E39F422B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GetGridHeight_m16B9316635BF3F61551EF234CC90EAC06158BE5F_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int GetGridHeight() { return gridHeight; }
		int32_t L_0 = __this->get_gridHeight_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GetGridWidth_m1C73E38B5D213243EDE2B048E79C83923E5F8F22_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public int GetGridWidth() { return gridWidth; }
		int32_t L_0 = __this->get_gridWidth_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetX_m15CB5A6E47A37E82E8BBA6B04C0DD1D945EEF7BD_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetX() { return x; }
		int32_t L_0 = __this->get_x_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetY_m4A536F6C572E0470E794AFC722B6D16A293F265F_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetY() { return y; }
		int32_t L_0 = __this->get_y_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Hexagon_GetTimer_m4EE4E022D23E23947022D6BC749FD7D0E4A54F1C_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		// public int GetTimer () { return bombTimer; }
		int32_t L_0 = __this->get_bombTimer_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hexagon_SetY_m88841976B92F9280B33C58C7F4C95871733B0350_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public void SetY(int value) { y = value; }
		int32_t L_0 = ___value0;
		__this->set_y_28(L_0);
		// public void SetY(int value) { y = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hexagon_SetX_mADA28155D721819E3571A63AF143CF227D200837_inline (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public void SetX(int value) { x = value; }
		int32_t L_0 = ___value0;
		__this->set_x_27(L_0);
		// public void SetX(int value) { x = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GridManager_GetSelectedHexagon_m6AEB5E526F945C630AFFF60C6A31B4C9E098DBA8_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// public Hexagon GetSelectedHexagon() { return selectedHexagon; }
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_0 = __this->get_selectedHexagon_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetGridHeight_mCC436AE6C56112A070571CE57D725B8AA8D3A674_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method)
{
	{
		// public void SetGridHeight(int height) { gridHeight = height; }
		int32_t L_0 = ___height0;
		__this->set_gridHeight_33(L_0);
		// public void SetGridHeight(int height) { gridHeight = height; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetGridWidth_m9C0CA5202101B1CB4F36C31E8F375211FD4C3E02_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method)
{
	{
		// public void SetGridWidth(int width) { gridWidth = width; }
		int32_t L_0 = ___width0;
		__this->set_gridWidth_32(L_0);
		// public void SetGridWidth(int width) { gridWidth = width; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SetColorList_mDAE0B7C49C9B71E9BF61B657214C0DD770843BE2_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___list0, const RuntimeMethod* method)
{
	{
		// public void SetColorList(List<Color> list) { colorList = list; }
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = ___list0;
		__this->set_colorList_42(L_0);
		// public void SetColorList(List<Color> list) { colorList = list; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_2, (int32_t)L_3);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4;
	}
}
