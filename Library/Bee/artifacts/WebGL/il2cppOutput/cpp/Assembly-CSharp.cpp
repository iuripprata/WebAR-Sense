#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>>
struct Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5;
// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>>
struct Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>
struct IEnumerable_1_tA81D153391575F28044557850C92E0FB5C040589;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>
struct IEnumerable_1_t089EB5A3146C8EBB91B7226AF6C7C8C9DAC19B4A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<WebARFoundation.FaceTracker>
struct List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80;
// System.Collections.Generic.List`1<WebARFoundation.ImageTracker>
struct List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// WebARFoundation.FaceTracker[]
struct FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// WebARFoundation.ImageTracker[]
struct ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// WebARFoundation.ARCamera
struct ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ActivateObject
struct ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ButtonMeetMe
struct ButtonMeetMe_tE6510D60477D38493BC53D5A9D6FDA0E6AC64B53;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// WebARFoundation.FaceMesh
struct FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918;
// WebARFoundation.FaceMeshGeometry
struct FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE;
// WebARFoundation.FaceTracker
struct FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// WebARFoundation.ImageTracker
struct ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WebARFoundation.MindARFaceTrackingManager
struct MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E;
// WebARFoundation.MindARImageTrackingManager
struct MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// WebARFoundation.SampleFaceTrackingMyController
struct SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F;
// WebARFoundation.SampleImageTrackingMyController
struct SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToggleObjects
struct ToggleObjects_t89B31100A56285921702298F26E0E2C703465815;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// WebARFoundation.Utils
struct Utils_tF359F6CEC7AED0BAABC5662A91169865B19DDB32;
// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// mostrarCards
struct mostrarCards_t140289E2E9EB0201755D8FD44A0285E70163AFFD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// WebARFoundation.MindARFacePlugin/OnARUpdateEvent
struct OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15;
// WebARFoundation.MindARFaceTrackingManager/<>c
struct U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A;
// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent
struct OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7;
// WebARFoundation.MindARImagePlugin/OnARUpdateEvent
struct OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4;
// WebARFoundation.MindARImageTrackingManager/<>c
struct U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62;
// WebARFoundation.MindARImageTrackingManager/OnTargetEvent
struct OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3C26DBEA4F3A00A93BA6245C900779C4BC6FE8078C68B59B37E89A77C56FC6F4_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____54763E1C0A2729F5BE9DB328DE238EEF222DEDDD527C81D3A3BCA476652D229B_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____61D350723D2B69332719263ED5F04904F7BAA66B814B21C76C901B621B60FD45_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____A2854FA141755EE18667BF5BBC20A1943FB09DC712A5F351D93F167D47361F6B_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D7B0DB75D27043BC404DE546321BBBE1CC14321;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral548A554E021C64D1391837D3AD40F3B20A2FAA64;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6FF365131D9B28BBAC144D8FCEC2446FEEBDC1;
IL2CPP_EXTERN_C String_t* _stringLiteral62B3F4FB8236EA86EC942474695BF641E005AEB9;
IL2CPP_EXTERN_C String_t* _stringLiteral725900A9AD57F71ABBA86D0003B565F461D9969A;
IL2CPP_EXTERN_C String_t* _stringLiteral8496D96C13239FEA48494CBC990E77D697D9050A;
IL2CPP_EXTERN_C String_t* _stringLiteralADA49522358BCBE78BBBBAE8D28D9285B267EBC5;
IL2CPP_EXTERN_C String_t* _stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3338128FEE9267ECC8159D671A31B847633064;
IL2CPP_EXTERN_C String_t* _stringLiteralE16D0BCCA85453EE83BBBE270D40FCC7D432EAE1;
IL2CPP_EXTERN_C String_t* _stringLiteralEF07937F6CFA909B3A94593C5A43A33614E54D04;
IL2CPP_EXTERN_C String_t* _stringLiteralFD09AAC40D3450A3767CD43F0D3CCF4AC94D1C87;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisFaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918_m108C83EC40E2DF79D8EAE6DF417B50E94163A58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m7472E4C0672F8A7599AD8125E54CAD2EAA9F3160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m55B5EA4206BE1B0397F616B477FFD3DCE9464773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m5108BBDF3F3C5B5719FCF9365C58E4F6AEC0CF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m61B5EA34BD7E42D1A3E1465684BF06CF17FE10B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m93447F78A04A2A707E6E1AFF7650B42AA7D521D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m7A0BDF5DB6A6D6B097A00F974164ADA93266E85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFaceTrackingManager_OnARReady_m9CE79F5B5792A8A12E519DA317BB1F75A21DD9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFaceTrackingManager_OnARUpdate_mD514CD0A01FC547F2452BB6FBC8C60E9F794C56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARFaceTrackingManager_OnCameraConfigChange_m605F512B5CE0563207403B25A11817C4C5FA49B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImageTrackingManager_OnARReady_mE043E7C30B1D43C3DE7B6AC2DBC3D31B5E5ECCB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImageTrackingManager_OnARUpdate_m1BDBFA5488BE69B9004EF6E8ABB2BD2DDE50ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MindARImageTrackingManager_OnCameraConfigChange_mC8638210718C457357599E97DDF505F34105978A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleFaceTrackingMyController_OnTargetFound_m66FC7C0CD7931C1083C1A4BA2DA1EC426B0FAE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleFaceTrackingMyController_OnTargetLost_m0C3582528D0037E322AC5441F0192F9D8D7600A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleFaceTrackingMyController_OnTargetUpdate_mAC50238840A94B5E8AA9CD13CE435E5365DBE7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleImageTrackingMyController_OnTargetFound_mCEA084BFAAD1B8688BEC2E1091C247A344605816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleImageTrackingMyController_OnTargetLost_m0FCDE678BEFD3362FFBECADAACD18779B9A613A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleImageTrackingMyController_OnTargetUpdate_m8172A7C170FEFE90074A82A28A4ABAE94764F055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__16_0_m28578A6F594CCAD3188E3AF5FAFBE0D6CE65DD5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__19_0_m755301516816D6AD4CD9EB67972B5AF1CDAB1A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<WebARFoundation.FaceTracker>
struct List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<WebARFoundation.ImageTracker>
struct List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// WebARFoundation.FaceMeshGeometry
struct FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE  : public RuntimeObject
{
};

// WebARFoundation.MindARFacePlugin
struct MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28  : public RuntimeObject
{
};

// WebARFoundation.MindARImagePlugin
struct MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// WebARFoundation.Utils
struct Utils_tF359F6CEC7AED0BAABC5662A91169865B19DDB32  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// WebARFoundation.MindARFacePlugin/Native
struct Native_t95F1286003CC4A49EF46F52DF01CCC643FF17354  : public RuntimeObject
{
};

// WebARFoundation.MindARFaceTrackingManager/<>c
struct U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A  : public RuntimeObject
{
};

// WebARFoundation.MindARImagePlugin/Native
struct Native_t9B02347F7629EC995F1158299D5199E4B525D9C8  : public RuntimeObject
{
};

// WebARFoundation.MindARImageTrackingManager/<>c
struct U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>
struct Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>
struct Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10776
struct __StaticArrayInitTypeSizeU3D10776_tB1BC84BBF1C86F775F6F8956832AA336F06F7278 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10776_tB1BC84BBF1C86F775F6F8956832AA336F06F7278__padding[10776];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=264
struct __StaticArrayInitTypeSizeU3D264_tC17515967D61CE0AFC7F2F0A7EF7442F4CAC65DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D264_tC17515967D61CE0AFC7F2F0A7EF7442F4CAC65DA__padding[264];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3744
struct __StaticArrayInitTypeSizeU3D3744_tB3D344F730FE8AD6CC2C8F409386E5A30E190E61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3744_tB3D344F730FE8AD6CC2C8F409386E5A30E190E61__padding[3744];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5616
struct __StaticArrayInitTypeSizeU3D5616_t31C81CD497097CF99AC43550D20C76B1194F4A78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5616_t31C81CD497097CF99AC43550D20C76B1194F4A78__padding[5616];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Video.VideoSource
struct VideoSource_t1BCC79FEDD081663192AC0AD8A74AE78B5C8E291 
{
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>>
struct Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>>
struct Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WebARFoundation.MindARFacePlugin/OnARUpdateEvent
struct OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15  : public MulticastDelegate_t
{
};

// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent
struct OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7  : public MulticastDelegate_t
{
};

// WebARFoundation.MindARImagePlugin/OnARUpdateEvent
struct OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4  : public MulticastDelegate_t
{
};

// WebARFoundation.MindARImageTrackingManager/OnTargetEvent
struct OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// WebARFoundation.ARCamera
struct ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WebARFoundation.ARCamera::webcamQuad
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___webcamQuad_4;
	// UnityEngine.Texture2D WebARFoundation.ARCamera::videoTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___videoTexture_5;
	// UnityEngine.Vector2 WebARFoundation.ARCamera::screenSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenSize_6;
	// System.Single WebARFoundation.ARCamera::arFov
	float ___arFov_7;
	// System.Single WebARFoundation.ARCamera::arNear
	float ___arNear_8;
	// System.Single WebARFoundation.ARCamera::arFar
	float ___arFar_9;
};

// ActivateObject
struct ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ActivateObject::video
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___video_4;
	// UnityEngine.GameObject ActivateObject::propostas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___propostas_5;
};

// ButtonMeetMe
struct ButtonMeetMe_tE6510D60477D38493BC53D5A9D6FDA0E6AC64B53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WebARFoundation.FaceMesh
struct FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WebARFoundation.FaceTracker
struct FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WebARFoundation.ImageTracker
struct ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WebARFoundation.ImageTracker::targetIndex
	int32_t ___targetIndex_4;
};

// WebARFoundation.MindARFaceTrackingManager
struct MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent WebARFoundation.MindARFaceTrackingManager::onTargetFoundEvent
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___onTargetFoundEvent_4;
	// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent WebARFoundation.MindARFaceTrackingManager::onTargetLostEvent
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___onTargetLostEvent_5;
	// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent WebARFoundation.MindARFaceTrackingManager::onTargetUpdateEvent
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___onTargetUpdateEvent_6;
	// System.Boolean WebARFoundation.MindARFaceTrackingManager::autoStart
	bool ___autoStart_7;
	// System.Boolean WebARFoundation.MindARFaceTrackingManager::facingUser
	bool ___facingUser_8;
	// System.Int32 WebARFoundation.MindARFaceTrackingManager::stability
	int32_t ___stability_9;
	// WebARFoundation.ARCamera WebARFoundation.MindARFaceTrackingManager::arCamera
	ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* ___arCamera_10;
	// System.Collections.Generic.List`1<WebARFoundation.FaceTracker> WebARFoundation.MindARFaceTrackingManager::faceTrackers
	List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* ___faceTrackers_11;
	// System.Boolean WebARFoundation.MindARFaceTrackingManager::isTargetVisible
	bool ___isTargetVisible_12;
};

// WebARFoundation.MindARImageTrackingManager
struct MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WebARFoundation.MindARImageTrackingManager/OnTargetEvent WebARFoundation.MindARImageTrackingManager::onTargetFoundEvent
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___onTargetFoundEvent_4;
	// WebARFoundation.MindARImageTrackingManager/OnTargetEvent WebARFoundation.MindARImageTrackingManager::onTargetLostEvent
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___onTargetLostEvent_5;
	// WebARFoundation.MindARImageTrackingManager/OnTargetEvent WebARFoundation.MindARImageTrackingManager::onTargetUpdateEvent
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___onTargetUpdateEvent_6;
	// System.String WebARFoundation.MindARImageTrackingManager::mindFileURL
	String_t* ___mindFileURL_7;
	// System.Boolean WebARFoundation.MindARImageTrackingManager::autoStart
	bool ___autoStart_8;
	// System.Boolean WebARFoundation.MindARImageTrackingManager::facingUser
	bool ___facingUser_9;
	// System.Int32 WebARFoundation.MindARImageTrackingManager::maxTrack
	int32_t ___maxTrack_10;
	// System.Int32 WebARFoundation.MindARImageTrackingManager::stability
	int32_t ___stability_11;
	// WebARFoundation.ARCamera WebARFoundation.MindARImageTrackingManager::arCamera
	ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* ___arCamera_12;
	// System.Single[,] WebARFoundation.MindARImageTrackingManager::markerDimensions
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___markerDimensions_13;
	// System.Collections.Generic.List`1<WebARFoundation.ImageTracker> WebARFoundation.MindARImageTrackingManager::imageTrackers
	List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* ___imageTrackers_14;
	// System.Boolean[] WebARFoundation.MindARImageTrackingManager::isTargetVisibles
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isTargetVisibles_15;
};

// WebARFoundation.SampleFaceTrackingMyController
struct SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WebARFoundation.MindARFaceTrackingManager WebARFoundation.SampleFaceTrackingMyController::manager
	MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* ___manager_4;
};

// WebARFoundation.SampleImageTrackingMyController
struct SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// WebARFoundation.MindARImageTrackingManager WebARFoundation.SampleImageTrackingMyController::manager
	MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* ___manager_4;
};

// ToggleObjects
struct ToggleObjects_t89B31100A56285921702298F26E0E2C703465815  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ToggleObjects::objectsToActivate
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToActivate_4;
	// UnityEngine.GameObject[] ToggleObjects::objectsToDeactivate
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToDeactivate_5;
};

// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VideoController::videoObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___videoObject_4;
	// UnityEngine.GameObject VideoController::placeholderObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeholderObject_5;
};

// mostrarCards
struct mostrarCards_t140289E2E9EB0201755D8FD44A0285E70163AFFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera mostrarCards::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<WebARFoundation.FaceTracker>
struct List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WebARFoundation.FaceTracker>

// System.Collections.Generic.List`1<WebARFoundation.ImageTracker>
struct List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WebARFoundation.ImageTracker>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3744 <PrivateImplementationDetails>::3C26DBEA4F3A00A93BA6245C900779C4BC6FE8078C68B59B37E89A77C56FC6F4
	__StaticArrayInitTypeSizeU3D3744_tB3D344F730FE8AD6CC2C8F409386E5A30E190E61 ___3C26DBEA4F3A00A93BA6245C900779C4BC6FE8078C68B59B37E89A77C56FC6F4_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5616 <PrivateImplementationDetails>::54763E1C0A2729F5BE9DB328DE238EEF222DEDDD527C81D3A3BCA476652D229B
	__StaticArrayInitTypeSizeU3D5616_t31C81CD497097CF99AC43550D20C76B1194F4A78 ___54763E1C0A2729F5BE9DB328DE238EEF222DEDDD527C81D3A3BCA476652D229B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10776 <PrivateImplementationDetails>::61D350723D2B69332719263ED5F04904F7BAA66B814B21C76C901B621B60FD45
	__StaticArrayInitTypeSizeU3D10776_tB1BC84BBF1C86F775F6F8956832AA336F06F7278 ___61D350723D2B69332719263ED5F04904F7BAA66B814B21C76C901B621B60FD45_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=264 <PrivateImplementationDetails>::A2854FA141755EE18667BF5BBC20A1943FB09DC712A5F351D93F167D47361F6B
	__StaticArrayInitTypeSizeU3D264_tC17515967D61CE0AFC7F2F0A7EF7442F4CAC65DA ___A2854FA141755EE18667BF5BBC20A1943FB09DC712A5F351D93F167D47361F6B_3;
};

// <PrivateImplementationDetails>

// WebARFoundation.FaceMeshGeometry
struct FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields
{
	// System.Single[,] WebARFoundation.FaceMeshGeometry::VERTICES
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___VERTICES_0;
	// System.Single[,] WebARFoundation.FaceMeshGeometry::UV
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___UV_1;
	// System.Int32[] WebARFoundation.FaceMeshGeometry::FACES
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___FACES_2;
	// System.Single[,] WebARFoundation.FaceMeshGeometry::LANDMARK_BASIS
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___LANDMARK_BASIS_3;
};

// WebARFoundation.FaceMeshGeometry

// WebARFoundation.MindARFacePlugin
struct MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields
{
	// System.Action WebARFoundation.MindARFacePlugin::onARReadyAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onARReadyAction_0;
	// System.Action WebARFoundation.MindARFacePlugin::onCameraConfigChangeAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCameraConfigChangeAction_1;
	// WebARFoundation.MindARFacePlugin/OnARUpdateEvent WebARFoundation.MindARFacePlugin::onARUpdateAction
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___onARUpdateAction_2;
};

// WebARFoundation.MindARFacePlugin

// WebARFoundation.MindARImagePlugin
struct MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields
{
	// System.Action WebARFoundation.MindARImagePlugin::onARReadyAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onARReadyAction_0;
	// System.Action WebARFoundation.MindARImagePlugin::onCameraConfigChangeAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCameraConfigChangeAction_1;
	// WebARFoundation.MindARImagePlugin/OnARUpdateEvent WebARFoundation.MindARImagePlugin::onARUpdateAction
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___onARUpdateAction_2;
};

// WebARFoundation.MindARImagePlugin

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WebARFoundation.Utils

// WebARFoundation.Utils

// WebARFoundation.MindARFacePlugin/Native

// WebARFoundation.MindARFacePlugin/Native

// WebARFoundation.MindARFaceTrackingManager/<>c
struct U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields
{
	// WebARFoundation.MindARFaceTrackingManager/<>c WebARFoundation.MindARFaceTrackingManager/<>c::<>9
	U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>> WebARFoundation.MindARFaceTrackingManager/<>c::<>9__16_0
	Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* ___U3CU3E9__16_0_1;
};

// WebARFoundation.MindARFaceTrackingManager/<>c

// WebARFoundation.MindARImagePlugin/Native

// WebARFoundation.MindARImagePlugin/Native

// WebARFoundation.MindARImageTrackingManager/<>c
struct U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields
{
	// WebARFoundation.MindARImageTrackingManager/<>c WebARFoundation.MindARImageTrackingManager/<>c::<>9
	U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>> WebARFoundation.MindARImageTrackingManager/<>c::<>9__19_0
	Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* ___U3CU3E9__19_0_1;
};

// WebARFoundation.MindARImageTrackingManager/<>c

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>

// System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10776

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10776

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=264

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=264

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3744

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3744

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5616

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5616

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.TextureFormat

// UnityEngine.TextureFormat

// UnityEngine.Video.VideoSource

// UnityEngine.Video.VideoSource

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>>

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>>

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>>

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// WebARFoundation.MindARFacePlugin/OnARUpdateEvent

// WebARFoundation.MindARFacePlugin/OnARUpdateEvent

// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent

// WebARFoundation.MindARFaceTrackingManager/OnTargetEvent

// WebARFoundation.MindARImagePlugin/OnARUpdateEvent

// WebARFoundation.MindARImagePlugin/OnARUpdateEvent

// WebARFoundation.MindARImageTrackingManager/OnTargetEvent

// WebARFoundation.MindARImageTrackingManager/OnTargetEvent

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.Video.VideoPlayer

// UnityEngine.Video.VideoPlayer

// WebARFoundation.ARCamera

// WebARFoundation.ARCamera

// ActivateObject

// ActivateObject

// ButtonMeetMe

// ButtonMeetMe

// WebARFoundation.FaceMesh

// WebARFoundation.FaceMesh

// WebARFoundation.FaceTracker

// WebARFoundation.FaceTracker

// WebARFoundation.ImageTracker

// WebARFoundation.ImageTracker

// WebARFoundation.MindARFaceTrackingManager

// WebARFoundation.MindARFaceTrackingManager

// WebARFoundation.MindARImageTrackingManager

// WebARFoundation.MindARImageTrackingManager

// WebARFoundation.SampleFaceTrackingMyController

// WebARFoundation.SampleFaceTrackingMyController

// WebARFoundation.SampleImageTrackingMyController

// WebARFoundation.SampleImageTrackingMyController

// ToggleObjects

// ToggleObjects

// VideoController

// VideoController

// mostrarCards

// mostrarCards
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// WebARFoundation.FaceTracker[]
struct FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3  : public RuntimeArray
{
	ALIGN_FIELD (8) FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* m_Items[1];

	inline FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// WebARFoundation.ImageTracker[]
struct ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B  : public RuntimeArray
{
	ALIGN_FIELD (8) ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* m_Items[1];

	inline ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___0_source, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::OnARUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08 (int32_t ___0_isFound, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/OnARUpdateEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent__ctor_m88854A9417A632EC8286E08AC603D24B9A8F4887 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetCallbacks(System.Action,System.Action,WebARFoundation.MindARFacePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetCallbacks_m1B70F81653E8B6462299EF99A8D2EDB396FCC7C1 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onARReady, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCameraConfigChange, OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___2_onARUpdate, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/OnARUpdateEvent::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_inline (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_TextureUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_TextureUpdate_mD755F3A47BC68BCDDF0FDDA5327D9D31C1C4F258 (int32_t ___0_texture, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetFilterMinCF_mB6E80A2882FB7D498A2F091D9C55C6388E5B21A5 (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetFilterBeta_m4413501BADDD7E71C0C8947B9643294314062B73 (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetIsFacingUser_m2B694CA851F4B9BEA63956E35F537085EADFC362 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_StartAR_m0C2DD17843F23C194453BC758ECC2761919A389D (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_StopAR_mD37C49B78BD9CB21B1FEDF3890AB24E7074D1A95 (const RuntimeMethod* method) ;
// System.Boolean WebARFoundation.MindARFacePlugin/Native::MindARFace_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_MindARFace_IsRunning_m6E5D200CCC6C83A9F20D64A0C5576195438E3F07 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARFacePlugin/Native::MindARFace_GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARFace_GetVideoWidth_mB7262F439296F70E41EB1D2803091DE456807540 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARFacePlugin/Native::MindARFace_GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARFace_GetVideoHeight_mED18B9DE6AE149F22B907879CE289C36A11E80B5 (const RuntimeMethod* method) ;
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetCameraParamsPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetCameraParamsPtr_mB5F830E7B2312716994EB575455C0CDFEFE849D5 (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775 (intptr_t ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetFaceMeshMatrixPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetFaceMeshMatrixPtr_mE86F9F4D273EE780620828BEA4747196C748AB45 (const RuntimeMethod* method) ;
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetFaceMeshVerticesPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetFaceMeshVerticesPtr_m742439D2AE190A1A4CB3DCF337E80C10690255EC (const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::OnARUpdate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7 (int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/OnARUpdateEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent__ctor_mC6C3D6B09C07DFB582961685175381909D847B43 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetCallbacks(System.Action,System.Action,WebARFoundation.MindARImagePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetCallbacks_m25509A358CF35F5A07069375FE8CB3785122473C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onARReady, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCameraConfigChange, OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___2_onARUpdate, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/OnARUpdateEvent::Invoke(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_inline (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_TextureUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_TextureUpdate_m5FF619E5D1D2BFA2C9FA861D77981078DF38B422 (int32_t ___0_texture, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetMindFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetMindFilePath_m7C8E019C2A4BE004857F298B9ED7A28E887D3751 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetMaxTrack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetMaxTrack_m88D2279C2BA2EE6ED438B83A6A99A0FAB19BAF60 (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetFilterMinCF_mAD16AAEDB880E0EB2E5479DB68728EADA2E3ADEF (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetFilterBeta_m61ED456172BF90530FF2DF61228F03D735B8CB45 (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetIsFacingUser_mB28F169227467DED7827B28649F46DDE551833BA (bool ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_StartAR_mBBE833C21CAE7D439CFACE4F101DBE2294F3CE49 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_StopAR_mD044332383DB3B36785722458A04287A4D187454 (const RuntimeMethod* method) ;
// System.Boolean WebARFoundation.MindARImagePlugin/Native::MindARImage_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_MindARImage_IsRunning_m131DEC0F0864D3A777F8145F96E847D15F921BAC (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetVideoWidth_mD2B98A06CDEF914C0C1F919D2F66B4636B490D82 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetVideoHeight_mC9322EDFB4631D3938492F259164603E36B5B351 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetNumTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetNumTargets_m7A4D56D5E6FB54E3E2CF0E4BCEC2F7F97AB5A43C (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetTargetWidth_m64E3E62CB38CC11764AFEFE34B1E93AA46480941 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetTargetHeight_mE7B5589E558B0984BEF2B70864FDE3D6E0675950 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.IntPtr WebARFoundation.MindARImagePlugin/Native::MindARImage_GetCameraParamsPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARImage_GetCameraParamsPtr_mA44F809E26AD37F376098FD77B86FE9A1FBFB9AE (const RuntimeMethod* method) ;
// System.IntPtr WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetWorldMatrixPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARImage_GetTargetWorldMatrixPtr_m61DF3FE53BC4932922E0C7010E4FA7D2B47FBB12 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.ARCamera::UpdateProjection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera_UpdateProjection_m79F4218C4CD13E67F9C79028FA0FB5117523C854 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.FaceMesh::GenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_GenerateMesh_m85FF02295FAF71BD9BB3FBFF9A51D1D230E761BC (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<WebARFoundation.ARCamera>()
inline ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8E6FD5A26C4361814141DA9EF79DC337F409D130 (Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<UnityEngine.GameObject,WebARFoundation.FaceTracker>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m7472E4C0672F8A7599AD8125E54CAD2EAA9F3160 (RuntimeObject* ___0_source, Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___0_source, ___1_selector, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<WebARFoundation.FaceTracker>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* Enumerable_ToList_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m5108BBDF3F3C5B5719FCF9365C58E4F6AEC0CF30 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WebARFoundation.FaceTracker>::GetEnumerator()
inline Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200 (List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E (*) (List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>::Dispose()
inline void Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>::get_Current()
inline FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_inline (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E* __this, const RuntimeMethod* method)
{
	return ((  FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* (*) (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<WebARFoundation.FaceTracker>::MoveNext()
inline bool Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void WebARFoundation.MindARFacePlugin::add_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onARReadyAction_m4F8C19F108FF4B529B5786C9F53C5366BA22CA72 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::add_onARUpdateAction(WebARFoundation.MindARFacePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onARUpdateAction_m14D0B254E4AA70FFC00E5F861DFCBF0AC3434AEA (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::add_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onCameraConfigChangeAction_m5F058CB84F3C7A3BED613971DF9B772FA453AD0A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_StartAR_m645C903F9EF2A4157746923C9D2AC47297564007 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_StopAR_m3BEC686BF9FA09B7EF927514E1CA4B43BE2CD44F (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetIsFacingUser_mA9B647D3EC05268275550BBBF4B8C3E5ED16F33D (bool ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetFilterMinCF_m90C878D847A955AC68492A3818187EE5889FEF5D (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetFilterBeta_m62F42EF3322779E53212CE4E44168C9476C5CE15 (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_StartAR_m58F72B8EED665BC47C8F87DE15D35D0B76D9FEEA (const RuntimeMethod* method) ;
// System.Boolean WebARFoundation.MindARFacePlugin::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MindARFacePlugin_IsRunning_m9F94477ED5493493654685E99207F7AEE47C965C (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_StopAR_m365FC02B9C3B8322E83299C654F4D6EDA5231D1E (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARFacePlugin::GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARFacePlugin_GetVideoWidth_m77E7A139F9562F4CAECA9EBAE854CDA027D466D9 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARFacePlugin::GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARFacePlugin_GetVideoHeight_mA65FFA893279EDF5D1B4E1353ED90DBA016A0DD2 (const RuntimeMethod* method) ;
// System.Single[] WebARFoundation.MindARFacePlugin::GetCameraParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARFacePlugin_GetCameraParams_mCD0F1E41F3504E7578B7FBF91128C0CC5FFF7FA0 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.ARCamera::UpdateCameraConfig(System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera_UpdateCameraConfig_m12384980C46CB594DD7145FDFF59C309F331E217 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, int32_t ___0_videoWidth, int32_t ___1_videoHeight, float ___2_fov, float ___3_near, float ___4_far, bool ___5_facingUser, const RuntimeMethod* method) ;
// UnityEngine.Texture WebARFoundation.ARCamera::GetWebCamTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARCamera_GetWebCamTexture_mE9FB07D84CDD60E23665168FA7E36CD2B3CBAFCB_inline (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFacePlugin::BindVideoTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_BindVideoTexture_m86D20D7E094269A11772294A26B30621CB70D8D9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) ;
// System.Single[] WebARFoundation.MindARFacePlugin::GetFaceMeshMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARFacePlugin_GetFaceMeshMatrix_m2194EA38F00BE1F9F0688FB1CC95C289A619FB86 (const RuntimeMethod* method) ;
// UnityEngine.Vector3[] WebARFoundation.MindARFacePlugin::GetFaceMeshVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* MindARFacePlugin_GetFaceMeshVertices_m6CF057657FA897238AA4BF3F811728E77ADBC951 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::UpdateTargetPose(WebARFoundation.FaceTracker,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_UpdateTargetPose_m2850709D62E7CF130D37AE02769BC4E025EF9252 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* ___0_faceTracker, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_preprocessedMatrixArray, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<WebARFoundation.FaceMesh>()
inline FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* Component_GetComponentInChildren_TisFaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918_m108C83EC40E2DF79D8EAE6DF417B50E94163A58D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void WebARFoundation.FaceMesh::UpdateGeometry(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_UpdateGeometry_m06E3F72DAE082FEAA4679AA8E3B2035B9BC6D48C (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_vertices, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_inline (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.Utils::AssignMatrix4x4FromArray(UnityEngine.Matrix4x4&,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_AssignMatrix4x4FromArray_m9640CAD478F303E63CBF424C4F4F6581FD024CE1 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_p, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_values, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WebARFoundation.Utils::GetTranslationFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetTranslationFromMatrix_m49E2F75BD637154E14E0ED87B50A3364A6686666 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// UnityEngine.Quaternion WebARFoundation.Utils::GetRotationFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Utils_GetRotationFromMatrix_m763F2C965DB3EEAF3E4BBEDCEE85B3A69652E3F8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WebARFoundation.Utils::GetScaleFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetScaleFromMatrix_m6BCE783F344AC8F9C7FB48848DF8F93B1190049C (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) ;
// System.Void WebARFoundation.FaceTracker::UpdatePose(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceTracker_UpdatePose_mDCF4748C7C955B286F3AD04AECBAE3F17FAA8F10 (FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2A79DB180487FFB68733EB1E685DC21FE9F288A2 (U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<WebARFoundation.FaceTracker>()
inline FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3* GameObject_GetComponentsInChildren_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m93447F78A04A2A707E6E1AFF7650B42AA7D521D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB92B673F84B4C13E64D93FB39750783AA0064DDB (Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<UnityEngine.GameObject,WebARFoundation.ImageTracker>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m55B5EA4206BE1B0397F616B477FFD3DCE9464773 (RuntimeObject* ___0_source, Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___0_source, ___1_selector, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<WebARFoundation.ImageTracker>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* Enumerable_ToList_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m61B5EA34BD7E42D1A3E1465684BF06CF17FE10B0 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WebARFoundation.ImageTracker>::GetEnumerator()
inline Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9 (List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 (*) (List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>::Dispose()
inline void Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714 (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>::get_Current()
inline ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_inline (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282* __this, const RuntimeMethod* method)
{
	return ((  ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* (*) (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<WebARFoundation.ImageTracker>::MoveNext()
inline bool Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2 (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void WebARFoundation.MindARImagePlugin::add_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onARReadyAction_m9B7FD1F1D8E42E836D4E4D894A18440B4B5C1D38 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::add_onARUpdateAction(WebARFoundation.MindARImagePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onARUpdateAction_mAA37593E24250BAAA42783B63A8EDBC28A9178B3 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::add_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onCameraConfigChangeAction_m786B5571B6C0FC6C569450D9EFB490534BE05ECC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_StopAR_mF47A42B3BA8C77106F51043AAB02324F87C8F4DE (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_StartAR_mDD22F450F7E6096917CD41246103A833BBBD4062 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) ;
// System.Boolean WebARFoundation.MindARImagePlugin::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MindARImagePlugin_IsRunning_mB6EE737459D93CFD2D59412ADFE3F12258B42993 (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_StopAR_mEEAA66B81F74E301BEFF8DC3896070328925E43D (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetIsFacingUser_m97C8B626F5B0A1A3EEDA9754BBDF3A28541F80B5 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::SetMindFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetMindFilePath_m374DDC2203DD1008B54A3A366C5C1ED16D6DD594 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::SetMaxTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetMaxTrack_m04D37275C6409D89238D2CBB4D0A5A401A7003A5 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetFilterMinCF_mD244BA6B9DA76526AB95D342AB36F2DCB8C94DAF (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetFilterBeta_mCE13B8717A83A85356C2356AEEA740ABCCDD614C (float ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_StartAR_m82B77A1EB4EC244F7EE7EB2E72275EE1078FD51B (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin::GetNumTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetNumTargets_m1E6FA18E954E96020903AA097ACCBFC97C38BB70 (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin::GetTargetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetTargetWidth_m6EA88498685A480186CF0380376C4499FC3CCC09 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin::GetTargetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetTargetHeight_mA7EE17065B674EBC401CDB2BB5DC6D7771331B10 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin::GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetVideoWidth_m728532BFBB102C1E1CD0C6153AFEC966B426A57F (const RuntimeMethod* method) ;
// System.Int32 WebARFoundation.MindARImagePlugin::GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetVideoHeight_mBE4C917AE1A8B89D6751D02820700E4095A82CF4 (const RuntimeMethod* method) ;
// System.Single[] WebARFoundation.MindARImagePlugin::GetCameraParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARImagePlugin_GetCameraParams_m9DE8E66D29DE2D3CC29EA0750077535BC423E28A (const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImagePlugin::BindVideoTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_BindVideoTexture_m0170080899ECC6034F849B7F4CBC5C18C3DCF3E1 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) ;
// System.Single[] WebARFoundation.MindARImagePlugin::GetTargetWorldMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARImagePlugin_GetTargetWorldMatrix_m6F0D2060592A9B361F016237DD7301DD19158884 (int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::UpdateTargetPose(WebARFoundation.ImageTracker,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_UpdateTargetPose_m5D48ED89EA52EDE02A285E9E410F796E250B76EC (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* ___0_imageTracker, int32_t ___1_targetIndex, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_preprocessedMatrixArray, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager/OnTargetEvent::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_inline (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void WebARFoundation.ImageTracker::UpdatePose(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracker_UpdatePose_m34F727C9B9079883B5C14D1175379F7E5D15DCC9 (ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7AE1148A4643C0CDB909014302499E7635177C6 (U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<WebARFoundation.ImageTracker>()
inline ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B* GameObject_GetComponentsInChildren_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m7A0BDF5DB6A6D6B097A00F974164ADA93266E85F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent__ctor_m8A1AA2C42BEDC31F0C63433FBC22B853FE2BDA47 (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetFoundEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetFoundEvent_mBB8465D156E92511EB87441DC81EDCBFC9EE6379 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetLostEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetLostEvent_mD1C71F22450A5C4629365F43F3019BCF4F6C3658 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetUpdateEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetUpdateEvent_mC695731261288F4FF1F429127AA801731D283DAE (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager/OnTargetEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent__ctor_m9BD5FA5DB9825ABC8E5D39974F8B14C52FA83AAC (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetFoundEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetFoundEvent_m78D59AC8546A57C3007D2B911D72FD6586AC5841 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetLostEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetLostEvent_m098DD9314234FD63F9C0A202F3F69044919FB2A3 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) ;
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetUpdateEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetUpdateEvent_mF6308F569494E989C7F3F91DC3828AA7FB6A0B32 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_SetCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_StartAR();
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_StopAR();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARFace_IsRunning();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARFace_GetVideoWidth();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARFace_GetVideoHeight();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MindARFace_GetCameraParamsPtr();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MindARFace_GetFaceMeshMatrixPtr();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MindARFace_GetFaceMeshVerticesPtr();
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_TextureUpdate(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_SetIsFacingUser(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_SetFilterBeta(float);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARFace_SetFilterMinCF(float);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_StartAR();
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_StopAR();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_IsRunning();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_GetVideoWidth();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_GetVideoHeight();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_GetNumTargets();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_GetTargetWidth(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MindARImage_GetTargetHeight(int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MindARImage_GetCameraParamsPtr();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MindARImage_GetTargetWorldMatrixPtr(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_TextureUpdate(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetIsFacingUser(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetMindFilePath(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetMaxTrack(float);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetFilterMinCF(float);
IL2CPP_EXTERN_C void DEFAULT_CALL MindARImage_SetFilterBeta(float);
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
// System.Void ActivateObject::openVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateObject_openVideo_m5C123FFBFB393951060119DEC6CBB34D2FE100BE (ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D* __this, const RuntimeMethod* method) 
{
	{
		// video.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___video_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// propostas.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___propostas_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ActivateObject::openPropostas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateObject_openPropostas_mC0599C86AA60C5C2D88EA5C7F4FACEA7978DEF1A (ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D* __this, const RuntimeMethod* method) 
{
	{
		// video.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___video_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// propostas.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___propostas_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ActivateObject::openCoffee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateObject_openCoffee_mFA0445D967097C83956FED4363191858ADF2A52D (ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D* __this, const RuntimeMethod* method) 
{
	{
		// video.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___video_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// propostas.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___propostas_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ActivateObject::openCombo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateObject_openCombo_m1841EA1064BE068A6116061B9BE3FB6900324EC0 (ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D* __this, const RuntimeMethod* method) 
{
	{
		// video.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___video_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// propostas.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___propostas_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ActivateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateObject__ctor_m86536C52871DEE38B8C18DA468C8BD85C3DD8402 (ActivateObject_t39FDF202F21672C7A93CECB7E3AB6098A8F4789D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ButtonMeetMe::OpenInsta(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonMeetMe_OpenInsta_m67A80FB70779C8BDEDBEA3B2FE37E0005BB994D1 (ButtonMeetMe_tE6510D60477D38493BC53D5A9D6FDA0E6AC64B53* __this, String_t* ___0_btnLink, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(btnLink);
		String_t* L_0 = ___0_btnLink;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonMeetMe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonMeetMe__ctor_mEA4E8AA6C6AB7C04B69CBA5D436349BD1B978C54 (ButtonMeetMe_tE6510D60477D38493BC53D5A9D6FDA0E6AC64B53* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void mostrarCards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarCards_Start_mE2CDD07A8CDD2711D592C522A1165DB8EFA85C59 (mostrarCards_t140289E2E9EB0201755D8FD44A0285E70163AFFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GameObject.Find("ARCamera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void mostrarCards::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarCards_Update_m2DF020414835DA576402FB4C95D938175DE320F4 (mostrarCards_t140289E2E9EB0201755D8FD44A0285E70163AFFD* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(cam.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void mostrarCards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mostrarCards__ctor_mDEC58D40EC60DE872B6588F36836D6FBCD98BE53 (mostrarCards_t140289E2E9EB0201755D8FD44A0285E70163AFFD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ToggleObjects::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleObjects_Toggle_m237450243C9AFFFF3DF494C8D7F89741C073614F (ToggleObjects_t89B31100A56285921702298F26E0E2C703465815* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject obj in objectsToActivate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToActivate_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject obj in objectsToActivate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// obj.SetActive(true);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (GameObject obj in objectsToActivate)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (GameObject obj in objectsToDeactivate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___objectsToDeactivate_5;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (GameObject obj in objectsToDeactivate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		// obj.SetActive(false);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// foreach (GameObject obj in objectsToDeactivate)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToggleObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleObjects__ctor_m991534A4E8B6F2B6F67E0A7ACE6E85ACC7D941E0 (ToggleObjects_t89B31100A56285921702298F26E0E2C703465815* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VideoController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Awake_m510D4C89BEC14C9FBBB4185FEAFC783C356F05B1 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62B3F4FB8236EA86EC942474695BF641E005AEB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___videoObject_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451(L_0, GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		// videoPlayer.source = VideoSource.Url;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = L_1;
		VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052(L_2, 1, NULL);
		// videoPlayer.url = "./StreamingAssets/VideoOld.mp4";
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = L_2;
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_3, _stringLiteral62B3F4FB8236EA86EC942474695BF641E005AEB9, NULL);
		// videoPlayer.Prepare();
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_3, NULL);
		// }
		return;
	}
}
// System.Void VideoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Start_m61AD2CF792C1B5615D6837402CF12DE7F9587842 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___videoObject_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451(L_0, GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		// videoPlayer.Play();
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_1, NULL);
		// }
		return;
	}
}
// System.Void VideoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Update_mFC5171B82B3810F717DC3DB1CA0879B1A642F542 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* V_0 = NULL;
	{
		// VideoPlayer videoPlayer = videoObject.GetComponent<VideoPlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___videoObject_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451(L_0, GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		V_0 = L_1;
		// if (videoPlayer.isPlaying && videoPlayer.time > 1) { // 1 second delay
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = V_0;
		bool L_3;
		L_3 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = V_0;
		double L_5;
		L_5 = VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48(L_4, NULL);
		if ((!(((double)L_5) > ((double)(1.0)))))
		{
			goto IL_0032;
		}
	}
	{
		// placeholderObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___placeholderObject_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		return;
	}

IL_0032:
	{
		// placeholderObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___placeholderObject_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void VideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController__ctor_m103EB9AC18E394EF526FBFAD32074E59551F3F06 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08(int32_t ___0_isFound)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08(___0_isFound, NULL);

}
// System.Void WebARFoundation.MindARFacePlugin::add_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onARReadyAction_m4F8C19F108FF4B529B5786C9F53C5366BA22CA72 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARReadyAction_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::remove_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_remove_onARReadyAction_m6EC082FA4582F7576FB0C5734876289581E16471 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARReadyAction_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::add_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onCameraConfigChangeAction_m5F058CB84F3C7A3BED613971DF9B772FA453AD0A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::remove_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_remove_onCameraConfigChangeAction_m60722390451A2560DE769569F781C4A6DAF22FB1 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::add_onARUpdateAction(WebARFoundation.MindARFacePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_add_onARUpdateAction_m14D0B254E4AA70FFC00E5F861DFCBF0AC3434AEA (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_0 = NULL;
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_1 = NULL;
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_1 = V_0;
		V_1 = L_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_2 = V_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)CastclassSealed((RuntimeObject*)L_4, OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_5 = V_2;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_6 = V_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARUpdateAction_2), L_5, L_6);
		V_0 = L_7;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_8 = V_0;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)L_8) == ((RuntimeObject*)(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::remove_onARUpdateAction(WebARFoundation.MindARFacePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_remove_onARUpdateAction_mDFF818B31A36099DC591E80629B950F03976D33A (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_0 = NULL;
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_1 = NULL;
	OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_1 = V_0;
		V_1 = L_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_2 = V_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)CastclassSealed((RuntimeObject*)L_4, OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_5 = V_2;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_6 = V_1;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*>((&((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARUpdateAction_2), L_5, L_6);
		V_0 = L_7;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_8 = V_0;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)L_8) == ((RuntimeObject*)(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin__cctor_m15B853FAEF8D6C56544B5868AB45077749A2A23B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Native.MindARFace_SetCallbacks(OnARReady, OnCameraConfigChange, OnARUpdate);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, NULL, (intptr_t)((void*)MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E_RuntimeMethod_var), NULL);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_2 = (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)il2cpp_codegen_object_new(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		OnARUpdateEvent__ctor_m88854A9417A632EC8286E08AC603D24B9A8F4887(L_2, NULL, (intptr_t)((void*)MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08_RuntimeMethod_var), NULL);
		Native_MindARFace_SetCallbacks_m1B70F81653E8B6462299EF99A8D2EDB396FCC7C1(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnARReady_mD78900195684E470BBD8A43D2B39DCD9979F1770 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onARReadyAction.Invoke();
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnCameraConfigChange_mD5C9CC09EA58176B701C5FC53388FD3436D9D52E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onCameraConfigChangeAction.Invoke();
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::OnARUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_OnARUpdate_m585555BA6807A6B136BA3DD69427D2AD85FD4A08 (int32_t ___0_isFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onARUpdateAction.Invoke(isFound);
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_0 = ((MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_StaticFields*)il2cpp_codegen_static_fields_for(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		int32_t L_1 = ___0_isFound;
		OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::BindVideoTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_BindVideoTexture_m86D20D7E094269A11772294A26B30621CB70D8D9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_TextureUpdate((int) texture.GetNativeTexturePtr());
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		intptr_t L_1;
		L_1 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_0, NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_1, NULL);
		Native_MindARFace_TextureUpdate_mD755F3A47BC68BCDDF0FDDA5327D9D31C1C4F258(L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetFilterMinCF_m90C878D847A955AC68492A3818187EE5889FEF5D (float ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_SetFilterMinCF(value);
		float L_0 = ___0_value;
		Native_MindARFace_SetFilterMinCF_mB6E80A2882FB7D498A2F091D9C55C6388E5B21A5(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetFilterBeta_m62F42EF3322779E53212CE4E44168C9476C5CE15 (float ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_SetFilterBeta(value);
		float L_0 = ___0_value;
		Native_MindARFace_SetFilterBeta_m4413501BADDD7E71C0C8947B9643294314062B73(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_SetIsFacingUser_mA9B647D3EC05268275550BBBF4B8C3E5ED16F33D (bool ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_SetIsFacingUser(value);
		bool L_0 = ___0_value;
		Native_MindARFace_SetIsFacingUser_m2B694CA851F4B9BEA63956E35F537085EADFC362(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_StartAR_m58F72B8EED665BC47C8F87DE15D35D0B76D9FEEA (const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_StartAR();
		Native_MindARFace_StartAR_m0C2DD17843F23C194453BC758ECC2761919A389D(NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFacePlugin::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFacePlugin_StopAR_m365FC02B9C3B8322E83299C654F4D6EDA5231D1E (const RuntimeMethod* method) 
{
	{
		// Native.MindARFace_StopAR();
		Native_MindARFace_StopAR_mD37C49B78BD9CB21B1FEDF3890AB24E7074D1A95(NULL);
		// }
		return;
	}
}
// System.Boolean WebARFoundation.MindARFacePlugin::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MindARFacePlugin_IsRunning_m9F94477ED5493493654685E99207F7AEE47C965C (const RuntimeMethod* method) 
{
	{
		// return Native.MindARFace_IsRunning();
		bool L_0;
		L_0 = Native_MindARFace_IsRunning_m6E5D200CCC6C83A9F20D64A0C5576195438E3F07(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARFacePlugin::GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARFacePlugin_GetVideoWidth_m77E7A139F9562F4CAECA9EBAE854CDA027D466D9 (const RuntimeMethod* method) 
{
	{
		// return Native.MindARFace_GetVideoWidth();
		int32_t L_0;
		L_0 = Native_MindARFace_GetVideoWidth_mB7262F439296F70E41EB1D2803091DE456807540(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARFacePlugin::GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARFacePlugin_GetVideoHeight_mA65FFA893279EDF5D1B4E1353ED90DBA016A0DD2 (const RuntimeMethod* method) 
{
	{
		// return Native.MindARFace_GetVideoHeight();
		int32_t L_0;
		L_0 = Native_MindARFace_GetVideoHeight_mED18B9DE6AE149F22B907879CE289C36A11E80B5(NULL);
		return L_0;
	}
}
// System.Single[] WebARFoundation.MindARFacePlugin::GetCameraParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARFacePlugin_GetCameraParams_mCD0F1E41F3504E7578B7FBF91128C0CC5FFF7FA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// IntPtr ptr = Native.MindARFace_GetCameraParamsPtr();
		intptr_t L_0;
		L_0 = Native_MindARFace_GetCameraParamsPtr_mB5F830E7B2312716994EB575455C0CDFEFE849D5(NULL);
		// float[] arr = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		// Marshal.Copy(ptr, arr, 0, 4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_0, L_2, 0, 4, NULL);
		// return arr;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		return L_3;
	}
}
// System.Single[] WebARFoundation.MindARFacePlugin::GetFaceMeshMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARFacePlugin_GetFaceMeshMatrix_m2194EA38F00BE1F9F0688FB1CC95C289A619FB86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// IntPtr ptr = Native.MindARFace_GetFaceMeshMatrixPtr();
		intptr_t L_0;
		L_0 = Native_MindARFace_GetFaceMeshMatrixPtr_mE86F9F4D273EE780620828BEA4747196C748AB45(NULL);
		// float[] arr = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_1;
		// Marshal.Copy(ptr, arr, 0, 16);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_0, L_2, 0, ((int32_t)16), NULL);
		// return arr;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3[] WebARFoundation.MindARFacePlugin::GetFaceMeshVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* MindARFacePlugin_GetFaceMeshVertices_m6CF057657FA897238AA4BF3F811728E77ADBC951 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// IntPtr ptr = Native.MindARFace_GetFaceMeshVerticesPtr();
		intptr_t L_0;
		L_0 = Native_MindARFace_GetFaceMeshVerticesPtr_m742439D2AE190A1A4CB3DCF337E80C10690255EC(NULL);
		// float[] arr = new float[FaceMeshGeometry.VERTICES.GetLength(0) * 3];
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_1 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_2;
		L_2 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_1, 0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, 3)));
		V_0 = L_3;
		// Marshal.Copy(ptr, arr, 0, FaceMeshGeometry.VERTICES.GetLength(0) * 3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_5 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_6;
		L_6 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_5, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_0, L_4, 0, ((int32_t)il2cpp_codegen_multiply(L_6, 3)), NULL);
		// Vector3[] vertices = new Vector3[FaceMeshGeometry.VERTICES.GetLength(0)];
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_7 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_8;
		L_8 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_7, 0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		V_2 = 0;
		goto IL_0064;
	}

IL_0041:
	{
		// vertices[i] = new Vector3(arr[i*3], arr[i*3+1], arr[i*3+2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_1;
		int32_t L_11 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = ((int32_t)il2cpp_codegen_multiply(L_13, 3));
		float L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, 3)), 1));
		float L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = V_0;
		int32_t L_21 = V_2;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 3)), 2));
		float L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_15, L_19, L_23, /*hidden argument*/NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		int32_t L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_27 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_28;
		L_28 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_27, 0, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0041;
		}
	}
	{
		// return vertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = V_1;
		return L_29;
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
void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_Multicast(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* currentDelegate = reinterpret_cast<OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_isFound, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_OpenInst(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isFound, method);
}
void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_OpenStatic(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isFound, method);
}
void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_OpenStaticInvoker(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_isFound);
}
void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_ClosedStaticInvoker(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_isFound);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_isFound);

}
// System.Void WebARFoundation.MindARFacePlugin/OnARUpdateEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent__ctor_m88854A9417A632EC8286E08AC603D24B9A8F4887 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_Multicast;
}
// System.Void WebARFoundation.MindARFacePlugin/OnARUpdateEvent::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isFound, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebARFoundation.MindARFacePlugin/OnARUpdateEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnARUpdateEvent_BeginInvoke_m5DE8B882F279BB6FD9458D15A9B5001929A8CD41 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_isFound);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebARFoundation.MindARFacePlugin/OnARUpdateEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent_EndInvoke_m31243596DB52B48ACA570B9BE507E2889D60FAA7 (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetCallbacks(System.Action,System.Action,WebARFoundation.MindARFacePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetCallbacks_m1B70F81653E8B6462299EF99A8D2EDB396FCC7C1 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onARReady, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCameraConfigChange, OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* ___2_onARUpdate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_onARReady' to native representation
	Il2CppMethodPointer ____0_onARReady_marshaled = NULL;
	____0_onARReady_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_onARReady));

	// Marshaling of parameter '___1_onCameraConfigChange' to native representation
	Il2CppMethodPointer ____1_onCameraConfigChange_marshaled = NULL;
	____1_onCameraConfigChange_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_onCameraConfigChange));

	// Marshaling of parameter '___2_onARUpdate' to native representation
	Il2CppMethodPointer ____2_onARUpdate_marshaled = NULL;
	____2_onARUpdate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_onARUpdate));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_SetCallbacks)(____0_onARReady_marshaled, ____1_onCameraConfigChange_marshaled, ____2_onARUpdate_marshaled);

}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_StartAR_m0C2DD17843F23C194453BC758ECC2761919A389D (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_StartAR)();

}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_StopAR_mD37C49B78BD9CB21B1FEDF3890AB24E7074D1A95 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_StopAR)();

}
// System.Boolean WebARFoundation.MindARFacePlugin/Native::MindARFace_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_MindARFace_IsRunning_m6E5D200CCC6C83A9F20D64A0C5576195438E3F07 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_IsRunning)();

	return static_cast<bool>(returnValue);
}
// System.Int32 WebARFoundation.MindARFacePlugin/Native::MindARFace_GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARFace_GetVideoWidth_mB7262F439296F70E41EB1D2803091DE456807540 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_GetVideoWidth)();

	return returnValue;
}
// System.Int32 WebARFoundation.MindARFacePlugin/Native::MindARFace_GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARFace_GetVideoHeight_mED18B9DE6AE149F22B907879CE289C36A11E80B5 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_GetVideoHeight)();

	return returnValue;
}
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetCameraParamsPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetCameraParamsPtr_mB5F830E7B2312716994EB575455C0CDFEFE849D5 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_GetCameraParamsPtr)();

	return returnValue;
}
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetFaceMeshMatrixPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetFaceMeshMatrixPtr_mE86F9F4D273EE780620828BEA4747196C748AB45 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_GetFaceMeshMatrixPtr)();

	return returnValue;
}
// System.IntPtr WebARFoundation.MindARFacePlugin/Native::MindARFace_GetFaceMeshVerticesPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARFace_GetFaceMeshVerticesPtr_m742439D2AE190A1A4CB3DCF337E80C10690255EC (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MindARFace_GetFaceMeshVerticesPtr)();

	return returnValue;
}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_TextureUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_TextureUpdate_mD755F3A47BC68BCDDF0FDDA5327D9D31C1C4F258 (int32_t ___0_texture, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_TextureUpdate)(___0_texture);

}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetIsFacingUser_m2B694CA851F4B9BEA63956E35F537085EADFC362 (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_SetIsFacingUser)(static_cast<int32_t>(___0_value));

}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetFilterBeta_m4413501BADDD7E71C0C8947B9643294314062B73 (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_SetFilterBeta)(___0_value);

}
// System.Void WebARFoundation.MindARFacePlugin/Native::MindARFace_SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARFace_SetFilterMinCF_mB6E80A2882FB7D498A2F091D9C55C6388E5B21A5 (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARFace_SetFilterMinCF)(___0_value);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7(int32_t ___0_targetIndex, int32_t ___1_isFound)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7(___0_targetIndex, ___1_isFound, NULL);

}
// System.Void WebARFoundation.MindARImagePlugin::add_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onARReadyAction_m9B7FD1F1D8E42E836D4E4D894A18440B4B5C1D38 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARReadyAction_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::remove_onARReadyAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_remove_onARReadyAction_mC14B68B35F0072F918CB01F575C64E263AD4FE06 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARReadyAction_0), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::add_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onCameraConfigChangeAction_m786B5571B6C0FC6C569450D9EFB490534BE05ECC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::remove_onCameraConfigChangeAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_remove_onCameraConfigChangeAction_mD37BF218F72D69C304C0ECB43ADCFBA395444C44 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::add_onARUpdateAction(WebARFoundation.MindARImagePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_add_onARUpdateAction_mAA37593E24250BAAA42783B63A8EDBC28A9178B3 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_0 = NULL;
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_1 = NULL;
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_1 = V_0;
		V_1 = L_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_2 = V_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)CastclassSealed((RuntimeObject*)L_4, OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_5 = V_2;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_6 = V_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARUpdateAction_2), L_5, L_6);
		V_0 = L_7;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_8 = V_0;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)L_8) == ((RuntimeObject*)(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::remove_onARUpdateAction(WebARFoundation.MindARImagePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_remove_onARUpdateAction_m5335A0828972AF68504E85251012E42026771EDB (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_0 = NULL;
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_1 = NULL;
	OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		V_0 = L_0;
	}

IL_0006:
	{
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_1 = V_0;
		V_1 = L_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_2 = V_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)CastclassSealed((RuntimeObject*)L_4, OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_5 = V_2;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_6 = V_1;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*>((&((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARUpdateAction_2), L_5, L_6);
		V_0 = L_7;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_8 = V_0;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)L_8) == ((RuntimeObject*)(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin__cctor_mE29C3676B434970F9045BDFFB8BA6AB8E0970B8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Native.MindARImage_SetCallbacks(OnARReady, OnCameraConfigChange, OnARUpdate);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, NULL, (intptr_t)((void*)MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686_RuntimeMethod_var), NULL);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_2 = (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)il2cpp_codegen_object_new(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		OnARUpdateEvent__ctor_mC6C3D6B09C07DFB582961685175381909D847B43(L_2, NULL, (intptr_t)((void*)MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7_RuntimeMethod_var), NULL);
		Native_MindARImage_SetCallbacks_m25509A358CF35F5A07069375FE8CB3785122473C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnARReady_m1C9C95FAEDB3BED37AFF4B3A212A7A35D8E620C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onARReadyAction.Invoke();
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARReadyAction_0;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnCameraConfigChange_mAD21B5440BADF45BF232E6CE1871EB2392530686 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onCameraConfigChangeAction.Invoke();
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onCameraConfigChangeAction_1;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::OnARUpdate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_OnARUpdate_m3F77BF2A2B10EBE30AA22EB63D477F3250FAC5C7 (int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onARUpdateAction.Invoke(targetIndex, isFound);
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_0 = ((MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_StaticFields*)il2cpp_codegen_static_fields_for(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var))->___onARUpdateAction_2;
		int32_t L_1 = ___0_targetIndex;
		int32_t L_2 = ___1_isFound;
		OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_inline(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::BindVideoTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_BindVideoTexture_m0170080899ECC6034F849B7F4CBC5C18C3DCF3E1 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_TextureUpdate((int) texture.GetNativeTexturePtr());
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		intptr_t L_1;
		L_1 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_0, NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_1, NULL);
		Native_MindARImage_TextureUpdate_m5FF619E5D1D2BFA2C9FA861D77981078DF38B422(L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::SetMindFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetMindFilePath_m374DDC2203DD1008B54A3A366C5C1ED16D6DD594 (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_SetMindFilePath(path);
		String_t* L_0 = ___0_path;
		Native_MindARImage_SetMindFilePath_m7C8E019C2A4BE004857F298B9ED7A28E887D3751(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::SetMaxTrack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetMaxTrack_m04D37275C6409D89238D2CBB4D0A5A401A7003A5 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_SetMaxTrack(value);
		int32_t L_0 = ___0_value;
		Native_MindARImage_SetMaxTrack_m88D2279C2BA2EE6ED438B83A6A99A0FAB19BAF60(((float)L_0), NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetFilterMinCF_mD244BA6B9DA76526AB95D342AB36F2DCB8C94DAF (float ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_SetFilterMinCF(value);
		float L_0 = ___0_value;
		Native_MindARImage_SetFilterMinCF_mAD16AAEDB880E0EB2E5479DB68728EADA2E3ADEF(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetFilterBeta_mCE13B8717A83A85356C2356AEEA740ABCCDD614C (float ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_SetFilterBeta(value);
		float L_0 = ___0_value;
		Native_MindARImage_SetFilterBeta_m61ED456172BF90530FF2DF61228F03D735B8CB45(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_SetIsFacingUser_m97C8B626F5B0A1A3EEDA9754BBDF3A28541F80B5 (bool ___0_value, const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_SetIsFacingUser(value);
		bool L_0 = ___0_value;
		Native_MindARImage_SetIsFacingUser_mB28F169227467DED7827B28649F46DDE551833BA(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_StartAR_m82B77A1EB4EC244F7EE7EB2E72275EE1078FD51B (const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_StartAR();
		Native_MindARImage_StartAR_mBBE833C21CAE7D439CFACE4F101DBE2294F3CE49(NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImagePlugin::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImagePlugin_StopAR_mEEAA66B81F74E301BEFF8DC3896070328925E43D (const RuntimeMethod* method) 
{
	{
		// Native.MindARImage_StopAR();
		Native_MindARImage_StopAR_mD044332383DB3B36785722458A04287A4D187454(NULL);
		// }
		return;
	}
}
// System.Boolean WebARFoundation.MindARImagePlugin::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MindARImagePlugin_IsRunning_mB6EE737459D93CFD2D59412ADFE3F12258B42993 (const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_IsRunning();
		bool L_0;
		L_0 = Native_MindARImage_IsRunning_m131DEC0F0864D3A777F8145F96E847D15F921BAC(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARImagePlugin::GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetVideoWidth_m728532BFBB102C1E1CD0C6153AFEC966B426A57F (const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_GetVideoWidth();
		int32_t L_0;
		L_0 = Native_MindARImage_GetVideoWidth_mD2B98A06CDEF914C0C1F919D2F66B4636B490D82(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARImagePlugin::GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetVideoHeight_mBE4C917AE1A8B89D6751D02820700E4095A82CF4 (const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_GetVideoHeight();
		int32_t L_0;
		L_0 = Native_MindARImage_GetVideoHeight_mC9322EDFB4631D3938492F259164603E36B5B351(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARImagePlugin::GetNumTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetNumTargets_m1E6FA18E954E96020903AA097ACCBFC97C38BB70 (const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_GetNumTargets();
		int32_t L_0;
		L_0 = Native_MindARImage_GetNumTargets_m7A4D56D5E6FB54E3E2CF0E4BCEC2F7F97AB5A43C(NULL);
		return L_0;
	}
}
// System.Int32 WebARFoundation.MindARImagePlugin::GetTargetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetTargetWidth_m6EA88498685A480186CF0380376C4499FC3CCC09 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_GetTargetWidth(targetIndex);
		int32_t L_0 = ___0_targetIndex;
		int32_t L_1;
		L_1 = Native_MindARImage_GetTargetWidth_m64E3E62CB38CC11764AFEFE34B1E93AA46480941(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WebARFoundation.MindARImagePlugin::GetTargetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MindARImagePlugin_GetTargetHeight_mA7EE17065B674EBC401CDB2BB5DC6D7771331B10 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	{
		// return Native.MindARImage_GetTargetHeight(targetIndex);
		int32_t L_0 = ___0_targetIndex;
		int32_t L_1;
		L_1 = Native_MindARImage_GetTargetHeight_mE7B5589E558B0984BEF2B70864FDE3D6E0675950(L_0, NULL);
		return L_1;
	}
}
// System.Single[] WebARFoundation.MindARImagePlugin::GetCameraParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARImagePlugin_GetCameraParams_m9DE8E66D29DE2D3CC29EA0750077535BC423E28A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// IntPtr ptr = Native.MindARImage_GetCameraParamsPtr();
		intptr_t L_0;
		L_0 = Native_MindARImage_GetCameraParamsPtr_mA44F809E26AD37F376098FD77B86FE9A1FBFB9AE(NULL);
		// float[] arr = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		// Marshal.Copy(ptr, arr, 0, 4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_0, L_2, 0, 4, NULL);
		// return arr;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		return L_3;
	}
}
// System.Single[] WebARFoundation.MindARImagePlugin::GetTargetWorldMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* MindARImagePlugin_GetTargetWorldMatrix_m6F0D2060592A9B361F016237DD7301DD19158884 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// IntPtr ptr = Native.MindARImage_GetTargetWorldMatrixPtr(targetIndex);
		int32_t L_0 = ___0_targetIndex;
		intptr_t L_1;
		L_1 = Native_MindARImage_GetTargetWorldMatrixPtr_m61DF3FE53BC4932922E0C7010E4FA7D2B47FBB12(L_0, NULL);
		// float[] arr = new float[16];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_2;
		// Marshal.Copy(ptr, arr, 0, 16);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_1, L_3, 0, ((int32_t)16), NULL);
		// return arr;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		return L_4;
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
void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_Multicast(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* currentDelegate = reinterpret_cast<OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_targetIndex, ___1_isFound, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_OpenInst(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_targetIndex, ___1_isFound, method);
}
void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_OpenStatic(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_targetIndex, ___1_isFound, method);
}
void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_OpenStaticInvoker(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_targetIndex, ___1_isFound);
}
void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_ClosedStaticInvoker(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_targetIndex, ___1_isFound);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_targetIndex, ___1_isFound);

}
// System.Void WebARFoundation.MindARImagePlugin/OnARUpdateEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent__ctor_mC6C3D6B09C07DFB582961685175381909D847B43 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_Multicast;
}
// System.Void WebARFoundation.MindARImagePlugin/OnARUpdateEvent::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_targetIndex, ___1_isFound, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebARFoundation.MindARImagePlugin/OnARUpdateEvent::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnARUpdateEvent_BeginInvoke_m612C1D3CE30127388A6826F4C19CFC2F1A7F723C (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_targetIndex);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_isFound);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void WebARFoundation.MindARImagePlugin/OnARUpdateEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnARUpdateEvent_EndInvoke_m58817A575B19628C3E94ECD687DBCAF58307EA29 (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetCallbacks(System.Action,System.Action,WebARFoundation.MindARImagePlugin/OnARUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetCallbacks_m25509A358CF35F5A07069375FE8CB3785122473C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onARReady, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCameraConfigChange, OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* ___2_onARUpdate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___0_onARReady' to native representation
	Il2CppMethodPointer ____0_onARReady_marshaled = NULL;
	____0_onARReady_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_onARReady));

	// Marshaling of parameter '___1_onCameraConfigChange' to native representation
	Il2CppMethodPointer ____1_onCameraConfigChange_marshaled = NULL;
	____1_onCameraConfigChange_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_onCameraConfigChange));

	// Marshaling of parameter '___2_onARUpdate' to native representation
	Il2CppMethodPointer ____2_onARUpdate_marshaled = NULL;
	____2_onARUpdate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_onARUpdate));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetCallbacks)(____0_onARReady_marshaled, ____1_onCameraConfigChange_marshaled, ____2_onARUpdate_marshaled);

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_StartAR_mBBE833C21CAE7D439CFACE4F101DBE2294F3CE49 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_StartAR)();

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_StopAR_mD044332383DB3B36785722458A04287A4D187454 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_StopAR)();

}
// System.Boolean WebARFoundation.MindARImagePlugin/Native::MindARImage_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_MindARImage_IsRunning_m131DEC0F0864D3A777F8145F96E847D15F921BAC (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_IsRunning)();

	return static_cast<bool>(returnValue);
}
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetVideoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetVideoWidth_mD2B98A06CDEF914C0C1F919D2F66B4636B490D82 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetVideoWidth)();

	return returnValue;
}
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetVideoHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetVideoHeight_mC9322EDFB4631D3938492F259164603E36B5B351 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetVideoHeight)();

	return returnValue;
}
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetNumTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetNumTargets_m7A4D56D5E6FB54E3E2CF0E4BCEC2F7F97AB5A43C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetNumTargets)();

	return returnValue;
}
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetTargetWidth_m64E3E62CB38CC11764AFEFE34B1E93AA46480941 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetTargetWidth)(___0_targetIndex);

	return returnValue;
}
// System.Int32 WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_MindARImage_GetTargetHeight_mE7B5589E558B0984BEF2B70864FDE3D6E0675950 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetTargetHeight)(___0_targetIndex);

	return returnValue;
}
// System.IntPtr WebARFoundation.MindARImagePlugin/Native::MindARImage_GetCameraParamsPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARImage_GetCameraParamsPtr_mA44F809E26AD37F376098FD77B86FE9A1FBFB9AE (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetCameraParamsPtr)();

	return returnValue;
}
// System.IntPtr WebARFoundation.MindARImagePlugin/Native::MindARImage_GetTargetWorldMatrixPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_MindARImage_GetTargetWorldMatrixPtr_m61DF3FE53BC4932922E0C7010E4FA7D2B47FBB12 (int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MindARImage_GetTargetWorldMatrixPtr)(___0_targetIndex);

	return returnValue;
}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_TextureUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_TextureUpdate_m5FF619E5D1D2BFA2C9FA861D77981078DF38B422 (int32_t ___0_texture, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_TextureUpdate)(___0_texture);

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetIsFacingUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetIsFacingUser_mB28F169227467DED7827B28649F46DDE551833BA (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetIsFacingUser)(static_cast<int32_t>(___0_value));

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetMindFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetMindFilePath_m7C8E019C2A4BE004857F298B9ED7A28E887D3751 (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetMindFilePath)(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetMaxTrack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetMaxTrack_m88D2279C2BA2EE6ED438B83A6A99A0FAB19BAF60 (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetMaxTrack)(___0_value);

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetFilterMinCF(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetFilterMinCF_mAD16AAEDB880E0EB2E5479DB68728EADA2E3ADEF (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetFilterMinCF)(___0_value);

}
// System.Void WebARFoundation.MindARImagePlugin/Native::MindARImage_SetFilterBeta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MindARImage_SetFilterBeta_m61ED456172BF90530FF2DF61228F03D735B8CB45 (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(MindARImage_SetFilterBeta)(___0_value);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture WebARFoundation.ARCamera::GetWebCamTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARCamera_GetWebCamTexture_mE9FB07D84CDD60E23665168FA7E36CD2B3CBAFCB (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) 
{
	{
		// return videoTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___videoTexture_5;
		return L_0;
	}
}
// System.Void WebARFoundation.ARCamera::UpdateCameraConfig(System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera_UpdateCameraConfig_m12384980C46CB594DD7145FDFF59C309F331E217 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, int32_t ___0_videoWidth, int32_t ___1_videoHeight, float ___2_fov, float ___3_near, float ___4_far, bool ___5_facingUser, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// videoTexture = new Texture2D(videoWidth, videoHeight, TextureFormat.ARGB32, false);
		int32_t L_0 = ___0_videoWidth;
		int32_t L_1 = ___1_videoHeight;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, L_0, L_1, 5, (bool)0, NULL);
		__this->___videoTexture_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoTexture_5), (void*)L_2);
		// Material material = webcamQuad.GetComponent<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___webcamQuad_4;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		V_0 = L_5;
		// material.mainTexture = videoTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___videoTexture_5;
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_6, L_7, NULL);
		// if (facingUser) { // flip horizontally
		bool L_8 = ___5_facingUser;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// material.mainTextureScale = new Vector2(-1, 1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_9, L_10, NULL);
		// material.mainTextureOffset = new Vector2(1, 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (1.0f), (0.0f), /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_11, L_12, NULL);
	}

IL_005a:
	{
		// arFar = far;
		float L_13 = ___4_far;
		__this->___arFar_9 = L_13;
		// arFov = fov;
		float L_14 = ___2_fov;
		__this->___arFov_7 = L_14;
		// arNear = near;
		float L_15 = ___3_near;
		__this->___arNear_8 = L_15;
		// }
		return;
	}
}
// System.Void WebARFoundation.ARCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera_Update_m6331F1E5BF40CC08FEF8FC57515DE676CFCD89C6 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) 
{
	{
		// if (arFov != -1 && (screenSize == null || screenSize[0] != Screen.width || screenSize[1] != Screen.height)) {
		float L_0 = __this->___arFov_7;
		if ((((float)L_0) == ((float)(-1.0f))))
		{
			goto IL_0059;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___screenSize_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___screenSize_6);
		float L_3;
		L_3 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_2, 0, NULL);
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)L_3) == ((float)((float)L_4)))))
		{
			goto IL_003c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___screenSize_6);
		float L_6;
		L_6 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_5, 1, NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((((float)L_6) == ((float)((float)L_7))))
		{
			goto IL_0059;
		}
	}

IL_003c:
	{
		// screenSize = new Vector2(Screen.width, Screen.height);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		__this->___screenSize_6 = L_10;
		// UpdateProjection();
		ARCamera_UpdateProjection_m79F4218C4CD13E67F9C79028FA0FB5117523C854(__this, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.ARCamera::UpdateProjection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera_UpdateProjection_m79F4218C4CD13E67F9C79028FA0FB5117523C854 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// Camera camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		V_0 = L_0;
		// camera.farClipPlane = arFar;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		float L_2 = __this->___arFar_9;
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_1, L_2, NULL);
		// camera.nearClipPlane = arNear;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		float L_4 = __this->___arNear_8;
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_3, L_4, NULL);
		// float screenWidth = screenSize[0];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___screenSize_6);
		float L_6;
		L_6 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_5, 0, NULL);
		V_1 = L_6;
		// float screenHeight = screenSize[1];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___screenSize_6);
		float L_8;
		L_8 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_7, 1, NULL);
		V_2 = L_8;
		// float videoWidth = videoTexture.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___videoTexture_5;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		// float videoHeight = videoTexture.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___videoTexture_5;
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_3 = ((float)L_12);
		// float videoAspect = videoWidth  / videoHeight;
		float L_13 = V_3;
		V_4 = ((float)(((float)L_10)/L_13));
		// float far = camera.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_0;
		float L_15;
		L_15 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_14, NULL);
		// float webcamZ = far * 0.99f;
		V_5 = ((float)il2cpp_codegen_multiply(L_15, (0.99000001f)));
		// float webcamHeight = 2 * webcamZ * Mathf.Tan(arFov * Mathf.PI/180 / 2);
		float L_16 = V_5;
		float L_17 = __this->___arFov_7;
		float L_18;
		L_18 = tanf(((float)(((float)(((float)il2cpp_codegen_multiply(L_17, (3.14159274f)))/(180.0f)))/(2.0f))));
		V_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_16)), L_18));
		// float webcamWidth = webcamHeight * videoAspect;
		float L_19 = V_6;
		float L_20 = V_4;
		V_7 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		// if (screenWidth / screenHeight > videoAspect) {
		float L_21 = V_1;
		float L_22 = V_2;
		float L_23 = V_4;
		if ((!(((float)((float)(L_21/L_22))) > ((float)L_23))))
		{
			goto IL_00c7;
		}
	}
	{
		// float screenHeightAtFar = webcamHeight;
		float L_24 = V_6;
		// float screenWidthAtFar = screenHeightAtFar * screenWidth / screenHeight;
		float L_25 = V_1;
		float L_26 = V_2;
		// float targetScreenWidthAtFar = webcamWidth;
		float L_27 = V_7;
		// float targetScreenHeightAtFar = targetScreenWidthAtFar * screenHeight / screenWidth;
		float L_28 = V_2;
		float L_29 = V_1;
		// float targetFov = Mathf.Atan(targetScreenHeightAtFar/ webcamZ) * 180 / Mathf.PI;
		float L_30 = V_5;
		float L_31;
		L_31 = atanf(((float)(((float)(((float)il2cpp_codegen_multiply(L_27, L_28))/L_29))/L_30)));
		V_8 = ((float)(((float)il2cpp_codegen_multiply(L_31, (180.0f)))/(3.14159274f)));
		// camera.fieldOfView = targetFov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = V_0;
		float L_33 = V_8;
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_32, L_33, NULL);
		goto IL_00d3;
	}

IL_00c7:
	{
		// camera.fieldOfView = arFov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = V_0;
		float L_35 = __this->___arFov_7;
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_34, L_35, NULL);
	}

IL_00d3:
	{
		// webcamQuad.transform.localPosition = new Vector3(0, 0, webcamZ);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___webcamQuad_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		float L_38 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (0.0f), (0.0f), L_38, /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_39, NULL);
		// webcamQuad.transform.localScale = new Vector3(webcamWidth, webcamHeight, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___webcamQuad_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		float L_42 = V_7;
		float L_43 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_42, L_43, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_41, L_44, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.ARCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCamera__ctor_m17494F2DF158A9BD4DFEA478FE4F8E4C9C95F5E0 (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) 
{
	{
		// private float arFov = -1;
		__this->___arFov_7 = (-1.0f);
		// private float arNear = -1;
		__this->___arNear_8 = (-1.0f);
		// private float arFar = -1;
		__this->___arFar_9 = (-1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebARFoundation.FaceMesh::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_Awake_mA5238F749BBC4A656F45889E909A3E722D6009CD (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, const RuntimeMethod* method) 
{
	{
		// GenerateMesh();
		FaceMesh_GenerateMesh_m85FF02295FAF71BD9BB3FBFF9A51D1D230E761BC(__this, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceMesh::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_OnEnable_mC0621F24514D66CE6114CCB98ACA4344A755ECC1 (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceMesh::UpdatePose(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_UpdatePose_mA8C7AE96410D67B027281850C3DF1A8C98CAAD25 (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = translation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_translation;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_rotation;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_scale;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceMesh::UpdateGeometry(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_UpdateGeometry_m06E3F72DAE082FEAA4679AA8E3B2035B9BC6D48C (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshFilter>().mesh.vertices = vertices;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_vertices;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceMesh::GenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh_GenerateMesh_m85FF02295FAF71BD9BB3FBFF9A51D1D230E761BC (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6FF365131D9B28BBAC144D8FCEC2446FEEBDC1);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var mesh = new Mesh {
		//     name = "Face Mesh"
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = L_0;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral5D6FF365131D9B28BBAC144D8FCEC2446FEEBDC1, NULL);
		V_0 = L_1;
		// Vector3[] vertices = new Vector3[FaceMeshGeometry.VERTICES.GetLength(0)];
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		V_3 = 0;
		goto IL_005d;
	}

IL_0026:
	{
		// vertices[i] = new Vector3((float)FaceMeshGeometry.VERTICES[i,0], (float)FaceMeshGeometry.VERTICES[i,1], (float)FaceMeshGeometry.VERTICES[i,2]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_1;
		int32_t L_6 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_7 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_8 = V_3;
		float L_9;
		L_9 = (L_7)->GetAtUnchecked(L_8, 0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_10 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_11 = V_3;
		float L_12;
		L_12 = (L_10)->GetAtUnchecked(L_11, 1);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_13 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_14 = V_3;
		float L_15;
		L_15 = (L_13)->GetAtUnchecked(L_14, 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)L_9), ((float)L_12), ((float)L_15), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < FaceMeshGeometry.VERTICES.GetLength(0); i++) {
		int32_t L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_19 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0;
		int32_t L_20;
		L_20 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_19, 0, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0026;
		}
	}
	{
		// Vector2[] uv = new Vector2[FaceMeshGeometry.UV.GetLength(0)];
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_21 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1;
		int32_t L_22;
		L_22 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_21, 0, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_2 = L_23;
		// for (int i = 0; i < FaceMeshGeometry.UV.GetLength(0); i++) {
		V_4 = 0;
		goto IL_00b5;
	}

IL_0081:
	{
		// uv[i] = new Vector3((float) FaceMeshGeometry.UV[i,0], (float) FaceMeshGeometry.UV[i,1]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_2;
		int32_t L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_26 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1;
		int32_t L_27 = V_4;
		float L_28;
		L_28 = (L_26)->GetAtUnchecked(L_27, 0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_29 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1;
		int32_t L_30 = V_4;
		float L_31;
		L_31 = (L_29)->GetAtUnchecked(L_30, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_32), ((float)L_28), ((float)L_31), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_32, NULL);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		// for (int i = 0; i < FaceMeshGeometry.UV.GetLength(0); i++) {
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < FaceMeshGeometry.UV.GetLength(0); i++) {
		int32_t L_35 = V_4;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_36 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1;
		int32_t L_37;
		L_37 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_36, 0, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0081;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_38 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = V_1;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_38, L_39, NULL);
		// mesh.uv = uv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_40 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_2;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_40, L_41, NULL);
		// mesh.triangles = FaceMeshGeometry.FACES;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___FACES_2;
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_42, L_43, NULL);
		// GetComponent<MeshFilter>().mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_44;
		L_44 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45 = V_0;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_44, L_45, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMesh__ctor_mDCC0EA430E6556A1278297D72E5D5568F890D518 (FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebARFoundation.FaceMeshGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMeshGeometry__ctor_m6935BCBA42B34D0CBC5D623FEF02E5E60E1C7EB3 (FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WebARFoundation.FaceMeshGeometry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMeshGeometry__cctor_m2A7062A5EF692C1580AF3DF8896E1DCF5B618F6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3C26DBEA4F3A00A93BA6245C900779C4BC6FE8078C68B59B37E89A77C56FC6F4_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____54763E1C0A2729F5BE9DB328DE238EEF222DEDDD527C81D3A3BCA476652D229B_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____61D350723D2B69332719263ED5F04904F7BAA66B814B21C76C901B621B60FD45_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____A2854FA141755EE18667BF5BBC20A1943FB09DC712A5F351D93F167D47361F6B_3_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float[,] VERTICES = new float[,] {{0,-3.406404f,5.979507f},{0,-1.126865f,7.475604f},{0,-2.089024f,6.058267f},{-0.463928f,0.955357f,6.633583f},{0,-0.46317f,7.58658f},{0,0.365669f,7.24287f},{0,2.473255f,5.788627f},{-4.253081f,2.577646f,3.279702f},{0,4.019042f,5.284764f},{0,4.885979f,5.385258f},{0,8.261778f,4.481535f},{0,-3.706811f,5.864924f},{0,-3.918301f,5.56943f},{0,-3.994436f,5.219482f},{0,-4.5424f,5.404754f},{0,-4.745577f,5.529457f},{0,-5.019567f,5.601448f},{0,-5.365123f,5.535441f},{0,-6.149624f,5.071372f},{0,-1.501095f,7.112196f},{-0.416106f,-1.466449f,6.447657f},{-7.08796f,5.434801f,0.09962f},{-2.628639f,2.035898f,3.848121f},{-3.198363f,1.985815f,3.796952f},{-3.775151f,2.039402f,3.646194f},{-4.465819f,2.42295f,3.155168f},{-2.164289f,2.189867f,3.851822f},{-3.208229f,3.223926f,4.115822f},{-2.673803f,3.205337f,4.092203f},{-3.745193f,3.165286f,3.972409f},{-4.161018f,3.059069f,3.719554f},{-5.062006f,1.934418f,2.776093f},{-2.266659f,-7.425768f,4.389812f},{-4.445859f,2.663991f,3.173422f},{-7.21453f,2.263009f,0.07315f},{-5.799793f,2.349546f,2.204059f},{-2.844939f,-0.720868f,4.43313f},{-0.711452f,-3.329355f,5.877044f},{-0.606033f,-3.924562f,5.444923f},{-1.431615f,-3.500953f,5.496189f},{-1.91491f,-3.803146f,5.02893f},{-1.131043f,-3.973937f,5.189648f},{-1.563548f,-4.082763f,4.842263f},{-2.650112f,-5.003649f,4.188483f},{-0.427049f,-1.094134f,7.360529f},{-0.496396f,-0.475659f,7.440358f},{-5.253307f,3.881582f,3.363159f},{-1.718698f,0.974609f,4.558359f},{-1.608635f,-0.942516f,5.814193f},{-1.651267f,-0.610868f,5.581319f},{-4.765501f,-0.701554f,3.534632f},{-0.478306f,0.295766f,7.101013f},{-3.734964f,4.50823f,4.550454f},{-4.588603f,4.302037f,4.048484f},{-6.279331f,6.615427f,1.42585f},{-1.220941f,4.142165f,5.106035f},{-2.193489f,3.100317f,4.000575f},{-3.102642f,-4.352984f,4.095905f},{-6.719682f,-4.788645f,-1.745401f},{-1.193824f,-1.306795f,5.737747f},{-0.729766f,-1.593712f,5.833208f},{-2.456206f,-4.342621f,4.283884f},{-2.204823f,-4.304508f,4.162499f},{-4.985894f,4.802461f,3.751977f},{-1.592294f,-1.257709f,5.456949f},{-2.644548f,4.524654f,4.921559f},{-2.760292f,5.100971f,5.01599f},{-3.523964f,8.005976f,3.729163f},{-5.599763f,5.71547f,2.724259f},{-3.063932f,6.566144f,4.529981f},{-5.720968f,4.254584f,2.830852f},{-6.374393f,4.78559f,1.591691f},{-0.672728f,-3.688016f,5.737804f},{-1.26256f,-3.787691f,5.417779f},{-1.732553f,-3.952767f,5.000579f},{-1.043625f,-1.464973f,5.662455f},{-2.321234f,-4.329069f,4.258156f},{-2.056846f,-4.477671f,4.520883f},{-2.153084f,-4.276322f,4.038093f},{-0.946874f,-1.035249f,6.512274f},{-1.469132f,-4.036351f,4.604908f},{-1.02434f,-3.989851f,4.926693f},{-0.533422f,-3.993222f,5.138202f},{-0.76972f,-6.095394f,4.985883f},{-0.699606f,-5.29185f,5.448304f},{-0.669687f,-4.94977f,5.509612f},{-0.630947f,-4.695101f,5.449371f},{-0.583218f,-4.517982f,5.339869f},{-1.53717f,-4.423206f,4.74547f},{-1.6156f,-4.475942f,4.813632f},{-1.729053f,-4.61868f,4.854463f},{-1.838624f,-4.828746f,4.823737f},{-2.36825f,-3.106237f,4.868096f},{-7.542244f,-1.049282f,-2.431321f},{0,-1.724003f,6.60139f},{-1.826614f,-4.399531f,4.399021f},{-1.929558f,-4.411831f,4.497052f},{-0.597442f,-2.013686f,5.866456f},{-1.405627f,-1.714196f,5.241087f},{-0.662449f,-1.819321f,5.863759f},{-2.34234f,0.572222f,4.294303f},{-3.327324f,0.104863f,4.11386f},{-1.726175f,-0.919165f,5.273355f},{-5.133204f,7.485602f,2.660442f},{-4.538641f,6.319907f,3.683424f},{-3.986562f,5.109487f,4.466315f},{-2.169681f,-5.440433f,4.455874f},{-1.395634f,5.011963f,5.316032f},{-1.6195f,6.599217f,4.921106f},{-1.891399f,8.236377f,4.274997f},{-4.195832f,2.235205f,3.375099f},{-5.733342f,1.411738f,2.431726f},{-1.859887f,2.355757f,3.843181f},{-4.988612f,3.074654f,3.083858f},{-1.303263f,1.416453f,4.831091f},{-1.305757f,-0.672779f,6.415959f},{-6.46517f,0.937119f,1.689873f},{-5.258659f,0.945811f,2.974312f},{-4.432338f,0.722096f,3.522615f},{-3.300681f,0.861641f,3.872784f},{-2.430178f,1.131492f,4.039035f},{-1.820731f,1.467954f,4.224124f},{-0.563221f,2.307693f,5.566789f},{-6.338145f,-0.529279f,1.881175f},{-5.587698f,3.208071f,2.687839f},{-0.242624f,-1.462857f,7.071491f},{-1.611251f,0.339326f,4.895421f},{-7.743095f,2.364999f,-2.005167f},{-1.391142f,1.851048f,4.448999f},{-1.785794f,-0.978284f,4.85047f},{-4.670959f,2.664461f,3.084075f},{-1.33397f,-0.283761f,6.097047f},{-7.270895f,-2.890917f,-2.252455f},{-1.856432f,2.585245f,3.757904f},{-0.923388f,0.073076f,6.671944f},{-5.000589f,-6.135128f,1.892523f},{-5.085276f,-7.17859f,0.714711f},{-7.159291f,-0.81182f,-0.072044f},{-5.843051f,-5.248023f,0.924091f},{-6.847258f,3.662916f,0.724695f},{-2.412942f,-8.258853f,4.119213f},{-0.179909f,-1.689864f,6.573301f},{-2.103655f,-0.163946f,4.566119f},{-6.407571f,2.236021f,1.560843f},{-3.670075f,2.360153f,3.63523f},{-3.177186f,2.294265f,3.775704f},{-2.196121f,-4.598322f,4.479786f},{-6.234883f,-1.94443f,1.663542f},{-1.292924f,-9.29592f,4.094063f},{-3.210651f,-8.533278f,2.802001f},{-4.068926f,-7.993109f,1.925119f},{0,6.54539f,5.027311f},{0,-9.403378f,4.264492f},{-2.724032f,2.315802f,3.777151f},{-2.28846f,2.398891f,3.697603f},{-1.998311f,2.496547f,3.689148f},{-6.13004f,3.399261f,2.038516f},{-2.28846f,2.886504f,3.775031f},{-2.724032f,2.96181f,3.871767f},{-3.177186f,2.964136f,3.876973f},{-3.670075f,2.927714f,3.724325f},{-4.018389f,2.857357f,3.482983f},{-7.555811f,4.106811f,-0.991917f},{-4.018389f,2.483695f,3.440898f},{0,-2.521945f,5.932265f},{-1.776217f,-2.683946f,5.213116f},{-1.222237f,-1.182444f,5.952465f},{-0.731493f,-2.536683f,5.815343f},{0,3.271027f,5.236015f},{-4.135272f,-6.996638f,2.67197f},{-3.311811f,-7.660815f,3.382963f},{-1.313701f,-8.639995f,4.702456f},{-5.940524f,-6.223629f,-0.631468f},{-1.998311f,2.743838f,3.74403f},{-0.901447f,1.236992f,5.754256f},{0,-8.765243f,4.891441f},{-2.308977f,-8.974196f,3.60907f},{-6.954154f,-2.439843f,-0.131163f},{-1.098819f,-4.458788f,5.120727f},{-1.181124f,-4.579996f,5.189564f},{-1.255818f,-4.787901f,5.237051f},{-1.325085f,-5.106507f,5.20501f},{-1.546388f,-5.819392f,4.757893f},{-1.953754f,-4.183892f,4.431713f},{-2.117802f,-4.137093f,4.555096f},{-2.285339f,-4.051196f,4.582438f},{-2.85016f,-3.66572f,4.484994f},{-5.278538f,-2.238942f,2.861224f},{-0.946709f,1.907628f,5.196779f},{-1.314173f,3.104912f,4.231404f},{-1.78f,2.86f,3.881555f},{-1.84511f,-4.09888f,4.247264f},{-5.436187f,-4.030482f,2.109852f},{-0.766444f,3.182131f,4.861453f},{-1.938616f,-6.61441f,4.521085f},{0,1.059413f,6.774605f},{-0.516573f,1.583572f,6.148363f},{0,1.728369f,6.31675f},{-1.246815f,0.230297f,5.681036f},{0,-7.942194f,5.181173f},{0,-6.991499f,5.153478f},{-0.997827f,-6.930921f,4.979576f},{-3.288807f,-5.382514f,3.795752f},{-2.311631f,-1.566237f,4.590085f},{-2.68025f,-6.111567f,4.096152f},{-3.832928f,-1.537326f,4.137731f},{-2.96186f,-2.274215f,4.440943f},{-4.386901f,-2.683286f,3.643886f},{-1.217295f,-7.834465f,4.969286f},{-1.542374f,-0.136843f,5.201008f},{-3.878377f,-6.041764f,3.311079f},{-3.084037f,-6.809842f,3.814195f},{-3.747321f,-4.503545f,3.726453f},{-6.094129f,-3.205991f,1.473482f},{-4.588995f,-4.728726f,2.983221f},{-6.583231f,-3.941269f,0.070268f},{-3.49258f,-3.19582f,4.130198f},{-1.255543f,0.802341f,5.307551f},{-1.126122f,-0.933602f,6.538785f},{-1.443109f,-1.142774f,5.905127f},{-0.923043f,-0.529042f,7.003423f},{-1.755386f,3.529117f,4.327696f},{-2.632589f,3.713828f,4.364629f},{-3.388062f,3.721976f,4.309028f},{-4.075766f,3.675413f,4.076063f},{-4.62291f,3.474691f,3.646321f},{-5.171755f,2.535753f,2.670867f},{-7.297331f,0.763172f,-0.048769f},{-4.706828f,1.651f,3.109532f},{-4.071712f,1.476821f,3.476944f},{-3.269817f,1.470659f,3.731945f},{-2.527572f,1.617311f,3.865444f},{-1.970894f,1.858505f,3.961782f},{-1.579543f,2.097941f,4.084996f},{-7.664182f,0.673132f,-2.435867f},{-1.397041f,-1.340139f,5.630378f},{-0.884838f,0.65874f,6.233232f},{-0.767097f,-0.968035f,7.077932f},{-0.460213f,-1.334106f,6.787447f},{-0.748618f,-1.067994f,6.798303f},{-1.236408f,-1.585568f,5.48049f},{-0.387306f,-1.40999f,6.957705f},{-0.319925f,-1.607931f,6.508676f},{-1.639633f,2.556298f,3.863736f},{-1.255645f,2.467144f,4.2038f},{-1.031362f,2.382663f,4.615849f},{-4.253081f,2.772296f,3.315305f},{-4.53f,2.91f,3.339685f},{0.463928f,0.955357f,6.633583f},{4.253081f,2.577646f,3.279702f},{0.416106f,-1.466449f,6.447657f},{7.08796f,5.434801f,0.09962f},{2.628639f,2.035898f,3.848121f},{3.198363f,1.985815f,3.796952f},{3.775151f,2.039402f,3.646194f},{4.465819f,2.42295f,3.155168f},{2.164289f,2.189867f,3.851822f},{3.208229f,3.223926f,4.115822f},{2.673803f,3.205337f,4.092203f},{3.745193f,3.165286f,3.972409f},{4.161018f,3.059069f,3.719554f},{5.062006f,1.934418f,2.776093f},{2.266659f,-7.425768f,4.389812f},{4.445859f,2.663991f,3.173422f},{7.21453f,2.263009f,0.07315f},{5.799793f,2.349546f,2.204059f},{2.844939f,-0.720868f,4.43313f},{0.711452f,-3.329355f,5.877044f},{0.606033f,-3.924562f,5.444923f},{1.431615f,-3.500953f,5.496189f},{1.91491f,-3.803146f,5.02893f},{1.131043f,-3.973937f,5.189648f},{1.563548f,-4.082763f,4.842263f},{2.650112f,-5.003649f,4.188483f},{0.427049f,-1.094134f,7.360529f},{0.496396f,-0.475659f,7.440358f},{5.253307f,3.881582f,3.363159f},{1.718698f,0.974609f,4.558359f},{1.608635f,-0.942516f,5.814193f},{1.651267f,-0.610868f,5.581319f},{4.765501f,-0.701554f,3.534632f},{0.478306f,0.295766f,7.101013f},{3.734964f,4.50823f,4.550454f},{4.588603f,4.302037f,4.048484f},{6.279331f,6.615427f,1.42585f},{1.220941f,4.142165f,5.106035f},{2.193489f,3.100317f,4.000575f},{3.102642f,-4.352984f,4.095905f},{6.719682f,-4.788645f,-1.745401f},{1.193824f,-1.306795f,5.737747f},{0.729766f,-1.593712f,5.833208f},{2.456206f,-4.342621f,4.283884f},{2.204823f,-4.304508f,4.162499f},{4.985894f,4.802461f,3.751977f},{1.592294f,-1.257709f,5.456949f},{2.644548f,4.524654f,4.921559f},{2.760292f,5.100971f,5.01599f},{3.523964f,8.005976f,3.729163f},{5.599763f,5.71547f,2.724259f},{3.063932f,6.566144f,4.529981f},{5.720968f,4.254584f,2.830852f},{6.374393f,4.78559f,1.591691f},{0.672728f,-3.688016f,5.737804f},{1.26256f,-3.787691f,5.417779f},{1.732553f,-3.952767f,5.000579f},{1.043625f,-1.464973f,5.662455f},{2.321234f,-4.329069f,4.258156f},{2.056846f,-4.477671f,4.520883f},{2.153084f,-4.276322f,4.038093f},{0.946874f,-1.035249f,6.512274f},{1.469132f,-4.036351f,4.604908f},{1.02434f,-3.989851f,4.926693f},{0.533422f,-3.993222f,5.138202f},{0.76972f,-6.095394f,4.985883f},{0.699606f,-5.29185f,5.448304f},{0.669687f,-4.94977f,5.509612f},{0.630947f,-4.695101f,5.449371f},{0.583218f,-4.517982f,5.339869f},{1.53717f,-4.423206f,4.74547f},{1.6156f,-4.475942f,4.813632f},{1.729053f,-4.61868f,4.854463f},{1.838624f,-4.828746f,4.823737f},{2.36825f,-3.106237f,4.868096f},{7.542244f,-1.049282f,-2.431321f},{1.826614f,-4.399531f,4.399021f},{1.929558f,-4.411831f,4.497052f},{0.597442f,-2.013686f,5.866456f},{1.405627f,-1.714196f,5.241087f},{0.662449f,-1.819321f,5.863759f},{2.34234f,0.572222f,4.294303f},{3.327324f,0.104863f,4.11386f},{1.726175f,-0.919165f,5.273355f},{5.133204f,7.485602f,2.660442f},{4.538641f,6.319907f,3.683424f},{3.986562f,5.109487f,4.466315f},{2.169681f,-5.440433f,4.455874f},{1.395634f,5.011963f,5.316032f},{1.6195f,6.599217f,4.921106f},{1.891399f,8.236377f,4.274997f},{4.195832f,2.235205f,3.375099f},{5.733342f,1.411738f,2.431726f},{1.859887f,2.355757f,3.843181f},{4.988612f,3.074654f,3.083858f},{1.303263f,1.416453f,4.831091f},{1.305757f,-0.672779f,6.415959f},{6.46517f,0.937119f,1.689873f},{5.258659f,0.945811f,2.974312f},{4.432338f,0.722096f,3.522615f},{3.300681f,0.861641f,3.872784f},{2.430178f,1.131492f,4.039035f},{1.820731f,1.467954f,4.224124f},{0.563221f,2.307693f,5.566789f},{6.338145f,-0.529279f,1.881175f},{5.587698f,3.208071f,2.687839f},{0.242624f,-1.462857f,7.071491f},{1.611251f,0.339326f,4.895421f},{7.743095f,2.364999f,-2.005167f},{1.391142f,1.851048f,4.448999f},{1.785794f,-0.978284f,4.85047f},{4.670959f,2.664461f,3.084075f},{1.33397f,-0.283761f,6.097047f},{7.270895f,-2.890917f,-2.252455f},{1.856432f,2.585245f,3.757904f},{0.923388f,0.073076f,6.671944f},{5.000589f,-6.135128f,1.892523f},{5.085276f,-7.17859f,0.714711f},{7.159291f,-0.81182f,-0.072044f},{5.843051f,-5.248023f,0.924091f},{6.847258f,3.662916f,0.724695f},{2.412942f,-8.258853f,4.119213f},{0.179909f,-1.689864f,6.573301f},{2.103655f,-0.163946f,4.566119f},{6.407571f,2.236021f,1.560843f},{3.670075f,2.360153f,3.63523f},{3.177186f,2.294265f,3.775704f},{2.196121f,-4.598322f,4.479786f},{6.234883f,-1.94443f,1.663542f},{1.292924f,-9.29592f,4.094063f},{3.210651f,-8.533278f,2.802001f},{4.068926f,-7.993109f,1.925119f},{2.724032f,2.315802f,3.777151f},{2.28846f,2.398891f,3.697603f},{1.998311f,2.496547f,3.689148f},{6.13004f,3.399261f,2.038516f},{2.28846f,2.886504f,3.775031f},{2.724032f,2.96181f,3.871767f},{3.177186f,2.964136f,3.876973f},{3.670075f,2.927714f,3.724325f},{4.018389f,2.857357f,3.482983f},{7.555811f,4.106811f,-0.991917f},{4.018389f,2.483695f,3.440898f},{1.776217f,-2.683946f,5.213116f},{1.222237f,-1.182444f,5.952465f},{0.731493f,-2.536683f,5.815343f},{4.135272f,-6.996638f,2.67197f},{3.311811f,-7.660815f,3.382963f},{1.313701f,-8.639995f,4.702456f},{5.940524f,-6.223629f,-0.631468f},{1.998311f,2.743838f,3.74403f},{0.901447f,1.236992f,5.754256f},{2.308977f,-8.974196f,3.60907f},{6.954154f,-2.439843f,-0.131163f},{1.098819f,-4.458788f,5.120727f},{1.181124f,-4.579996f,5.189564f},{1.255818f,-4.787901f,5.237051f},{1.325085f,-5.106507f,5.20501f},{1.546388f,-5.819392f,4.757893f},{1.953754f,-4.183892f,4.431713f},{2.117802f,-4.137093f,4.555096f},{2.285339f,-4.051196f,4.582438f},{2.85016f,-3.66572f,4.484994f},{5.278538f,-2.238942f,2.861224f},{0.946709f,1.907628f,5.196779f},{1.314173f,3.104912f,4.231404f},{1.78f,2.86f,3.881555f},{1.84511f,-4.09888f,4.247264f},{5.436187f,-4.030482f,2.109852f},{0.766444f,3.182131f,4.861453f},{1.938616f,-6.61441f,4.521085f},{0.516573f,1.583572f,6.148363f},{1.246815f,0.230297f,5.681036f},{0.997827f,-6.930921f,4.979576f},{3.288807f,-5.382514f,3.795752f},{2.311631f,-1.566237f,4.590085f},{2.68025f,-6.111567f,4.096152f},{3.832928f,-1.537326f,4.137731f},{2.96186f,-2.274215f,4.440943f},{4.386901f,-2.683286f,3.643886f},{1.217295f,-7.834465f,4.969286f},{1.542374f,-0.136843f,5.201008f},{3.878377f,-6.041764f,3.311079f},{3.084037f,-6.809842f,3.814195f},{3.747321f,-4.503545f,3.726453f},{6.094129f,-3.205991f,1.473482f},{4.588995f,-4.728726f,2.983221f},{6.583231f,-3.941269f,0.070268f},{3.49258f,-3.19582f,4.130198f},{1.255543f,0.802341f,5.307551f},{1.126122f,-0.933602f,6.538785f},{1.443109f,-1.142774f,5.905127f},{0.923043f,-0.529042f,7.003423f},{1.755386f,3.529117f,4.327696f},{2.632589f,3.713828f,4.364629f},{3.388062f,3.721976f,4.309028f},{4.075766f,3.675413f,4.076063f},{4.62291f,3.474691f,3.646321f},{5.171755f,2.535753f,2.670867f},{7.297331f,0.763172f,-0.048769f},{4.706828f,1.651f,3.109532f},{4.071712f,1.476821f,3.476944f},{3.269817f,1.470659f,3.731945f},{2.527572f,1.617311f,3.865444f},{1.970894f,1.858505f,3.961782f},{1.579543f,2.097941f,4.084996f},{7.664182f,0.673132f,-2.435867f},{1.397041f,-1.340139f,5.630378f},{0.884838f,0.65874f,6.233232f},{0.767097f,-0.968035f,7.077932f},{0.460213f,-1.334106f,6.787447f},{0.748618f,-1.067994f,6.798303f},{1.236408f,-1.585568f,5.48049f},{0.387306f,-1.40999f,6.957705f},{0.319925f,-1.607931f,6.508676f},{1.639633f,2.556298f,3.863736f},{1.255645f,2.467144f,4.2038f},{1.031362f,2.382663f,4.615849f},{4.253081f,2.772296f,3.315305f},{4.53f,2.91f,3.339685f}};
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)468), (il2cpp_array_size_t)3 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_1);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____54763E1C0A2729F5BE9DB328DE238EEF222DEDDD527C81D3A3BCA476652D229B_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___VERTICES_0), (void*)L_2);
		// public static float[,] UV = new float[,] {{0.499977f,0.347466f},{0.500026f,0.452513f},{0.499974f,0.397628f},{0.482113f,0.528021f},{0.500151f,0.472844f},{0.49991f,0.501747f},{0.499523f,0.598938f},{0.289712f,0.619236f},{0.499955f,0.687602f},{0.499987f,0.730081f},{0.500023f,0.89295f},{0.500023f,0.333766f},{0.500016f,0.320776f},{0.500023f,0.307652f},{0.499977f,0.304722f},{0.499977f,0.294066f},{0.499977f,0.280615f},{0.499977f,0.262981f},{0.499968f,0.218629f},{0.499816f,0.437019f},{0.473773f,0.42609f},{0.104907f,0.745859f},{0.36593f,0.590424f},{0.338758f,0.586975f},{0.31112f,0.59054f},{0.274658f,0.610869f},{0.393362f,0.596294f},{0.345234f,0.655989f},{0.370094f,0.653924f},{0.319322f,0.652735f},{0.297903f,0.646409f},{0.247792f,0.58919f},{0.396889f,0.157245f},{0.280098f,0.6244f},{0.10631f,0.600044f},{0.209925f,0.608647f},{0.355808f,0.465594f},{0.471751f,0.349596f},{0.474155f,0.319808f},{0.439785f,0.342771f},{0.414617f,0.333459f},{0.450374f,0.319139f},{0.428771f,0.317309f},{0.374971f,0.272195f},{0.486717f,0.452371f},{0.485301f,0.472605f},{0.257765f,0.68551f},{0.401223f,0.544828f},{0.429819f,0.451385f},{0.421352f,0.466259f},{0.276896f,0.467943f},{0.48337f,0.500413f},{0.337212f,0.717117f},{0.296392f,0.706757f},{0.169295f,0.806186f},{0.44758f,0.69739f},{0.39239f,0.646112f},{0.35449f,0.303216f},{0.067305f,0.269895f},{0.442739f,0.427174f},{0.457098f,0.415208f},{0.381974f,0.305289f},{0.392389f,0.305797f},{0.277076f,0.728068f},{0.422552f,0.436767f},{0.385919f,0.718636f},{0.383103f,0.74416f},{0.331431f,0.880286f},{0.229924f,0.767997f},{0.364501f,0.810886f},{0.229622f,0.700459f},{0.173287f,0.721252f},{0.472879f,0.333802f},{0.446828f,0.331473f},{0.422762f,0.32611f},{0.445308f,0.419934f},{0.388103f,0.306039f},{0.403039f,0.29346f},{0.403629f,0.306047f},{0.460042f,0.442861f},{0.431158f,0.307634f},{0.452182f,0.307634f},{0.475387f,0.307634f},{0.465828f,0.22081f},{0.472329f,0.263774f},{0.473087f,0.282143f},{0.473122f,0.295374f},{0.473033f,0.304722f},{0.427942f,0.304722f},{0.426479f,0.29646f},{0.423162f,0.288154f},{0.418309f,0.279937f},{0.390095f,0.360427f},{0.013954f,0.439966f},{0.499914f,0.419853f},{0.4132f,0.3046f},{0.409626f,0.298177f},{0.46808f,0.398465f},{0.422729f,0.414015f},{0.46308f,0.406216f},{0.37212f,0.526586f},{0.334562f,0.503927f},{0.411671f,0.453035f},{0.242176f,0.852324f},{0.290777f,0.798554f},{0.327338f,0.743473f},{0.39951f,0.251079f},{0.441728f,0.738324f},{0.429765f,0.812166f},{0.412198f,0.891099f},{0.288955f,0.601048f},{0.218937f,0.564589f},{0.412782f,0.60103f},{0.257135f,0.64456f},{0.427685f,0.562039f},{0.44834f,0.463064f},{0.17856f,0.542446f},{0.247308f,0.542806f},{0.286267f,0.532325f},{0.332828f,0.539288f},{0.368756f,0.552793f},{0.398964f,0.567345f},{0.47641f,0.594194f},{0.189241f,0.476076f},{0.228962f,0.651049f},{0.490726f,0.437599f},{0.40467f,0.514867f},{0.019469f,0.598436f},{0.426243f,0.579569f},{0.396993f,0.451203f},{0.26647f,0.623023f},{0.439121f,0.481042f},{0.032314f,0.355643f},{0.419054f,0.612845f},{0.462783f,0.494253f},{0.238979f,0.220255f},{0.198221f,0.168062f},{0.10755f,0.459245f},{0.18361f,0.259743f},{0.13441f,0.666317f},{0.385764f,0.116846f},{0.490967f,0.420622f},{0.382385f,0.491427f},{0.174399f,0.602329f},{0.318785f,0.603765f},{0.343364f,0.599403f},{0.3961f,0.289783f},{0.187885f,0.411462f},{0.430987f,0.055935f},{0.318993f,0.101715f},{0.266248f,0.130299f},{0.500023f,0.809424f},{0.499977f,0.045547f},{0.36617f,0.601178f},{0.393207f,0.604463f},{0.410373f,0.60892f},{0.194993f,0.657898f},{0.388665f,0.637716f},{0.365962f,0.644029f},{0.343364f,0.644643f},{0.318785f,0.64166f},{0.301415f,0.636844f},{0.058133f,0.680924f},{0.301415f,0.612551f},{0.499988f,0.381566f},{0.415838f,0.375804f},{0.445682f,0.433923f},{0.465844f,0.379359f},{0.499923f,0.648476f},{0.288719f,0.180054f},{0.335279f,0.14718f},{0.440512f,0.097581f},{0.128294f,0.208059f},{0.408772f,0.626106f},{0.455607f,0.548199f},{0.499877f,0.09101f},{0.375437f,0.075808f},{0.11421f,0.384978f},{0.448662f,0.304722f},{0.44802f,0.295368f},{0.447112f,0.284192f},{0.444832f,0.269206f},{0.430012f,0.233191f},{0.406787f,0.314327f},{0.400738f,0.318931f},{0.3924f,0.322297f},{0.367856f,0.336081f},{0.247923f,0.398667f},{0.45277f,0.57915f},{0.436392f,0.640113f},{0.416164f,0.631286f},{0.413386f,0.307634f},{0.228018f,0.316428f},{0.468268f,0.647329f},{0.411362f,0.195673f},{0.499989f,0.530175f},{0.479154f,0.557346f},{0.499974f,0.560363f},{0.432112f,0.506411f},{0.499886f,0.133083f},{0.499913f,0.178271f},{0.456549f,0.180799f},{0.344549f,0.254561f},{0.378909f,0.42599f},{0.374293f,0.219815f},{0.319688f,0.429262f},{0.357155f,0.39573f},{0.295284f,0.378419f},{0.44775f,0.137523f},{0.410986f,0.491277f},{0.313951f,0.224692f},{0.354128f,0.187447f},{0.324548f,0.296007f},{0.189096f,0.3537f},{0.279777f,0.285342f},{0.133823f,0.317299f},{0.336768f,0.355267f},{0.429884f,0.533478f},{0.455528f,0.451377f},{0.437114f,0.441104f},{0.467288f,0.470075f},{0.414712f,0.66478f},{0.377046f,0.677222f},{0.344108f,0.679849f},{0.312876f,0.677668f},{0.283526f,0.66681f},{0.241246f,0.617214f},{0.102986f,0.531237f},{0.267612f,0.57544f},{0.297879f,0.566824f},{0.333434f,0.566122f},{0.366427f,0.573884f},{0.396012f,0.583304f},{0.420121f,0.589772f},{0.007561f,0.519223f},{0.432949f,0.430482f},{0.458639f,0.520911f},{0.473466f,0.454256f},{0.476088f,0.43617f},{0.468472f,0.444943f},{0.433991f,0.417638f},{0.483518f,0.437016f},{0.482483f,0.422151f},{0.42645f,0.610201f},{0.438999f,0.603505f},{0.450067f,0.599566f},{0.289712f,0.631747f},{0.27667f,0.636627f},{0.517862f,0.528052f},{0.710288f,0.619236f},{0.526227f,0.42609f},{0.895093f,0.745859f},{0.63407f,0.590424f},{0.661242f,0.586975f},{0.68888f,0.59054f},{0.725342f,0.610869f},{0.60663f,0.596295f},{0.654766f,0.655989f},{0.629906f,0.653924f},{0.680678f,0.652735f},{0.702097f,0.646409f},{0.752212f,0.589195f},{0.602918f,0.157137f},{0.719902f,0.6244f},{0.893693f,0.60004f},{0.790082f,0.608646f},{0.643998f,0.465512f},{0.528249f,0.349596f},{0.52585f,0.319809f},{0.560215f,0.342771f},{0.585384f,0.333459f},{0.549626f,0.319139f},{0.571228f,0.317308f},{0.624852f,0.271901f},{0.51305f,0.452718f},{0.515097f,0.472748f},{0.742247f,0.685493f},{0.598631f,0.545021f},{0.570338f,0.451425f},{0.578632f,0.466377f},{0.723087f,0.467946f},{0.516446f,0.500361f},{0.662801f,0.717082f},{0.703624f,0.706729f},{0.830705f,0.806186f},{0.552386f,0.697432f},{0.60761f,0.646112f},{0.645429f,0.303293f},{0.932695f,0.269895f},{0.557261f,0.427174f},{0.542902f,0.415208f},{0.618026f,0.305289f},{0.607591f,0.305797f},{0.722943f,0.728037f},{0.577414f,0.436833f},{0.614083f,0.718613f},{0.616907f,0.744114f},{0.668509f,0.880086f},{0.770092f,0.767979f},{0.635536f,0.810751f},{0.770391f,0.700444f},{0.826722f,0.721245f},{0.527121f,0.333802f},{0.553172f,0.331473f},{0.577238f,0.32611f},{0.554692f,0.419934f},{0.611897f,0.306039f},{0.596961f,0.29346f},{0.596371f,0.306047f},{0.539958f,0.442861f},{0.568842f,0.307634f},{0.547818f,0.307634f},{0.524613f,0.307634f},{0.53409f,0.220859f},{0.527671f,0.263774f},{0.526913f,0.282143f},{0.526878f,0.295374f},{0.526967f,0.304722f},{0.572058f,0.304722f},{0.573521f,0.29646f},{0.576838f,0.288154f},{0.581691f,0.279937f},{0.609945f,0.36009f},{0.986046f,0.439966f},{0.5868f,0.3046f},{0.590372f,0.298177f},{0.531915f,0.398463f},{0.577268f,0.414065f},{0.536915f,0.406214f},{0.627543f,0.526648f},{0.665586f,0.504049f},{0.588354f,0.453138f},{0.757824f,0.852324f},{0.70925f,0.798492f},{0.672684f,0.743419f},{0.600409f,0.250995f},{0.558266f,0.738328f},{0.570304f,0.812129f},{0.588166f,0.890956f},{0.711045f,0.601048f},{0.78107f,0.564595f},{0.587247f,0.601068f},{0.74287f,0.644554f},{0.572156f,0.562348f},{0.551868f,0.46343f},{0.821442f,0.542444f},{0.752702f,0.542818f},{0.713757f,0.532373f},{0.667113f,0.539327f},{0.631101f,0.552846f},{0.600862f,0.567527f},{0.523481f,0.594373f},{0.810748f,0.476074f},{0.771046f,0.651041f},{0.509127f,0.437282f},{0.595293f,0.514976f},{0.980531f,0.598436f},{0.5735f,0.58f},{0.602995f,0.451312f},{0.73353f,0.623023f},{0.560611f,0.480983f},{0.967686f,0.355643f},{0.580985f,0.61284f},{0.537728f,0.494615f},{0.760966f,0.220247f},{0.801779f,0.168062f},{0.892441f,0.459239f},{0.816351f,0.25974f},{0.865595f,0.666313f},{0.614074f,0.116754f},{0.508953f,0.420562f},{0.617942f,0.491684f},{0.825608f,0.602325f},{0.681215f,0.603765f},{0.656636f,0.599403f},{0.6039f,0.289783f},{0.812086f,0.411461f},{0.568013f,0.055435f},{0.681008f,0.101715f},{0.733752f,0.130299f},{0.63383f,0.601178f},{0.606793f,0.604463f},{0.58966f,0.608938f},{0.805016f,0.657892f},{0.611335f,0.637716f},{0.634038f,0.644029f},{0.656636f,0.644643f},{0.681215f,0.64166f},{0.698585f,0.636844f},{0.941867f,0.680924f},{0.698585f,0.612551f},{0.584177f,0.375893f},{0.554318f,0.433923f},{0.534154f,0.37936f},{0.711218f,0.180025f},{0.66463f,0.147129f},{0.5591f,0.097368f},{0.871706f,0.208059f},{0.591234f,0.626106f},{0.544341f,0.548416f},{0.624563f,0.075808f},{0.88577f,0.384971f},{0.551338f,0.304722f},{0.55198f,0.295368f},{0.552888f,0.284192f},{0.555168f,0.269206f},{0.569944f,0.232965f},{0.593203f,0.314324f},{0.599262f,0.318931f},{0.6076f,0.322297f},{0.631938f,0.3365f},{0.752033f,0.398685f},{0.547226f,0.579605f},{0.563544f,0.640172f},{0.583841f,0.631286f},{0.586614f,0.307634f},{0.771915f,0.316422f},{0.531597f,0.647517f},{0.588371f,0.195559f},{0.520797f,0.557435f},{0.567985f,0.506521f},{0.543283f,0.180745f},{0.655317f,0.254485f},{0.621009f,0.425982f},{0.62556f,0.219688f},{0.680198f,0.429281f},{0.642764f,0.395662f},{0.704663f,0.37847f},{0.552012f,0.137408f},{0.589072f,0.491363f},{0.685945f,0.224643f},{0.645735f,0.18736f},{0.675343f,0.296022f},{0.810858f,0.353695f},{0.720122f,0.285333f},{0.866152f,0.317295f},{0.663187f,0.355403f},{0.570082f,0.533674f},{0.544562f,0.451624f},{0.562759f,0.441215f},{0.531987f,0.46986f},{0.585271f,0.664823f},{0.622953f,0.677221f},{0.655896f,0.679837f},{0.687132f,0.677654f},{0.716482f,0.666799f},{0.758757f,0.617213f},{0.897013f,0.531231f},{0.732392f,0.575453f},{0.702114f,0.566837f},{0.666525f,0.566134f},{0.633505f,0.573912f},{0.603876f,0.583413f},{0.579658f,0.590055f},{0.99244f,0.519223f},{0.567192f,0.43058f},{0.541366f,0.521101f},{0.526564f,0.453882f},{0.523913f,0.43617f},{0.531529f,0.444943f},{0.566036f,0.417671f},{0.516311f,0.436946f},{0.517472f,0.422123f},{0.573595f,0.610193f},{0.560698f,0.604668f},{0.549756f,0.600249f},{0.710288f,0.631747f},{0.72333f,0.636627f}};
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)((int32_t)468), (il2cpp_array_size_t)2 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_4 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_5);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_6 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____3C26DBEA4F3A00A93BA6245C900779C4BC6FE8078C68B59B37E89A77C56FC6F4_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___UV_1), (void*)L_6);
		// public static int[] FACES = new int[] {173,155,133,246,33,7,382,398,362,263,466,249,308,415,324,78,95,191,356,389,264,127,34,162,368,264,389,139,162,34,267,0,302,37,72,0,11,302,0,11,0,72,349,451,350,120,121,231,452,350,451,232,231,121,267,302,269,37,39,72,303,269,302,73,72,39,357,343,350,128,121,114,277,350,343,47,114,121,350,452,357,121,128,232,453,357,452,233,232,128,299,333,297,69,67,104,332,297,333,103,104,67,175,152,396,175,171,152,377,396,152,148,152,171,381,384,382,154,155,157,398,382,384,173,157,155,280,347,330,50,101,118,348,330,347,119,118,101,269,303,270,39,40,73,304,270,303,74,73,40,9,336,151,9,151,107,337,151,336,108,107,151,344,278,360,115,131,48,279,360,278,49,48,131,262,431,418,32,194,211,424,418,431,204,211,194,304,408,270,74,40,184,409,270,408,185,184,40,272,310,407,42,183,80,415,407,310,191,80,183,322,270,410,92,186,40,409,410,270,185,40,186,347,449,348,118,119,229,450,348,449,230,229,119,434,432,430,214,210,212,422,430,432,202,212,210,313,314,18,83,18,84,17,18,314,17,84,18,307,375,306,77,76,146,291,306,375,61,146,76,259,387,260,29,30,160,388,260,387,161,160,30,286,414,384,56,157,190,398,384,414,173,190,157,418,424,406,194,182,204,335,406,424,106,204,182,367,416,364,138,135,192,434,364,416,214,192,135,391,423,327,165,98,203,358,327,423,129,203,98,298,301,284,68,54,71,251,284,301,21,71,54,4,275,5,4,5,45,281,5,275,51,45,5,254,373,253,24,23,144,374,253,373,145,144,23,320,321,307,90,77,91,375,307,321,146,91,77,280,425,411,50,187,205,427,411,425,207,205,187,421,313,200,201,200,83,18,200,313,18,83,200,335,321,406,106,182,91,405,406,321,181,91,182,405,321,404,181,180,91,320,404,321,90,91,180,17,314,16,17,16,84,315,16,314,85,84,16,425,266,426,205,206,36,423,426,266,203,36,206,369,396,400,140,176,171,377,400,396,148,171,176,391,269,322,165,92,39,270,322,269,40,39,92,417,465,413,193,189,245,464,413,465,244,245,189,257,258,386,27,159,28,385,386,258,158,28,159,260,388,467,30,247,161,466,467,388,246,161,247,248,456,419,3,196,236,399,419,456,174,236,196,333,298,332,104,103,68,284,332,298,54,68,103,285,8,417,55,193,8,168,417,8,168,8,193,340,261,346,111,117,31,448,346,261,228,31,117,285,417,441,55,221,193,413,441,417,189,193,221,327,460,326,98,97,240,328,326,460,99,240,97,277,355,329,47,100,126,371,329,355,142,126,100,309,392,438,79,218,166,439,438,392,219,166,218,381,382,256,154,26,155,341,256,382,112,155,26,360,279,420,131,198,49,429,420,279,209,49,198,365,364,379,136,150,135,394,379,364,169,135,150,355,277,437,126,217,47,343,437,277,114,47,217,443,444,282,223,52,224,283,282,444,53,224,52,281,275,363,51,134,45,440,363,275,220,45,134,431,262,395,211,170,32,369,395,262,140,32,170,337,299,338,108,109,69,297,338,299,67,69,109,335,273,321,106,91,43,375,321,273,146,43,91,348,450,349,119,120,230,451,349,450,231,230,120,467,359,342,247,113,130,446,342,359,226,130,113,282,283,334,52,105,53,293,334,283,63,53,105,250,458,462,20,242,238,461,462,458,241,238,242,276,353,300,46,70,124,383,300,353,156,124,70,325,292,324,96,95,62,308,324,292,78,62,95,283,276,293,53,63,46,300,293,276,70,46,63,447,264,345,227,116,34,372,345,264,143,34,116,352,345,346,123,117,116,340,346,345,111,116,117,1,19,274,1,44,19,354,274,19,125,19,44,248,281,456,3,236,51,363,456,281,134,51,236,425,426,427,205,207,206,436,427,426,216,206,207,380,381,252,153,22,154,256,252,381,26,154,22,391,393,269,165,39,167,267,269,393,37,167,39,199,428,200,199,200,208,421,200,428,201,208,200,330,329,266,101,36,100,371,266,329,142,100,36,422,432,273,202,43,212,287,273,432,57,212,43,290,250,328,60,99,20,462,328,250,242,20,99,258,286,385,28,158,56,384,385,286,157,56,158,342,446,353,113,124,226,265,353,446,35,226,124,257,386,259,27,29,159,387,259,386,160,159,29,430,422,431,210,211,202,424,431,422,204,202,211,445,342,276,225,46,113,353,276,342,124,113,46,424,422,335,204,106,202,273,335,422,43,202,106,306,292,307,76,77,62,325,307,292,96,62,77,366,447,352,137,123,227,345,352,447,116,227,123,302,268,303,72,73,38,271,303,268,41,38,73,371,358,266,142,36,129,423,266,358,203,129,36,327,294,460,98,240,64,455,460,294,235,64,240,294,331,278,64,48,102,279,278,331,49,102,48,303,271,304,73,74,41,272,304,271,42,41,74,427,436,434,207,214,216,432,434,436,212,216,214,304,272,408,74,184,42,407,408,272,183,42,184,394,430,395,169,170,210,431,395,430,211,210,170,395,369,378,170,149,140,400,378,369,176,140,149,296,334,299,66,69,105,333,299,334,104,105,69,417,168,351,193,122,168,6,351,168,6,168,122,280,411,352,50,123,187,376,352,411,147,187,123,319,320,325,89,96,90,307,325,320,77,90,96,285,295,336,55,107,65,296,336,295,66,65,107,404,320,403,180,179,90,319,403,320,89,90,179,330,348,329,101,100,119,349,329,348,120,119,100,334,293,333,105,104,63,298,333,293,68,63,104,323,454,366,93,137,234,447,366,454,227,234,137,16,315,15,16,15,85,316,15,315,86,85,15,429,279,358,209,129,49,331,358,279,102,49,129,15,316,14,15,14,86,317,14,316,87,86,14,8,285,9,8,9,55,336,9,285,107,55,9,329,349,277,100,47,120,350,277,349,121,120,47,252,253,380,22,153,23,374,380,253,145,23,153,402,403,318,178,88,179,319,318,403,89,179,88,351,6,419,122,196,6,197,419,6,197,6,196,324,318,325,95,96,88,319,325,318,89,88,96,397,367,365,172,136,138,364,365,367,135,138,136,288,435,397,58,172,215,367,397,435,138,215,172,438,439,344,218,115,219,278,344,439,48,219,115,271,311,272,41,42,81,310,272,311,80,81,42,5,281,195,5,195,51,248,195,281,3,51,195,273,287,375,43,146,57,291,375,287,61,57,146,396,428,175,171,175,208,199,175,428,199,208,175,268,312,271,38,41,82,311,271,312,81,82,41,444,445,283,224,53,225,276,283,445,46,225,53,254,339,373,24,144,110,390,373,339,163,110,144,295,282,296,65,66,52,334,296,282,105,52,66,346,448,347,117,118,228,449,347,448,229,228,118,454,356,447,234,227,127,264,447,356,34,127,227,336,296,337,107,108,66,299,337,296,69,66,108,151,337,10,151,10,108,338,10,337,109,108,10,278,439,294,48,64,219,455,294,439,235,219,64,407,415,292,183,62,191,308,292,415,78,191,62,358,371,429,129,209,142,355,429,371,126,142,209,345,372,340,116,111,143,265,340,372,35,143,111,388,390,466,161,246,163,249,466,390,7,163,246,352,346,280,123,50,117,347,280,346,118,117,50,295,442,282,65,52,222,443,282,442,223,222,52,19,94,354,19,125,94,370,354,94,141,94,125,295,285,442,65,222,55,441,442,285,221,55,222,419,197,248,196,3,197,195,248,197,195,197,3,359,263,255,130,25,33,249,255,263,7,33,25,275,274,440,45,220,44,457,440,274,237,44,220,300,383,301,70,71,156,368,301,383,139,156,71,417,351,465,193,245,122,412,465,351,188,122,245,466,263,467,246,247,33,359,467,263,130,33,247,389,251,368,162,139,21,301,368,251,71,21,139,374,386,380,145,153,159,385,380,386,158,159,153,379,394,378,150,149,169,395,378,394,170,169,149,351,419,412,122,188,196,399,412,419,174,196,188,426,322,436,206,216,92,410,436,322,186,92,216,387,373,388,160,161,144,390,388,373,163,144,161,393,326,164,167,164,97,2,164,326,2,97,164,354,370,461,125,241,141,462,461,370,242,141,241,0,267,164,0,164,37,393,164,267,167,37,164,11,12,302,11,72,12,268,302,12,38,12,72,386,374,387,159,160,145,373,387,374,144,145,160,12,13,268,12,38,13,312,268,13,82,13,38,293,300,298,63,68,70,301,298,300,71,70,68,340,265,261,111,31,35,446,261,265,226,35,31,380,385,381,153,154,158,384,381,385,157,158,154,280,330,425,50,205,101,266,425,330,36,101,205,423,391,426,203,206,165,322,426,391,92,165,206,429,355,420,209,198,126,437,420,355,217,126,198,391,327,393,165,167,98,326,393,327,97,98,167,457,438,440,237,220,218,344,440,438,115,218,220,382,362,341,155,112,133,463,341,362,243,133,112,457,461,459,237,239,241,458,459,461,238,241,239,434,430,364,214,135,210,394,364,430,169,210,135,414,463,398,190,173,243,362,398,463,133,243,173,262,428,369,32,140,208,396,369,428,171,208,140,457,274,461,237,241,44,354,461,274,125,44,241,316,403,317,86,87,179,402,317,403,178,179,87,315,404,316,85,86,180,403,316,404,179,180,86,314,405,315,84,85,181,404,315,405,180,181,85,313,406,314,83,84,182,405,314,406,181,182,84,418,406,421,194,201,182,313,421,406,83,182,201,366,401,323,137,93,177,361,323,401,132,177,93,408,407,306,184,76,183,292,306,407,62,183,76,408,306,409,184,185,76,291,409,306,61,76,185,410,409,287,186,57,185,291,287,409,61,185,57,436,410,432,216,212,186,287,432,410,57,186,212,434,416,427,214,207,192,411,427,416,187,192,207,264,368,372,34,143,139,383,372,368,156,139,143,457,459,438,237,218,239,309,438,459,79,239,218,352,376,366,123,137,147,401,366,376,177,147,137,4,1,275,4,45,1,274,275,1,44,1,45,428,262,421,208,201,32,418,421,262,194,32,201,327,358,294,98,64,129,331,294,358,102,129,64,367,435,416,138,192,215,433,416,435,213,215,192,455,439,289,235,59,219,392,289,439,166,219,59,328,462,326,99,97,242,370,326,462,141,242,97,326,370,2,97,2,141,94,2,370,94,141,2,460,455,305,240,75,235,289,305,455,59,235,75,448,339,449,228,229,110,254,449,339,24,110,229,261,446,255,31,25,226,359,255,446,130,226,25,449,254,450,229,230,24,253,450,254,23,24,230,450,253,451,230,231,23,252,451,253,22,23,231,451,252,452,231,232,22,256,452,252,26,22,232,256,341,452,26,232,112,453,452,341,233,112,232,413,464,414,189,190,244,463,414,464,243,244,190,441,413,286,221,56,189,414,286,413,190,189,56,441,286,442,221,222,56,258,442,286,28,56,222,442,258,443,222,223,28,257,443,258,27,28,223,444,443,259,224,29,223,257,259,443,27,223,29,259,260,444,29,224,30,445,444,260,225,30,224,260,467,445,30,225,247,342,445,467,113,247,225,250,309,458,20,238,79,459,458,309,239,79,238,290,305,392,60,166,75,289,392,305,59,75,166,460,305,328,240,99,75,290,328,305,60,75,99,376,433,401,147,177,213,435,401,433,215,213,177,250,290,309,20,79,60,392,309,290,166,60,79,411,416,376,187,147,192,433,376,416,213,192,147,341,463,453,112,233,243,464,453,463,244,243,233,453,464,357,233,128,244,465,357,464,245,244,128,412,343,465,188,245,114,357,465,343,128,114,245,437,343,399,217,174,114,412,399,343,188,114,174,363,440,360,134,131,220,344,360,440,115,220,131,456,420,399,236,174,198,437,399,420,217,198,174,456,363,420,236,198,134,360,420,363,131,134,198,361,401,288,132,58,177,435,288,401,215,177,58,353,265,383,124,156,35,372,383,265,143,35,156,255,249,339,25,110,7,390,339,249,163,7,110,261,255,448,31,228,25,339,448,255,110,25,228,14,317,13,14,13,87,312,13,317,82,87,13,317,402,312,87,82,178,311,312,402,81,178,82,402,318,311,178,81,88,310,311,318,80,88,81,318,324,310,88,80,95,415,310,324,191,95,80};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2694));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____61D350723D2B69332719263ED5F04904F7BAA66B814B21C76C901B621B60FD45_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___FACES_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___FACES_2), (void*)L_9);
		// public static float[,] LANDMARK_BASIS = new float[,] {{4,0.070909939706326f},{6,0.032100144773722f},{10,0.008446550928056f},{33,0.058724168688059f},{54,0.007667080033571f},{67,0.009078059345484f},{117,0.009791937656701f},{119,0.014565368182957f},{121,0.018591361120343f},{127,0.005197994410992f},{129,0.120625205338001f},{132,0.005560018587857f},{133,0.05328618362546f},{136,0.066890455782413f},{143,0.014816547743976f},{147,0.014262833632529f},{198,0.025462191551924f},{205,0.047252278774977f},{263,0.058724168688059f},{284,0.007667080033571f},{297,0.009078059345484f},{346,0.009791937656701f},{348,0.014565368182957f},{350,0.018591361120343f},{356,0.005197994410992f},{358,0.120625205338001f},{361,0.005560018587857f},{362,0.05328618362546f},{365,0.066890455782413f},{372,0.014816547743976f},{376,0.014262833632529f},{420,0.025462191551924f},{425,0.047252278774977f}};
		il2cpp_array_size_t L_12[] = { (il2cpp_array_size_t)((int32_t)33), (il2cpp_array_size_t)2 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_11 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_12);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_13 = L_11;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____A2854FA141755EE18667BF5BBC20A1943FB09DC712A5F351D93F167D47361F6B_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___LANDMARK_BASIS_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_StaticFields*)il2cpp_codegen_static_fields_for(FaceMeshGeometry_tF36B2552A556112CF0D6BA17C7FB8CAB44928ECE_il2cpp_TypeInfo_var))->___LANDMARK_BASIS_3), (void*)L_13);
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
// System.Void WebARFoundation.FaceTracker::UpdatePose(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceTracker_UpdatePose_mDCF4748C7C955B286F3AD04AECBAE3F17FAA8F10 (FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = translation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_translation;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_rotation;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_scale;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceTracker_Start_m7267039880BDC2DC8B815F4EDE24C9FEB1469609 (FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceTracker_Update_m7B42C7B704A2C1935BF64AB76D4B1E188EA9B433 (FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.FaceTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceTracker__ctor_m85DE102BD0A3FAE429794F0D6844E94AA6D5A861 (FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebARFoundation.ImageTracker::UpdatePose(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracker_UpdatePose_m34F727C9B9079883B5C14D1175379F7E5D15DCC9 (ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = translation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_translation;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_rotation;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___2_scale;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.ImageTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracker_Start_m7BA0354085724CDD71A3F8EB8751FECEF10AAFCC (ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.ImageTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracker_Update_mAC7495F35D69B6AC76402DCB182075123E3CE47C (ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.ImageTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracker__ctor_m1D597DFDC2C7A8C5CD90A0828C7CB7EB923494DB (ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetFoundEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetFoundEvent_mBB8465D156E92511EB87441DC81EDCBFC9EE6379 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetFoundEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetFoundEvent_4);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::remove_onTargetFoundEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_remove_onTargetFoundEvent_m238DE281EE47ADBA21C402AB2BDED8BCE6F28B3A (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetFoundEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetFoundEvent_4);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetLostEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetLostEvent_mD1C71F22450A5C4629365F43F3019BCF4F6C3658 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetLostEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetLostEvent_5);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::remove_onTargetLostEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_remove_onTargetLostEvent_mCDC359CF77067B3E6C889769F255B04747CA5444 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetLostEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetLostEvent_5);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::add_onTargetUpdateEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_add_onTargetUpdateEvent_mC695731261288F4FF1F429127AA801731D283DAE (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetUpdateEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetUpdateEvent_6);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::remove_onTargetUpdateEvent(WebARFoundation.MindARFaceTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_remove_onTargetUpdateEvent_m74289C2E31F29ADD24E84AED86775E5B3B52DBB9 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_0 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_1 = NULL;
	OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* V_2 = NULL;
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_0 = __this->___onTargetUpdateEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_2 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var));
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7** L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7**)(&__this->___onTargetUpdateEvent_6);
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_6 = V_2;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = V_1;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_9 = V_0;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_9) == ((RuntimeObject*)(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_Awake_m595F18F8A56D0C36658B116D1AF965727FE31EB1 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m7472E4C0672F8A7599AD8125E54CAD2EAA9F3160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m5108BBDF3F3C5B5719FCF9365C58E4F6AEC0CF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFaceTrackingManager_OnARReady_m9CE79F5B5792A8A12E519DA317BB1F75A21DD9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFaceTrackingManager_OnARUpdate_mD514CD0A01FC547F2452BB6FBC8C60E9F794C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFaceTrackingManager_OnCameraConfigChange_m605F512B5CE0563207403B25A11817C4C5FA49B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__16_0_m28578A6F594CCAD3188E3AF5FAFBE0D6CE65DD5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8496D96C13239FEA48494CBC990E77D697D9050A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* G_B4_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B4_1 = NULL;
	MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* G_B4_2 = NULL;
	Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* G_B3_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B3_1 = NULL;
	MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* G_B3_2 = NULL;
	{
		// arCamera = GetComponentInChildren<ARCamera>();
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_0;
		L_0 = Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41(__this, Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41_RuntimeMethod_var);
		__this->___arCamera_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCamera_10), (void*)L_0);
		// if (arCamera == null) {
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_1 = __this->___arCamera_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("ARCamera Missing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8496D96C13239FEA48494CBC990E77D697D9050A, NULL);
		// return;
		return;
	}

IL_0025:
	{
		// faceTrackers = SceneManager.GetActiveScene()
		//      .GetRootGameObjects()
		//      .SelectMany(gameObject => gameObject
		//          .GetComponentsInChildren<FaceTracker>())
		//      .ToList();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var);
		Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* L_5 = ((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = __this;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var);
		U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* L_7 = ((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* L_8 = (Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5*)il2cpp_codegen_object_new(Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5_il2cpp_TypeInfo_var);
		Func_2__ctor_m8E6FD5A26C4361814141DA9EF79DC337F409D130(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__16_0_m28578A6F594CCAD3188E3AF5FAFBE0D6CE65DD5D_RuntimeMethod_var), NULL);
		Func_2_t8C54345EB4D4E3C85E84AD4E8067542EE487A2D5* L_9 = L_8;
		((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0052:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m7472E4C0672F8A7599AD8125E54CAD2EAA9F3160((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m7472E4C0672F8A7599AD8125E54CAD2EAA9F3160_RuntimeMethod_var);
		List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* L_11;
		L_11 = Enumerable_ToList_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m5108BBDF3F3C5B5719FCF9365C58E4F6AEC0CF30(L_10, Enumerable_ToList_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m5108BBDF3F3C5B5719FCF9365C58E4F6AEC0CF30_RuntimeMethod_var);
		G_B4_2->___faceTrackers_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___faceTrackers_11), (void*)L_11);
		// foreach(FaceTracker faceTracker in faceTrackers) {
		List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* L_12 = __this->___faceTrackers_11;
		Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E L_13;
		L_13 = List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200(L_12, List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A((&V_1), Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_006f_1:
			{
				// foreach(FaceTracker faceTracker in faceTrackers) {
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_14;
				L_14 = Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_inline((&V_1), Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_RuntimeMethod_var);
				// faceTracker.gameObject.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
				// isTargetVisible = false;
				__this->___isTargetVisible_12 = (bool)0;
			}

IL_0088_1:
			{
				// foreach(FaceTracker faceTracker in faceTrackers) {
				bool L_16;
				L_16 = Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD((&V_1), Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// MindARFacePlugin.onARReadyAction += OnARReady;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, __this, (intptr_t)((void*)MindARFaceTrackingManager_OnARReady_m9CE79F5B5792A8A12E519DA317BB1F75A21DD9F7_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		MindARFacePlugin_add_onARReadyAction_m4F8C19F108FF4B529B5786C9F53C5366BA22CA72(L_17, NULL);
		// MindARFacePlugin.onARUpdateAction += OnARUpdate;
		OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* L_18 = (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15*)il2cpp_codegen_object_new(OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15_il2cpp_TypeInfo_var);
		OnARUpdateEvent__ctor_m88854A9417A632EC8286E08AC603D24B9A8F4887(L_18, __this, (intptr_t)((void*)MindARFaceTrackingManager_OnARUpdate_mD514CD0A01FC547F2452BB6FBC8C60E9F794C56D_RuntimeMethod_var), NULL);
		MindARFacePlugin_add_onARUpdateAction_m14D0B254E4AA70FFC00E5F861DFCBF0AC3434AEA(L_18, NULL);
		// MindARFacePlugin.onCameraConfigChangeAction += OnCameraConfigChange;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_19, __this, (intptr_t)((void*)MindARFaceTrackingManager_OnCameraConfigChange_m605F512B5CE0563207403B25A11817C4C5FA49B6_RuntimeMethod_var), NULL);
		MindARFacePlugin_add_onCameraConfigChangeAction_m5F058CB84F3C7A3BED613971DF9B772FA453AD0A(L_19, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_Start_m5DC6207C4F77B96A27069A36003385E40D9F075B (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	{
		// if (autoStart) {
		bool L_0 = __this->___autoStart_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StartAR();
		MindARFaceTrackingManager_StartAR_m645C903F9EF2A4157746923C9D2AC47297564007(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_OnDestroy_mBF7186ECBC32A07E511AD9395FF6D9A79E1F33DF (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	{
		// StopAR();
		MindARFaceTrackingManager_StopAR_m3BEC686BF9FA09B7EF927514E1CA4B43BE2CD44F(__this, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_StartAR_m645C903F9EF2A4157746923C9D2AC47297564007 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MindARFacePlugin.SetIsFacingUser(facingUser);
		bool L_0 = __this->___facingUser_8;
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		MindARFacePlugin_SetIsFacingUser_mA9B647D3EC05268275550BBBF4B8C3E5ED16F33D(L_0, NULL);
		// MindARFacePlugin.SetFilterMinCF(0.001f);
		MindARFacePlugin_SetFilterMinCF_m90C878D847A955AC68492A3818187EE5889FEF5D((0.00100000005f), NULL);
		// float filterBeta = 1000 / Mathf.Pow(10, stability); // [100, 10, 1, 0.1, 0.01, 0.001]
		int32_t L_1 = __this->___stability_9;
		float L_2;
		L_2 = powf((10.0f), ((float)L_1));
		// MindARFacePlugin.SetFilterBeta(filterBeta);
		MindARFacePlugin_SetFilterBeta_m62F42EF3322779E53212CE4E44168C9476C5CE15(((float)((1000.0f)/L_2)), NULL);
		// MindARFacePlugin.StartAR();
		MindARFacePlugin_StartAR_m58F72B8EED665BC47C8F87DE15D35D0B76D9FEEA(NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_StopAR_m3BEC686BF9FA09B7EF927514E1CA4B43BE2CD44F (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MindARFacePlugin.IsRunning()) {
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MindARFacePlugin_IsRunning_m9F94477ED5493493654685E99207F7AEE47C965C(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// MindARFacePlugin.StopAR();
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		MindARFacePlugin_StopAR_m365FC02B9C3B8322E83299C654F4D6EDA5231D1E(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_OnARReady_m9CE79F5B5792A8A12E519DA317BB1F75A21DD9F7 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_OnCameraConfigChange_m605F512B5CE0563207403B25A11817C4C5FA49B6 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	{
		// int videoWidth = MindARFacePlugin.GetVideoWidth();
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = MindARFacePlugin_GetVideoWidth_m77E7A139F9562F4CAECA9EBAE854CDA027D466D9(NULL);
		V_0 = L_0;
		// int videoHeight = MindARFacePlugin.GetVideoHeight();
		int32_t L_1;
		L_1 = MindARFacePlugin_GetVideoHeight_mA65FFA893279EDF5D1B4E1353ED90DBA016A0DD2(NULL);
		V_1 = L_1;
		// float[] camParams = MindARFacePlugin.GetCameraParams(); // [fov, aspect, near, far]
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = MindARFacePlugin_GetCameraParams_mCD0F1E41F3504E7578B7FBF91128C0CC5FFF7FA0(NULL);
		V_2 = L_2;
		// arCamera.UpdateCameraConfig(videoWidth, videoHeight, camParams[0], camParams[2], camParams[3], facingUser);
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_3 = __this->___arCamera_10;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_2;
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_2;
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_2;
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = __this->___facingUser_8;
		ARCamera_UpdateCameraConfig_m12384980C46CB594DD7145FDFF59C309F331E217(L_3, L_4, L_5, L_8, L_11, L_14, L_15, NULL);
		// MindARFacePlugin.BindVideoTexture(arCamera.GetWebCamTexture());
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_16 = __this->___arCamera_10;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = ARCamera_GetWebCamTexture_mE9FB07D84CDD60E23665168FA7E36CD2B3CBAFCB_inline(L_16, NULL);
		MindARFacePlugin_BindVideoTexture_m86D20D7E094269A11772294A26B30621CB70D8D9(L_17, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::OnARUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_OnARUpdate_mD514CD0A01FC547F2452BB6FBC8C60E9F794C56D (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, int32_t ___0_isFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisFaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918_m108C83EC40E2DF79D8EAE6DF417B50E94163A58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E V_2;
	memset((&V_2), 0, sizeof(V_2));
	FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* V_3 = NULL;
	FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* V_4 = NULL;
	{
		// float[] facemeshMatrix = MindARFacePlugin.GetFaceMeshMatrix();
		il2cpp_codegen_runtime_class_init_inline(MindARFacePlugin_tAE21E3CC0976AFAF3C1B40F80A1E604258D2FC28_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0;
		L_0 = MindARFacePlugin_GetFaceMeshMatrix_m2194EA38F00BE1F9F0688FB1CC95C289A619FB86(NULL);
		V_0 = L_0;
		// Vector3[] faceMeshVertices = MindARFacePlugin.GetFaceMeshVertices();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = MindARFacePlugin_GetFaceMeshVertices_m6CF057657FA897238AA4BF3F811728E77ADBC951(NULL);
		V_1 = L_1;
		// foreach(FaceTracker faceTracker in faceTrackers) {
		List_1_tCCFE3857C7BEC642354121CA8741EA8D50A9BC80* L_2 = __this->___faceTrackers_11;
		Enumerator_t1014EC42A786ECC6EB55F3D09A2CBBBEE79A383E L_3;
		L_3 = List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200(L_2, List_1_GetEnumerator_mA54AA161A2E80E9F418A1918752312D3D02F8200_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A((&V_2), Enumerator_Dispose_mA5F7C025FDAF156BFFF4A1ED273348D157158C6A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0061_1;
			}

IL_001a_1:
			{
				// foreach(FaceTracker faceTracker in faceTrackers) {
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_4;
				L_4 = Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_inline((&V_2), Enumerator_get_Current_m06883FD190AC20D8757A0D31CBA58F02948BAE89_RuntimeMethod_var);
				V_3 = L_4;
				// if (isFound == 1) {
				int32_t L_5 = ___0_isFound;
				if ((!(((uint32_t)L_5) == ((uint32_t)1))))
				{
					goto IL_0055_1;
				}
			}
			{
				// faceTracker.gameObject.SetActive(true);
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_6 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
				// UpdateTargetPose(faceTracker, facemeshMatrix);
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_8 = V_3;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
				MindARFaceTrackingManager_UpdateTargetPose_m2850709D62E7CF130D37AE02769BC4E025EF9252(__this, L_8, L_9, NULL);
				// FaceMesh faceMesh = faceTracker.GetComponentInChildren<FaceMesh>();
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_10 = V_3;
				FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* L_11;
				L_11 = Component_GetComponentInChildren_TisFaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918_m108C83EC40E2DF79D8EAE6DF417B50E94163A58D(L_10, Component_GetComponentInChildren_TisFaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918_m108C83EC40E2DF79D8EAE6DF417B50E94163A58D_RuntimeMethod_var);
				V_4 = L_11;
				// if (faceMesh) {
				FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* L_12 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
				if (!L_13)
				{
					goto IL_0061_1;
				}
			}
			{
				// faceMesh.UpdateGeometry(faceMeshVertices);
				FaceMesh_tCD3427E7ABB571BE74614B6422CDFB0C5FCEE918* L_14 = V_4;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = V_1;
				FaceMesh_UpdateGeometry_m06E3F72DAE082FEAA4679AA8E3B2035B9BC6D48C(L_14, L_15, NULL);
				goto IL_0061_1;
			}

IL_0055_1:
			{
				// faceTracker.gameObject.SetActive(false);
				FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_16 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
			}

IL_0061_1:
			{
				// foreach(FaceTracker faceTracker in faceTrackers) {
				bool L_18;
				L_18 = Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD((&V_2), Enumerator_MoveNext_m086FFBD3345C0510760D311B68A845D5EBC553DD_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// if (isFound == 1) {
		int32_t L_19 = ___0_isFound;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// if (!isTargetVisible) {
		bool L_20 = __this->___isTargetVisible_12;
		if (L_20)
		{
			goto IL_00b6;
		}
	}
	{
		// if (onTargetFoundEvent != null) onTargetFoundEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_21 = __this->___onTargetFoundEvent_4;
		if (!L_21)
		{
			goto IL_00b6;
		}
	}
	{
		// if (onTargetFoundEvent != null) onTargetFoundEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_22 = __this->___onTargetFoundEvent_4;
		OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_inline(L_22, NULL);
		goto IL_00b6;
	}

IL_009b:
	{
		// if (isTargetVisible) {
		bool L_23 = __this->___isTargetVisible_12;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		// if (onTargetLostEvent != null) onTargetLostEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_24 = __this->___onTargetLostEvent_5;
		if (!L_24)
		{
			goto IL_00b6;
		}
	}
	{
		// if (onTargetLostEvent != null) onTargetLostEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_25 = __this->___onTargetLostEvent_5;
		OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_inline(L_25, NULL);
	}

IL_00b6:
	{
		// if (onTargetUpdateEvent != null) onTargetUpdateEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_26 = __this->___onTargetUpdateEvent_6;
		if (!L_26)
		{
			goto IL_00c9;
		}
	}
	{
		// if (onTargetUpdateEvent != null) onTargetUpdateEvent.Invoke();
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_27 = __this->___onTargetUpdateEvent_6;
		OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_inline(L_27, NULL);
	}

IL_00c9:
	{
		// isTargetVisible = isFound == 1;
		int32_t L_28 = ___0_isFound;
		__this->___isTargetVisible_12 = (bool)((((int32_t)L_28) == ((int32_t)1))? 1 : 0);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::UpdateTargetPose(WebARFoundation.FaceTracker,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager_UpdateTargetPose_m2850709D62E7CF130D37AE02769BC4E025EF9252 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* ___0_faceTracker, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_preprocessedMatrixArray, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float windowDeviceRatio = 1;
		V_0 = (1.0f);
		// Matrix4x4 m = new Matrix4x4();
		il2cpp_codegen_initobj((&V_1), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// Utils.AssignMatrix4x4FromArray(ref m, preprocessedMatrixArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___1_preprocessedMatrixArray;
		Utils_AssignMatrix4x4FromArray_m9640CAD478F303E63CBF424C4F4F6581FD024CE1((&V_1), L_0, NULL);
		// m.m20 = -m.m20;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_1;
		float L_2 = L_1.___m20_2;
		(&V_1)->___m20_2 = ((-L_2));
		// m.m21 = -m.m21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = V_1;
		float L_4 = L_3.___m21_6;
		(&V_1)->___m21_6 = ((-L_4));
		// m.m22 = -m.m22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = V_1;
		float L_6 = L_5.___m22_10;
		(&V_1)->___m22_10 = ((-L_6));
		// m.m23 = -m.m23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = V_1;
		float L_8 = L_7.___m23_14;
		(&V_1)->___m23_14 = ((-L_8));
		// Vector3 translation = Utils.GetTranslationFromMatrix(ref m);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Utils_GetTranslationFromMatrix_m49E2F75BD637154E14E0ED87B50A3364A6686666((&V_1), NULL);
		V_2 = L_9;
		// Quaternion rotation = Utils.GetRotationFromMatrix(ref m);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Utils_GetRotationFromMatrix_m763F2C965DB3EEAF3E4BBEDCEE85B3A69652E3F8((&V_1), NULL);
		V_3 = L_10;
		// Vector3 scale = Utils.GetScaleFromMatrix(ref m);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Utils_GetScaleFromMatrix_m6BCE783F344AC8F9C7FB48848DF8F93B1190049C((&V_1), NULL);
		V_4 = L_11;
		// Vector3 newScale = new Vector3(scale.x / windowDeviceRatio, scale.y / windowDeviceRatio, scale.z  / windowDeviceRatio);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_4;
		float L_13 = L_12.___x_2;
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
		float L_16 = L_15.___y_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		float L_19 = L_18.___z_4;
		float L_20 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((float)(L_13/L_14)), ((float)(L_16/L_17)), ((float)(L_19/L_20)), NULL);
		// faceTracker.UpdatePose(translation, rotation, newScale);
		FaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A* L_21 = ___0_faceTracker;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_5;
		FaceTracker_UpdatePose_mDCF4748C7C955B286F3AD04AECBAE3F17FAA8F10(L_21, L_22, L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARFaceTrackingManager__ctor_mC3989869A083F0B2E4B3A75CB26D3E960ED92F37 (MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool autoStart = true;
		__this->___autoStart_7 = (bool)1;
		// [SerializeField] public bool facingUser = true;
		__this->___facingUser_8 = (bool)1;
		// [Tooltip("jitter-delay tradeoff. higher stability, higher delay")] [SerializeField] [Range(1,6)] public int stability = 2;
		__this->___stability_9 = 2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_Multicast(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* currentDelegate = reinterpret_cast<OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_OpenInst(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_OpenStatic(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_OpenStaticInvoker(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_ClosedStaticInvoker(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7 (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent__ctor_m8A1AA2C42BEDC31F0C63433FBC22B853FE2BDA47 (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_Multicast;
}
// System.Void WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTargetEvent_BeginInvoke_m7E46053E120D77393B52A4272299DDAE96CC5F8C (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void WebARFoundation.MindARFaceTrackingManager/OnTargetEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent_EndInvoke_m3A73D2989075CD7BD1413BA9C51C12E620860665 (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebARFoundation.MindARFaceTrackingManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4221B8968306086711537F21CC772811D31B20B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* L_0 = (U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A*)il2cpp_codegen_object_new(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2A79DB180487FFB68733EB1E685DC21FE9F288A2(L_0, NULL);
		((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WebARFoundation.MindARFaceTrackingManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2A79DB180487FFB68733EB1E685DC21FE9F288A2 (U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<WebARFoundation.FaceTracker> WebARFoundation.MindARFaceTrackingManager/<>c::<Awake>b__16_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__16_0_m28578A6F594CCAD3188E3AF5FAFBE0D6CE65DD5D (U3CU3Ec_t4BEF44D246CE0E5716609FE46BEAC53B2DF4D16A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m93447F78A04A2A707E6E1AFF7650B42AA7D521D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .SelectMany(gameObject => gameObject
		//     .GetComponentsInChildren<FaceTracker>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		FaceTrackerU5BU5D_tEDBCE7BC5F70569F0024EEF12A1AFE1E530AF0C3* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m93447F78A04A2A707E6E1AFF7650B42AA7D521D7(L_0, GameObject_GetComponentsInChildren_TisFaceTracker_t269263181B32670FF51D4B5101BE5C7F081C1F3A_m93447F78A04A2A707E6E1AFF7650B42AA7D521D7_RuntimeMethod_var);
		return (RuntimeObject*)L_1;
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
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetFoundEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetFoundEvent_m78D59AC8546A57C3007D2B911D72FD6586AC5841 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetFoundEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetFoundEvent_4);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::remove_onTargetFoundEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_remove_onTargetFoundEvent_mBF6B9CCE976705CF0119EC8B6E64242B75BEEBCC (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetFoundEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetFoundEvent_4);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetLostEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetLostEvent_m098DD9314234FD63F9C0A202F3F69044919FB2A3 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetLostEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetLostEvent_5);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::remove_onTargetLostEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_remove_onTargetLostEvent_m9BA54ECFF559859EEB63372A22631E4653C8B3E9 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetLostEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetLostEvent_5);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::add_onTargetUpdateEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_add_onTargetUpdateEvent_mF6308F569494E989C7F3F91DC3828AA7FB6A0B32 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetUpdateEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetUpdateEvent_6);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::remove_onTargetUpdateEvent(WebARFoundation.MindARImageTrackingManager/OnTargetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_remove_onTargetUpdateEvent_m9F76571046405E5A21AEE7FE2B25FC9D1C497A8D (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_0 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_1 = NULL;
	OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* V_2 = NULL;
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_0 = __this->___onTargetUpdateEvent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_1 = V_0;
		V_1 = L_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_2 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)CastclassSealed((RuntimeObject*)L_4, OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var));
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6** L_5 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6**)(&__this->___onTargetUpdateEvent_6);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = V_2;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_7 = V_1;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_9 = V_0;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_9) == ((RuntimeObject*)(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_Awake_m99C6761C6CD3DCC2BE9FA4B17A211DB2B215AD2C (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m55B5EA4206BE1B0397F616B477FFD3DCE9464773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m61B5EA34BD7E42D1A3E1465684BF06CF17FE10B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImageTrackingManager_OnARReady_mE043E7C30B1D43C3DE7B6AC2DBC3D31B5E5ECCB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImageTrackingManager_OnARUpdate_m1BDBFA5488BE69B9004EF6E8ABB2BD2DDE50ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImageTrackingManager_OnCameraConfigChange_mC8638210718C457357599E97DDF505F34105978A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__19_0_m755301516816D6AD4CD9EB67972B5AF1CDAB1A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8496D96C13239FEA48494CBC990E77D697D9050A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3338128FEE9267ECC8159D671A31B847633064);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* V_3 = NULL;
	Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* G_B4_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B4_1 = NULL;
	MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* G_B4_2 = NULL;
	Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* G_B3_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B3_1 = NULL;
	MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* G_B3_2 = NULL;
	{
		// Debug.Log("mind file url: " + mindFileURL);
		String_t* L_0 = __this->___mindFileURL_7;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBD3338128FEE9267ECC8159D671A31B847633064, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// arCamera = GetComponentInChildren<ARCamera>();
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_2;
		L_2 = Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41(__this, Component_GetComponentInChildren_TisARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B_mDCEFE4ED4E118A59BE90171DDB76130F26E85B41_RuntimeMethod_var);
		__this->___arCamera_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCamera_12), (void*)L_2);
		// if (arCamera == null) {
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_3 = __this->___arCamera_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.LogError("ARCamera Missing.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8496D96C13239FEA48494CBC990E77D697D9050A, NULL);
		// return;
		return;
	}

IL_003a:
	{
		// imageTrackers = SceneManager.GetActiveScene()
		//      .GetRootGameObjects()
		//      .SelectMany(gameObject => gameObject
		//          .GetComponentsInChildren<ImageTracker>())
		//      .ToList();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6;
		L_6 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var);
		Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* L_7 = ((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1;
		Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		G_B3_2 = __this;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			G_B4_2 = __this;
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var);
		U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* L_9 = ((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* L_10 = (Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E*)il2cpp_codegen_object_new(Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB92B673F84B4C13E64D93FB39750783AA0064DDB(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__19_0_m755301516816D6AD4CD9EB67972B5AF1CDAB1A1C_RuntimeMethod_var), NULL);
		Func_2_tDA9936D322E661EBE487B1A9C086C4A598E15B3E* L_11 = L_10;
		((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0067:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m55B5EA4206BE1B0397F616B477FFD3DCE9464773((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m55B5EA4206BE1B0397F616B477FFD3DCE9464773_RuntimeMethod_var);
		List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* L_13;
		L_13 = Enumerable_ToList_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m61B5EA34BD7E42D1A3E1465684BF06CF17FE10B0(L_12, Enumerable_ToList_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m61B5EA34BD7E42D1A3E1465684BF06CF17FE10B0_RuntimeMethod_var);
		G_B4_2->___imageTrackers_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___imageTrackers_14), (void*)L_13);
		// int maxTargetIndex = 0;
		V_0 = 0;
		// foreach(ImageTracker imageTracker in imageTrackers) {
		List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* L_14 = __this->___imageTrackers_14;
		Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 L_15;
		L_15 = List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9(L_14, List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9_RuntimeMethod_var);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714((&V_2), Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_0086_1:
			{
				// foreach(ImageTracker imageTracker in imageTrackers) {
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_16;
				L_16 = Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_inline((&V_2), Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_RuntimeMethod_var);
				V_3 = L_16;
				// maxTargetIndex = Math.Max(maxTargetIndex, imageTracker.targetIndex);
				int32_t L_17 = V_0;
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_18 = V_3;
				int32_t L_19 = L_18->___targetIndex_4;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_20;
				L_20 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_17, L_19, NULL);
				V_0 = L_20;
				// imageTracker.gameObject.SetActive(false);
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_21 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
				L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
			}

IL_00a7_1:
			{
				// foreach(ImageTracker imageTracker in imageTrackers) {
				bool L_23;
				L_23 = Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2((&V_2), Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0086_1;
				}
			}
			{
				goto IL_00c0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c0:
	{
		// isTargetVisibles = new bool[maxTargetIndex+1];
		int32_t L_24 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_24, 1)));
		__this->___isTargetVisibles_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isTargetVisibles_15), (void*)L_25);
		// MindARImagePlugin.onARReadyAction += OnARReady;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_26, __this, (intptr_t)((void*)MindARImageTrackingManager_OnARReady_mE043E7C30B1D43C3DE7B6AC2DBC3D31B5E5ECCB2_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		MindARImagePlugin_add_onARReadyAction_m9B7FD1F1D8E42E836D4E4D894A18440B4B5C1D38(L_26, NULL);
		// MindARImagePlugin.onARUpdateAction += OnARUpdate;
		OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* L_27 = (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4*)il2cpp_codegen_object_new(OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4_il2cpp_TypeInfo_var);
		OnARUpdateEvent__ctor_mC6C3D6B09C07DFB582961685175381909D847B43(L_27, __this, (intptr_t)((void*)MindARImageTrackingManager_OnARUpdate_m1BDBFA5488BE69B9004EF6E8ABB2BD2DDE50ACC3_RuntimeMethod_var), NULL);
		MindARImagePlugin_add_onARUpdateAction_mAA37593E24250BAAA42783B63A8EDBC28A9178B3(L_27, NULL);
		// MindARImagePlugin.onCameraConfigChangeAction += OnCameraConfigChange;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_28, __this, (intptr_t)((void*)MindARImageTrackingManager_OnCameraConfigChange_mC8638210718C457357599E97DDF505F34105978A_RuntimeMethod_var), NULL);
		MindARImagePlugin_add_onCameraConfigChangeAction_m786B5571B6C0FC6C569450D9EFB490534BE05ECC(L_28, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_OnDestroy_m37E1D0B555E8F254B01A9D05C1BBC1C81F20B8AC (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	{
		// StopAR();
		MindARImageTrackingManager_StopAR_mF47A42B3BA8C77106F51043AAB02324F87C8F4DE(__this, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_Start_m0DABBABFC1775E436CDB3EBFF351553CF88D730C (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	{
		// if (autoStart) {
		bool L_0 = __this->___autoStart_8;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StartAR();
		MindARImageTrackingManager_StartAR_mDD22F450F7E6096917CD41246103A833BBBD4062(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_StopAR_mF47A42B3BA8C77106F51043AAB02324F87C8F4DE (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MindARImagePlugin.IsRunning()) {
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MindARImagePlugin_IsRunning_mB6EE737459D93CFD2D59412ADFE3F12258B42993(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// MindARImagePlugin.StopAR();
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		MindARImagePlugin_StopAR_mEEAA66B81F74E301BEFF8DC3896070328925E43D(NULL);
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_StartAR_mDD22F450F7E6096917CD41246103A833BBBD4062 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MindARImagePlugin.SetIsFacingUser(facingUser);
		bool L_0 = __this->___facingUser_9;
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		MindARImagePlugin_SetIsFacingUser_m97C8B626F5B0A1A3EEDA9754BBDF3A28541F80B5(L_0, NULL);
		// MindARImagePlugin.SetMindFilePath(mindFileURL);
		String_t* L_1 = __this->___mindFileURL_7;
		MindARImagePlugin_SetMindFilePath_m374DDC2203DD1008B54A3A366C5C1ED16D6DD594(L_1, NULL);
		// MindARImagePlugin.SetMaxTrack(maxTrack);
		int32_t L_2 = __this->___maxTrack_10;
		MindARImagePlugin_SetMaxTrack_m04D37275C6409D89238D2CBB4D0A5A401A7003A5(L_2, NULL);
		// MindARImagePlugin.SetFilterMinCF(0.001f);
		MindARImagePlugin_SetFilterMinCF_mD244BA6B9DA76526AB95D342AB36F2DCB8C94DAF((0.00100000005f), NULL);
		// float filterBeta = 1000 / Mathf.Pow(10, stability); // [100, 10, 1, 0.1, 0.01, 0.001]
		int32_t L_3 = __this->___stability_11;
		float L_4;
		L_4 = powf((10.0f), ((float)L_3));
		// MindARImagePlugin.SetFilterBeta(filterBeta);
		MindARImagePlugin_SetFilterBeta_mCE13B8717A83A85356C2356AEEA740ABCCDD614C(((float)((1000.0f)/L_4)), NULL);
		// MindARImagePlugin.StartAR();
		MindARImagePlugin_StartAR_m82B77A1EB4EC244F7EE7EB2E72275EE1078FD51B(NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::OnARReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_OnARReady_mE043E7C30B1D43C3DE7B6AC2DBC3D31B5E5ECCB2 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numTargets = MindARImagePlugin.GetNumTargets();
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = MindARImagePlugin_GetNumTargets_m1E6FA18E954E96020903AA097ACCBFC97C38BB70(NULL);
		V_0 = L_0;
		// markerDimensions = new float[numTargets,2];
		int32_t L_1 = V_0;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)2 };
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)GenArrayNew(SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_il2cpp_TypeInfo_var, L_3);
		__this->___markerDimensions_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerDimensions_13), (void*)L_2);
		// for (int i = 0; i < numTargets; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0017:
	{
		// markerDimensions[i, 0] = MindARImagePlugin.GetTargetWidth(i);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_4 = __this->___markerDimensions_13;
		int32_t L_5 = V_1;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = MindARImagePlugin_GetTargetWidth_m6EA88498685A480186CF0380376C4499FC3CCC09(L_6, NULL);
		(L_4)->SetAtUnchecked(L_5, 0, ((float)L_7));
		// markerDimensions[i, 1] = MindARImagePlugin.GetTargetHeight(i);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_8 = __this->___markerDimensions_13;
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = MindARImagePlugin_GetTargetHeight_mA7EE17065B674EBC401CDB2BB5DC6D7771331B10(L_10, NULL);
		(L_8)->SetAtUnchecked(L_9, 1, ((float)L_11));
		// for (int i = 0; i < numTargets; i++) {
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < numTargets; i++) {
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::OnCameraConfigChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_OnCameraConfigChange_mC8638210718C457357599E97DDF505F34105978A (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	{
		// int videoWidth = MindARImagePlugin.GetVideoWidth();
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = MindARImagePlugin_GetVideoWidth_m728532BFBB102C1E1CD0C6153AFEC966B426A57F(NULL);
		V_0 = L_0;
		// int videoHeight = MindARImagePlugin.GetVideoHeight();
		int32_t L_1;
		L_1 = MindARImagePlugin_GetVideoHeight_mBE4C917AE1A8B89D6751D02820700E4095A82CF4(NULL);
		V_1 = L_1;
		// float[] camParams = MindARImagePlugin.GetCameraParams(); // [fov, aspect, near, far]
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = MindARImagePlugin_GetCameraParams_m9DE8E66D29DE2D3CC29EA0750077535BC423E28A(NULL);
		V_2 = L_2;
		// arCamera.UpdateCameraConfig(videoWidth, videoHeight, camParams[0], camParams[2], camParams[3], false); // image tracking doesn't flip the camera horizontally
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_3 = __this->___arCamera_12;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_2;
		int32_t L_7 = 0;
		float L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_2;
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_2;
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ARCamera_UpdateCameraConfig_m12384980C46CB594DD7145FDFF59C309F331E217(L_3, L_4, L_5, L_8, L_11, L_14, (bool)0, NULL);
		// MindARImagePlugin.BindVideoTexture(arCamera.GetWebCamTexture());
		ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* L_15 = __this->___arCamera_12;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16;
		L_16 = ARCamera_GetWebCamTexture_mE9FB07D84CDD60E23665168FA7E36CD2B3CBAFCB_inline(L_15, NULL);
		MindARImagePlugin_BindVideoTexture_m0170080899ECC6034F849B7F4CBC5C18C3DCF3E1(L_16, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::OnARUpdate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_OnARUpdate_m1BDBFA5488BE69B9004EF6E8ABB2BD2DDE50ACC3 (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* V_2 = NULL;
	{
		// float[] worldMatrix = MindARImagePlugin.GetTargetWorldMatrix(targetIndex);
		int32_t L_0 = ___0_targetIndex;
		il2cpp_codegen_runtime_class_init_inline(MindARImagePlugin_t69A973A8091EA0C38B72EBC1B936D075F3457997_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = MindARImagePlugin_GetTargetWorldMatrix_m6F0D2060592A9B361F016237DD7301DD19158884(L_0, NULL);
		V_0 = L_1;
		// foreach(ImageTracker imageTracker in imageTrackers) {
		List_1_tBDC1DDCBB97713243E7B7ED4B2DFE09406C5F629* L_2 = __this->___imageTrackers_14;
		Enumerator_t5C5B0ECE11F9F9347E2D3A85C629102CDB875282 L_3;
		L_3 = List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9(L_2, List_1_GetEnumerator_m0C52B233C7539C99A82348A4BC7D39DA57BE4EC9_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714((&V_1), Enumerator_Dispose_m95BB22F97DA2446960D13C192CB811F147E1D714_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_0015_1:
			{
				// foreach(ImageTracker imageTracker in imageTrackers) {
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_4;
				L_4 = Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_inline((&V_1), Enumerator_get_Current_mBF892D9E9040BA938F91555B4EDE3B7AD46A8A86_RuntimeMethod_var);
				V_2 = L_4;
				// if (imageTracker.targetIndex == targetIndex) {
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_5 = V_2;
				int32_t L_6 = L_5->___targetIndex_4;
				int32_t L_7 = ___0_targetIndex;
				if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
				{
					goto IL_004d_1;
				}
			}
			{
				// if (isFound == 1) {
				int32_t L_8 = ___1_isFound;
				if ((!(((uint32_t)L_8) == ((uint32_t)1))))
				{
					goto IL_0041_1;
				}
			}
			{
				// imageTracker.gameObject.SetActive(true);
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_9 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
				// UpdateTargetPose(imageTracker, targetIndex, worldMatrix);
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_11 = V_2;
				int32_t L_12 = ___0_targetIndex;
				SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
				MindARImageTrackingManager_UpdateTargetPose_m5D48ED89EA52EDE02A285E9E410F796E250B76EC(__this, L_11, L_12, L_13, NULL);
				goto IL_004d_1;
			}

IL_0041_1:
			{
				// imageTracker.gameObject.SetActive(false);
				ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_14 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
			}

IL_004d_1:
			{
				// foreach(ImageTracker imageTracker in imageTrackers) {
				bool L_16;
				L_16 = Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2((&V_1), Enumerator_MoveNext_m832117A0EE07A04D889DFCB96C3DF3306F73A3A2_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// if (isFound == 1) {
		int32_t L_17 = ___1_isFound;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// if (!isTargetVisibles[targetIndex]) {
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = __this->___isTargetVisibles_15;
		int32_t L_19 = ___0_targetIndex;
		int32_t L_20 = L_19;
		uint8_t L_21 = (uint8_t)(L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_00a8;
		}
	}
	{
		// if (onTargetFoundEvent != null) onTargetFoundEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_22 = __this->___onTargetFoundEvent_4;
		if (!L_22)
		{
			goto IL_00a8;
		}
	}
	{
		// if (onTargetFoundEvent != null) onTargetFoundEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_23 = __this->___onTargetFoundEvent_4;
		int32_t L_24 = ___0_targetIndex;
		OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_inline(L_23, L_24, NULL);
		goto IL_00a8;
	}

IL_008a:
	{
		// if (isTargetVisibles[targetIndex]) {
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = __this->___isTargetVisibles_15;
		int32_t L_26 = ___0_targetIndex;
		int32_t L_27 = L_26;
		uint8_t L_28 = (uint8_t)(L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		if (!L_28)
		{
			goto IL_00a8;
		}
	}
	{
		// if (onTargetLostEvent != null) onTargetLostEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_29 = __this->___onTargetLostEvent_5;
		if (!L_29)
		{
			goto IL_00a8;
		}
	}
	{
		// if (onTargetLostEvent != null) onTargetLostEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_30 = __this->___onTargetLostEvent_5;
		int32_t L_31 = ___0_targetIndex;
		OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_inline(L_30, L_31, NULL);
	}

IL_00a8:
	{
		// if (onTargetUpdateEvent != null) onTargetUpdateEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_32 = __this->___onTargetUpdateEvent_6;
		if (!L_32)
		{
			goto IL_00bc;
		}
	}
	{
		// if (onTargetUpdateEvent != null) onTargetUpdateEvent.Invoke(targetIndex);
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_33 = __this->___onTargetUpdateEvent_6;
		int32_t L_34 = ___0_targetIndex;
		OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_inline(L_33, L_34, NULL);
	}

IL_00bc:
	{
		// isTargetVisibles[targetIndex] = isFound == 1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_35 = __this->___isTargetVisibles_15;
		int32_t L_36 = ___0_targetIndex;
		int32_t L_37 = ___1_isFound;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (bool)((((int32_t)L_37) == ((int32_t)1))? 1 : 0));
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::UpdateTargetPose(WebARFoundation.ImageTracker,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager_UpdateTargetPose_m5D48ED89EA52EDE02A285E9E410F796E250B76EC (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* ___0_imageTracker, int32_t ___1_targetIndex, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_preprocessedMatrixArray, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// float markerWidth = markerDimensions[targetIndex, 0];
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_0 = __this->___markerDimensions_13;
		int32_t L_1 = ___1_targetIndex;
		float L_2;
		L_2 = (L_0)->GetAtUnchecked(L_1, 0);
		V_0 = L_2;
		// float markerHeight = markerDimensions[targetIndex, 1];
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_3 = __this->___markerDimensions_13;
		int32_t L_4 = ___1_targetIndex;
		float L_5;
		L_5 = (L_3)->GetAtUnchecked(L_4, 1);
		V_1 = L_5;
		// float windowDeviceRatio = 1;
		V_2 = (1.0f);
		// Matrix4x4 m = new Matrix4x4();
		il2cpp_codegen_initobj((&V_3), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// Utils.AssignMatrix4x4FromArray(ref m, preprocessedMatrixArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___2_preprocessedMatrixArray;
		Utils_AssignMatrix4x4FromArray_m9640CAD478F303E63CBF424C4F4F6581FD024CE1((&V_3), L_6, NULL);
		// m.m03 = m.m00 * markerWidth/2 + m.m01 * markerHeight/2 + m.m03;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = V_3;
		float L_8 = L_7.___m00_0;
		float L_9 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = V_3;
		float L_11 = L_10.___m01_4;
		float L_12 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_3;
		float L_14 = L_13.___m03_12;
		(&V_3)->___m03_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_8, L_9))/(2.0f))), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/(2.0f))))), L_14));
		// m.m13 = m.m10 * markerWidth/2 + m.m11 * markerHeight/2 + m.m13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15 = V_3;
		float L_16 = L_15.___m10_1;
		float L_17 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = V_3;
		float L_19 = L_18.___m11_5;
		float L_20 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = V_3;
		float L_22 = L_21.___m13_13;
		(&V_3)->___m13_13 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_16, L_17))/(2.0f))), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/(2.0f))))), L_22));
		// m.m23 = m.m20 * markerWidth/2 + m.m21 * markerHeight/2 + m.m23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = V_3;
		float L_24 = L_23.___m20_2;
		float L_25 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = V_3;
		float L_27 = L_26.___m21_6;
		float L_28 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29 = V_3;
		float L_30 = L_29.___m23_14;
		(&V_3)->___m23_14 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_24, L_25))/(2.0f))), ((float)(((float)il2cpp_codegen_multiply(L_27, L_28))/(2.0f))))), L_30));
		// m.m20 = -m.m20;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = V_3;
		float L_32 = L_31.___m20_2;
		(&V_3)->___m20_2 = ((-L_32));
		// m.m21 = -m.m21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = V_3;
		float L_34 = L_33.___m21_6;
		(&V_3)->___m21_6 = ((-L_34));
		// m.m22 = -m.m22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_35 = V_3;
		float L_36 = L_35.___m22_10;
		(&V_3)->___m22_10 = ((-L_36));
		// m.m23 = -m.m23;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_37 = V_3;
		float L_38 = L_37.___m23_14;
		(&V_3)->___m23_14 = ((-L_38));
		// Vector3 translation = Utils.GetTranslationFromMatrix(ref m);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Utils_GetTranslationFromMatrix_m49E2F75BD637154E14E0ED87B50A3364A6686666((&V_3), NULL);
		V_4 = L_39;
		// Quaternion rotation = Utils.GetRotationFromMatrix(ref m);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Utils_GetRotationFromMatrix_m763F2C965DB3EEAF3E4BBEDCEE85B3A69652E3F8((&V_3), NULL);
		V_5 = L_40;
		// Vector3 scale = Utils.GetScaleFromMatrix(ref m);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Utils_GetScaleFromMatrix_m6BCE783F344AC8F9C7FB48848DF8F93B1190049C((&V_3), NULL);
		V_6 = L_41;
		// rotation = rotation * Quaternion.Euler(new Vector3(0, 180, 0));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_43, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_42, L_44, NULL);
		V_5 = L_45;
		// Vector3 newScale = new Vector3(scale.x * markerWidth / windowDeviceRatio, scale.y * markerWidth / windowDeviceRatio, scale.z * markerWidth / windowDeviceRatio);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_6;
		float L_47 = L_46.___x_2;
		float L_48 = V_0;
		float L_49 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_6;
		float L_51 = L_50.___y_3;
		float L_52 = V_0;
		float L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_6;
		float L_55 = L_54.___z_4;
		float L_56 = V_0;
		float L_57 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), ((float)(((float)il2cpp_codegen_multiply(L_47, L_48))/L_49)), ((float)(((float)il2cpp_codegen_multiply(L_51, L_52))/L_53)), ((float)(((float)il2cpp_codegen_multiply(L_55, L_56))/L_57)), NULL);
		// imageTracker.UpdatePose(translation, rotation, newScale);
		ImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB* L_58 = ___0_imageTracker;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_7;
		ImageTracker_UpdatePose_m34F727C9B9079883B5C14D1175379F7E5D15DCC9(L_58, L_59, L_60, L_61, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MindARImageTrackingManager__ctor_m7E09A2FC1943A3BF3E8DFBA77C93C617B7AD118B (MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool autoStart = true;
		__this->___autoStart_8 = (bool)1;
		// [SerializeField] public int maxTrack = 1;
		__this->___maxTrack_10 = 1;
		// [Tooltip("jitter-delay tradeoff. higher stability, higher delay")] [SerializeField] [Range(1,6)] public int stability = 4;
		__this->___stability_11 = 4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_Multicast(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* currentDelegate = reinterpret_cast<OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_targetIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_OpenInst(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_targetIndex, method);
}
void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_OpenStatic(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_targetIndex, method);
}
void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_OpenStaticInvoker(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_targetIndex);
}
void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_ClosedStaticInvoker(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_targetIndex);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6 (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_targetIndex);

}
// System.Void WebARFoundation.MindARImageTrackingManager/OnTargetEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent__ctor_m9BD5FA5DB9825ABC8E5D39974F8B14C52FA83AAC (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_Multicast;
}
// System.Void WebARFoundation.MindARImageTrackingManager/OnTargetEvent::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766 (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_targetIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebARFoundation.MindARImageTrackingManager/OnTargetEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTargetEvent_BeginInvoke_m9723903E1AE404DD80982E88E9A021F6D470D10C (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_targetIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void WebARFoundation.MindARImageTrackingManager/OnTargetEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetEvent_EndInvoke_mE55F036518D0509B5B97DC28DC58137B94DCD486 (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebARFoundation.MindARImageTrackingManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFFA1D0A8FAAA27B98C9D8CBA06342B86C8228C0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* L_0 = (U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62*)il2cpp_codegen_object_new(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC7AE1148A4643C0CDB909014302499E7635177C6(L_0, NULL);
		((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WebARFoundation.MindARImageTrackingManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7AE1148A4643C0CDB909014302499E7635177C6 (U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<WebARFoundation.ImageTracker> WebARFoundation.MindARImageTrackingManager/<>c::<Awake>b__19_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__19_0_m755301516816D6AD4CD9EB67972B5AF1CDAB1A1C (U3CU3Ec_t2976F8A5B74ED8E9B602FD6D687410FDC0EBFE62* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m7A0BDF5DB6A6D6B097A00F974164ADA93266E85F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .SelectMany(gameObject => gameObject
		//     .GetComponentsInChildren<ImageTracker>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		ImageTrackerU5BU5D_t5AC72C72CC3FA285EFF7AB4205426F324FDDBA6B* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m7A0BDF5DB6A6D6B097A00F974164ADA93266E85F(L_0, GameObject_GetComponentsInChildren_TisImageTracker_t3DAD9E514A9327E9A1A53D924954F3A4B1D404DB_m7A0BDF5DB6A6D6B097A00F974164ADA93266E85F_RuntimeMethod_var);
		return (RuntimeObject*)L_1;
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
// System.Void WebARFoundation.Utils::AssignMatrix4x4FromArray(UnityEngine.Matrix4x4&,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_AssignMatrix4x4FromArray_m9640CAD478F303E63CBF424C4F4F6581FD024CE1 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_p, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 16; i++) {
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		// p[i] = values[i];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_p;
		int32_t L_1 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___1_values;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_0, L_1, L_5, NULL);
		// for (int i = 0; i < 16; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0012:
	{
		// for (int i = 0; i < 16; i++) {
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 WebARFoundation.Utils::GetTranslationFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetTranslationFromMatrix_m49E2F75BD637154E14E0ED87B50A3364A6686666 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	{
		// return new Vector3(matrix.m03, matrix.m13, matrix.m23);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m03_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m13_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		float L_5 = L_4->___m23_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Quaternion WebARFoundation.Utils::GetRotationFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Utils_GetRotationFromMatrix_m763F2C965DB3EEAF3E4BBEDCEE85B3A69652E3F8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// forward.x = matrix.m02;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m02_8;
		(&V_0)->___x_2 = L_1;
		// forward.y = matrix.m12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m12_9;
		(&V_0)->___y_3 = L_3;
		// forward.z = matrix.m22;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		float L_5 = L_4->___m22_10;
		(&V_0)->___z_4 = L_5;
		// upwards.x = matrix.m01;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___0_matrix;
		float L_7 = L_6->___m01_4;
		(&V_1)->___x_2 = L_7;
		// upwards.y = matrix.m11;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8 = ___0_matrix;
		float L_9 = L_8->___m11_5;
		(&V_1)->___y_3 = L_9;
		// upwards.z = matrix.m21;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_10 = ___0_matrix;
		float L_11 = L_10->___m21_6;
		(&V_1)->___z_4 = L_11;
		// return Quaternion.LookRotation(forward, upwards);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_12, L_13, NULL);
		return L_14;
	}
}
// UnityEngine.Vector3 WebARFoundation.Utils::GetScaleFromMatrix(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetScaleFromMatrix_m6BCE783F344AC8F9C7FB48848DF8F93B1190049C (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_matrix, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// scale.x = new Vector4(matrix.m00, matrix.m10, matrix.m20, matrix.m30).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_matrix;
		float L_1 = L_0->___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = ___0_matrix;
		float L_3 = L_2->___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = ___0_matrix;
		float L_5 = L_4->___m20_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___0_matrix;
		float L_7 = L_6->___m30_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9;
		L_9 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___x_2 = L_9;
		// scale.y = new Vector4(matrix.m01, matrix.m11, matrix.m21, matrix.m31).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_10 = ___0_matrix;
		float L_11 = L_10->___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_12 = ___0_matrix;
		float L_13 = L_12->___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_14 = ___0_matrix;
		float L_15 = L_14->___m21_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_16 = ___0_matrix;
		float L_17 = L_16->___m31_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19;
		L_19 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___y_3 = L_19;
		// scale.z = new Vector4(matrix.m02, matrix.m12, matrix.m22, matrix.m32).magnitude;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_20 = ___0_matrix;
		float L_21 = L_20->___m02_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_22 = ___0_matrix;
		float L_23 = L_22->___m12_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_24 = ___0_matrix;
		float L_25 = L_24->___m22_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_26 = ___0_matrix;
		float L_27 = L_26->___m32_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_28), L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		float L_29;
		L_29 = Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline((&V_1), NULL);
		(&V_0)->___z_4 = L_29;
		// return scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		return L_30;
	}
}
// System.Void WebARFoundation.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mCCD1FFFA1E02EE2F877E7A57F25784F7F3F385F2 (Utils_tF359F6CEC7AED0BAABC5662A91169865B19DDB32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WebARFoundation.SampleFaceTrackingMyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_Start_mC0FBE781366F3AAC290C089C603CBBF3E282BEFF (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFaceTrackingMyController_OnTargetFound_m66FC7C0CD7931C1083C1A4BA2DA1EC426B0FAE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFaceTrackingMyController_OnTargetLost_m0C3582528D0037E322AC5441F0192F9D8D7600A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFaceTrackingMyController_OnTargetUpdate_mAC50238840A94B5E8AA9CD13CE435E5365DBE7D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager.stability = 3;
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_0 = __this->___manager_4;
		L_0->___stability_9 = 3;
		// manager.facingUser = false;
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_1 = __this->___manager_4;
		L_1->___facingUser_8 = (bool)0;
		// manager.onTargetFoundEvent += OnTargetFound;
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_2 = __this->___manager_4;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_3 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)il2cpp_codegen_object_new(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m8A1AA2C42BEDC31F0C63433FBC22B853FE2BDA47(L_3, __this, (intptr_t)((void*)SampleFaceTrackingMyController_OnTargetFound_m66FC7C0CD7931C1083C1A4BA2DA1EC426B0FAE7D_RuntimeMethod_var), NULL);
		MindARFaceTrackingManager_add_onTargetFoundEvent_mBB8465D156E92511EB87441DC81EDCBFC9EE6379(L_2, L_3, NULL);
		// manager.onTargetLostEvent += OnTargetLost;
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_4 = __this->___manager_4;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_5 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)il2cpp_codegen_object_new(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m8A1AA2C42BEDC31F0C63433FBC22B853FE2BDA47(L_5, __this, (intptr_t)((void*)SampleFaceTrackingMyController_OnTargetLost_m0C3582528D0037E322AC5441F0192F9D8D7600A9_RuntimeMethod_var), NULL);
		MindARFaceTrackingManager_add_onTargetLostEvent_mD1C71F22450A5C4629365F43F3019BCF4F6C3658(L_4, L_5, NULL);
		// manager.onTargetUpdateEvent += OnTargetUpdate;
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_6 = __this->___manager_4;
		OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* L_7 = (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7*)il2cpp_codegen_object_new(OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m8A1AA2C42BEDC31F0C63433FBC22B853FE2BDA47(L_7, __this, (intptr_t)((void*)SampleFaceTrackingMyController_OnTargetUpdate_mAC50238840A94B5E8AA9CD13CE435E5365DBE7D2_RuntimeMethod_var), NULL);
		MindARFaceTrackingManager_add_onTargetUpdateEvent_mC695731261288F4FF1F429127AA801731D283DAE(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_StartAR_mB66781C75EBBA1033FA1DD397FE4A080178D9CDA (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	{
		// manager.StartAR();
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_0 = __this->___manager_4;
		MindARFaceTrackingManager_StartAR_m645C903F9EF2A4157746923C9D2AC47297564007(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_StopAR_mFF55C8AD30CEDFA600410CDAB18E2329BC892EC7 (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	{
		// manager.StopAR();
		MindARFaceTrackingManager_t0071AEBFF66598EB1CE3E4E7A2D09D4E3D98428E* L_0 = __this->___manager_4;
		MindARFaceTrackingManager_StopAR_m3BEC686BF9FA09B7EF927514E1CA4B43BE2CD44F(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::OnTargetFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_OnTargetFound_m66FC7C0CD7931C1083C1A4BA2DA1EC426B0FAE7D (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D7B0DB75D27043BC404DE546321BBBE1CC14321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0D7B0DB75D27043BC404DE546321BBBE1CC14321, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::OnTargetLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_OnTargetLost_m0C3582528D0037E322AC5441F0192F9D8D7600A9 (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548A554E021C64D1391837D3AD40F3B20A2FAA64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target lost");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral548A554E021C64D1391837D3AD40F3B20A2FAA64, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::OnTargetUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController_OnTargetUpdate_mAC50238840A94B5E8AA9CD13CE435E5365DBE7D2 (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA49522358BCBE78BBBBAE8D28D9285B267EBC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target update");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralADA49522358BCBE78BBBBAE8D28D9285B267EBC5, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleFaceTrackingMyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFaceTrackingMyController__ctor_m49884D2815BBCE52C806CEB1163C8719DF983220 (SampleFaceTrackingMyController_t50CAC9537F659BB82E8FF269EF847FC4EECFF06F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebARFoundation.SampleImageTrackingMyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_Start_mB83C66C2CC7502DB6B62382E8C2D3C5BA4F14260 (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleImageTrackingMyController_OnTargetFound_mCEA084BFAAD1B8688BEC2E1091C247A344605816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleImageTrackingMyController_OnTargetLost_m0FCDE678BEFD3362FFBECADAACD18779B9A613A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleImageTrackingMyController_OnTargetUpdate_m8172A7C170FEFE90074A82A28A4ABAE94764F055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD09AAC40D3450A3767CD43F0D3CCF4AC94D1C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager.mindFileURL = "https://cdn.jsdelivr.net/gh/hiukim/mind-ar-js@1.2.1/examples/image-tracking/assets/band-example/band.mind";
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_0 = __this->___manager_4;
		L_0->___mindFileURL_7 = _stringLiteralFD09AAC40D3450A3767CD43F0D3CCF4AC94D1C87;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___mindFileURL_7), (void*)_stringLiteralFD09AAC40D3450A3767CD43F0D3CCF4AC94D1C87);
		// manager.maxTrack = 1;
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_1 = __this->___manager_4;
		L_1->___maxTrack_10 = 1;
		// manager.stability = 2;
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_2 = __this->___manager_4;
		L_2->___stability_11 = 2;
		// manager.onTargetFoundEvent += OnTargetFound;
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_3 = __this->___manager_4;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_4 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)il2cpp_codegen_object_new(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m9BD5FA5DB9825ABC8E5D39974F8B14C52FA83AAC(L_4, __this, (intptr_t)((void*)SampleImageTrackingMyController_OnTargetFound_mCEA084BFAAD1B8688BEC2E1091C247A344605816_RuntimeMethod_var), NULL);
		MindARImageTrackingManager_add_onTargetFoundEvent_m78D59AC8546A57C3007D2B911D72FD6586AC5841(L_3, L_4, NULL);
		// manager.onTargetLostEvent += OnTargetLost;
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_5 = __this->___manager_4;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_6 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)il2cpp_codegen_object_new(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m9BD5FA5DB9825ABC8E5D39974F8B14C52FA83AAC(L_6, __this, (intptr_t)((void*)SampleImageTrackingMyController_OnTargetLost_m0FCDE678BEFD3362FFBECADAACD18779B9A613A1_RuntimeMethod_var), NULL);
		MindARImageTrackingManager_add_onTargetLostEvent_m098DD9314234FD63F9C0A202F3F69044919FB2A3(L_5, L_6, NULL);
		// manager.onTargetUpdateEvent += OnTargetUpdate;
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_7 = __this->___manager_4;
		OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* L_8 = (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6*)il2cpp_codegen_object_new(OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6_il2cpp_TypeInfo_var);
		OnTargetEvent__ctor_m9BD5FA5DB9825ABC8E5D39974F8B14C52FA83AAC(L_8, __this, (intptr_t)((void*)SampleImageTrackingMyController_OnTargetUpdate_m8172A7C170FEFE90074A82A28A4ABAE94764F055_RuntimeMethod_var), NULL);
		MindARImageTrackingManager_add_onTargetUpdateEvent_mF6308F569494E989C7F3F91DC3828AA7FB6A0B32(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::StartAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_StartAR_mB8646ED1DCE3BEBC16EFFF2B9BECA87F2EC3480C (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, const RuntimeMethod* method) 
{
	{
		// manager.StartAR();
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_0 = __this->___manager_4;
		MindARImageTrackingManager_StartAR_mDD22F450F7E6096917CD41246103A833BBBD4062(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::StopAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_StopAR_mE62483C64A704B7566E1254654F9FB5364C00536 (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, const RuntimeMethod* method) 
{
	{
		// manager.StopAR();
		MindARImageTrackingManager_t30826631F94ABBDC87D1330F4B453DF83765FA84* L_0 = __this->___manager_4;
		MindARImageTrackingManager_StopAR_mF47A42B3BA8C77106F51043AAB02324F87C8F4DE(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::OnTargetFound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_OnTargetFound_mCEA084BFAAD1B8688BEC2E1091C247A344605816 (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF07937F6CFA909B3A94593C5A43A33614E54D04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target found: " + targetIndex);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_targetIndex), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF07937F6CFA909B3A94593C5A43A33614E54D04, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::OnTargetLost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_OnTargetLost_m0FCDE678BEFD3362FFBECADAACD18779B9A613A1 (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16D0BCCA85453EE83BBBE270D40FCC7D432EAE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target lost: " + targetIndex);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_targetIndex), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE16D0BCCA85453EE83BBBE270D40FCC7D432EAE1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::OnTargetUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController_OnTargetUpdate_m8172A7C170FEFE90074A82A28A4ABAE94764F055 (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725900A9AD57F71ABBA86D0003B565F461D9969A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("MyController target update: " + targetIndex);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_targetIndex), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral725900A9AD57F71ABBA86D0003B565F461D9969A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void WebARFoundation.SampleImageTrackingMyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleImageTrackingMyController__ctor_m48604064AA13078966D1F26D2F428B2BBB21455B (SampleImageTrackingMyController_t7C656CBF2C64A347687AFE2E81AA190212AF8BB4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mD2210357BDC28E02E0516C6BFDA4C87590097038_inline (OnARUpdateEvent_tAA210A0B2057A899C7992274303A043BCE5A7C15* __this, int32_t ___0_isFound, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isFound, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnARUpdateEvent_Invoke_mDF4609C060EF34ABAAF384C9E52C34BEA611669B_inline (OnARUpdateEvent_tBF0656CA996B241B36AA4D17E31034E197E5AEB4* __this, int32_t ___0_targetIndex, int32_t ___1_isFound, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_targetIndex, ___1_isFound, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = __this->___x_0;
		V_2 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = __this->___y_1;
		V_2 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var)));
	}

IL_002d:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARCamera_GetWebCamTexture_mE9FB07D84CDD60E23665168FA7E36CD2B3CBAFCB_inline (ARCamera_t7270A834743B1CB966F161ED49C1882BF71FEC5B* __this, const RuntimeMethod* method) 
{
	{
		// return videoTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___videoTexture_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m45C6E4D8029AB8062E29276DBC9A472C310D2A4F_inline (OnTargetEvent_t373E156A0576C7DA5C28A989F3510E78A5B5EAC7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetEvent_Invoke_m35E41ECB28BC6E2CAAF1CF0379BF9CFA359EB766_inline (OnTargetEvent_t044EF97657AD2AA5E8A971C21DC8016784DDE8B6* __this, int32_t ___0_targetIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_targetIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_magnitude_m97A83FC484190F07D8017F4BD10E3C81478E0D20_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_001c;
	}

IL_001c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
