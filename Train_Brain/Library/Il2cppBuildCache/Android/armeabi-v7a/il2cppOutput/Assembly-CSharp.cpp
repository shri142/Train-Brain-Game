#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63;
// System.Collections.Generic.List`1<BasePiece>
struct List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Cell>
struct List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t88A4BE98895C19A1F134BA69882646898AC2BD70;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15;
// BasePiece[]
struct BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE;
// Cell[]
struct CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Cell[0...,0...]
struct CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// BackToMenu
struct BackToMenu_t6620FA6392A9207DDC265A6E8267E06BD7DEC148;
// BasePiece
struct BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Bishop
struct Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97;
// Board
struct Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Cell
struct Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// GameManager2
struct GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E;
// GameManager3
struct GameManager3_tCD2A270F872193356FCEF44A1E53F77DC65ED517;
// GameManager4
struct GameManager4_tAEF6626FFDD4CD98C6B55BF1001E510CFB8D6E0A;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// King
struct King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B;
// Knight
struct Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Pawn
struct Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D;
// PieceManager
struct PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Queen
struct Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Rook
struct Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4;
// RulesManager
struct RulesManager_tA0B4DF90AE241268B5D7C30871BD1F81DB5F9EC7;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// track
struct track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral14A97BD1667CFE0BE820571CB49A04009DF42A41;
IL2CPP_EXTERN_C String_t* _stringLiteral2C064B60E5E4A9858E8C27B7B9113D852C25C01B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral30353B831C1BFBC26332261881BA4D57E31A8E93;
IL2CPP_EXTERN_C String_t* _stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5;
IL2CPP_EXTERN_C String_t* _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90;
IL2CPP_EXTERN_C String_t* _stringLiteral50E0DF8F1EC018B455A9C1C14006E4CF53967D77;
IL2CPP_EXTERN_C String_t* _stringLiteral65AA3AE180BAA2A1B31BD832C512CB1B09F46EBF;
IL2CPP_EXTERN_C String_t* _stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79;
IL2CPP_EXTERN_C String_t* _stringLiteral771838CD68BAC97CD5DE5ADA542099A2E974B809;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3683332DC59192F54697C04630385184E643D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8F499EDDDE2E4F31BA0115167D57E72466B1B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF04F8070183A0D79228D387FE62D3ACD5DFE301;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149_m354622F5DA296C2BD10B3372BA2A2841D7A111E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6F06AD67044CCDE012B7698484A36A6E23F3AE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD793D9D46CB263C43D7B733B627D50BEE750C122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m06F9F2388C4FEDF9F7741CFD66E5C7A3AA24A6EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_0_0_0_var;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___entries_1)); }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___keys_7)); }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___values_8)); }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<BasePiece>
struct List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C, ____items_1)); }
	inline BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* get__items_1() const { return ____items_1; }
	inline BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_StaticFields, ____emptyArray_5)); }
	inline BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BasePieceU5BU5D_t2FE4B4274A8A1DD692C1A81D104A9464E3FD29DE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cell>
struct List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6, ____items_1)); }
	inline CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* get__items_1() const { return ____items_1; }
	inline CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6_StaticFields, ____emptyArray_5)); }
	inline CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CellU5BU5D_t899E1120B280AD1FB8B67FE3AA23D9879C94BC04* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<BasePiece>
struct Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84, ___list_0)); }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * get_list_0() const { return ___list_0; }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84, ___current_3)); }
	inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * get_current_3() const { return ___current_3; }
	inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Cell>
struct Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90, ___list_0)); }
	inline List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * get_list_0() const { return ___list_0; }
	inline List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90, ___current_3)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_current_3() const { return ___current_3; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
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


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
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
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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

// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CellState
struct CellState_t89CB06870C2DE4655D445AE070C421B234B62FEF 
{
public:
	// System.Int32 CellState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CellState_t89CB06870C2DE4655D445AE070C421B234B62FEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
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
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// BackToMenu
struct BackToMenu_t6620FA6392A9207DDC265A6E8267E06BD7DEC148  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Board
struct Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Board::mCellPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mCellPrefab_4;
	// Cell[0...,0...] Board::mAllCells
	CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* ___mAllCells_5;

public:
	inline static int32_t get_offset_of_mCellPrefab_4() { return static_cast<int32_t>(offsetof(Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1, ___mCellPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mCellPrefab_4() const { return ___mCellPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mCellPrefab_4() { return &___mCellPrefab_4; }
	inline void set_mCellPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mCellPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCellPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_mAllCells_5() { return static_cast<int32_t>(offsetof(Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1, ___mAllCells_5)); }
	inline CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* get_mAllCells_5() const { return ___mAllCells_5; }
	inline CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C** get_address_of_mAllCells_5() { return &___mAllCells_5; }
	inline void set_mAllCells_5(CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* value)
	{
		___mAllCells_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCells_5), (void*)value);
	}
};


// Cell
struct Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Cell::mOutlineImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___mOutlineImage_4;
	// UnityEngine.Vector2Int Cell::mBoardPosition
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___mBoardPosition_5;
	// Board Cell::mBoard
	Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___mBoard_6;
	// UnityEngine.RectTransform Cell::mRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mRectTransform_7;
	// BasePiece Cell::mCurrentPiece
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * ___mCurrentPiece_8;

public:
	inline static int32_t get_offset_of_mOutlineImage_4() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___mOutlineImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_mOutlineImage_4() const { return ___mOutlineImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_mOutlineImage_4() { return &___mOutlineImage_4; }
	inline void set_mOutlineImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___mOutlineImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOutlineImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_mBoardPosition_5() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___mBoardPosition_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_mBoardPosition_5() const { return ___mBoardPosition_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_mBoardPosition_5() { return &___mBoardPosition_5; }
	inline void set_mBoardPosition_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___mBoardPosition_5 = value;
	}

	inline static int32_t get_offset_of_mBoard_6() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___mBoard_6)); }
	inline Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * get_mBoard_6() const { return ___mBoard_6; }
	inline Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 ** get_address_of_mBoard_6() { return &___mBoard_6; }
	inline void set_mBoard_6(Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * value)
	{
		___mBoard_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBoard_6), (void*)value);
	}

	inline static int32_t get_offset_of_mRectTransform_7() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___mRectTransform_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mRectTransform_7() const { return ___mRectTransform_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mRectTransform_7() { return &___mRectTransform_7; }
	inline void set_mRectTransform_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mRectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRectTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentPiece_8() { return static_cast<int32_t>(offsetof(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149, ___mCurrentPiece_8)); }
	inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * get_mCurrentPiece_8() const { return ___mCurrentPiece_8; }
	inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C ** get_address_of_mCurrentPiece_8() { return &___mCurrentPiece_8; }
	inline void set_mCurrentPiece_8(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * value)
	{
		___mCurrentPiece_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentPiece_8), (void*)value);
	}
};


// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_t88A4BE98895C19A1F134BA69882646898AC2BD70 * ___m_Delegates_4;

public:
	inline static int32_t get_offset_of_m_Delegates_4() { return static_cast<int32_t>(offsetof(EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563, ___m_Delegates_4)); }
	inline List_1_t88A4BE98895C19A1F134BA69882646898AC2BD70 * get_m_Delegates_4() const { return ___m_Delegates_4; }
	inline List_1_t88A4BE98895C19A1F134BA69882646898AC2BD70 ** get_address_of_m_Delegates_4() { return &___m_Delegates_4; }
	inline void set_m_Delegates_4(List_1_t88A4BE98895C19A1F134BA69882646898AC2BD70 * value)
	{
		___m_Delegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegates_4), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameManager2
struct GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Board GameManager2::mBoard
	Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___mBoard_4;
	// PieceManager GameManager2::mPieceManager
	PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___mPieceManager_5;

public:
	inline static int32_t get_offset_of_mBoard_4() { return static_cast<int32_t>(offsetof(GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E, ___mBoard_4)); }
	inline Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * get_mBoard_4() const { return ___mBoard_4; }
	inline Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 ** get_address_of_mBoard_4() { return &___mBoard_4; }
	inline void set_mBoard_4(Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * value)
	{
		___mBoard_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBoard_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPieceManager_5() { return static_cast<int32_t>(offsetof(GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E, ___mPieceManager_5)); }
	inline PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * get_mPieceManager_5() const { return ___mPieceManager_5; }
	inline PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 ** get_address_of_mPieceManager_5() { return &___mPieceManager_5; }
	inline void set_mPieceManager_5(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * value)
	{
		___mPieceManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPieceManager_5), (void*)value);
	}
};


// GameManager3
struct GameManager3_tCD2A270F872193356FCEF44A1E53F77DC65ED517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameManager4
struct GameManager4_tAEF6626FFDD4CD98C6B55BF1001E510CFB8D6E0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PieceManager
struct PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PieceManager::mIsKingAlive
	bool ___mIsKingAlive_4;
	// UnityEngine.GameObject PieceManager::mPiecePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mPiecePrefab_5;
	// System.Collections.Generic.List`1<BasePiece> PieceManager::mWhitePieces
	List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___mWhitePieces_6;
	// System.Collections.Generic.List`1<BasePiece> PieceManager::mBlackPieces
	List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___mBlackPieces_7;
	// System.Collections.Generic.List`1<BasePiece> PieceManager::mPromotedPieces
	List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___mPromotedPieces_8;
	// System.String[] PieceManager::mPieceOrder
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mPieceOrder_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> PieceManager::mPieceLibrary
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * ___mPieceLibrary_10;

public:
	inline static int32_t get_offset_of_mIsKingAlive_4() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mIsKingAlive_4)); }
	inline bool get_mIsKingAlive_4() const { return ___mIsKingAlive_4; }
	inline bool* get_address_of_mIsKingAlive_4() { return &___mIsKingAlive_4; }
	inline void set_mIsKingAlive_4(bool value)
	{
		___mIsKingAlive_4 = value;
	}

	inline static int32_t get_offset_of_mPiecePrefab_5() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mPiecePrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mPiecePrefab_5() const { return ___mPiecePrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mPiecePrefab_5() { return &___mPiecePrefab_5; }
	inline void set_mPiecePrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mPiecePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPiecePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_mWhitePieces_6() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mWhitePieces_6)); }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * get_mWhitePieces_6() const { return ___mWhitePieces_6; }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C ** get_address_of_mWhitePieces_6() { return &___mWhitePieces_6; }
	inline void set_mWhitePieces_6(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * value)
	{
		___mWhitePieces_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWhitePieces_6), (void*)value);
	}

	inline static int32_t get_offset_of_mBlackPieces_7() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mBlackPieces_7)); }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * get_mBlackPieces_7() const { return ___mBlackPieces_7; }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C ** get_address_of_mBlackPieces_7() { return &___mBlackPieces_7; }
	inline void set_mBlackPieces_7(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * value)
	{
		___mBlackPieces_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlackPieces_7), (void*)value);
	}

	inline static int32_t get_offset_of_mPromotedPieces_8() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mPromotedPieces_8)); }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * get_mPromotedPieces_8() const { return ___mPromotedPieces_8; }
	inline List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C ** get_address_of_mPromotedPieces_8() { return &___mPromotedPieces_8; }
	inline void set_mPromotedPieces_8(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * value)
	{
		___mPromotedPieces_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPromotedPieces_8), (void*)value);
	}

	inline static int32_t get_offset_of_mPieceOrder_9() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mPieceOrder_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mPieceOrder_9() const { return ___mPieceOrder_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mPieceOrder_9() { return &___mPieceOrder_9; }
	inline void set_mPieceOrder_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mPieceOrder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPieceOrder_9), (void*)value);
	}

	inline static int32_t get_offset_of_mPieceLibrary_10() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___mPieceLibrary_10)); }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * get_mPieceLibrary_10() const { return ___mPieceLibrary_10; }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 ** get_address_of_mPieceLibrary_10() { return &___mPieceLibrary_10; }
	inline void set_mPieceLibrary_10(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * value)
	{
		___mPieceLibrary_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPieceLibrary_10), (void*)value);
	}
};


// RulesManager
struct RulesManager_tA0B4DF90AE241268B5D7C30871BD1F81DB5F9EC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// track
struct track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer track::video
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___video_4;
	// UnityEngine.UI.Slider track::tracking
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___tracking_5;

public:
	inline static int32_t get_offset_of_video_4() { return static_cast<int32_t>(offsetof(track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1, ___video_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_video_4() const { return ___video_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_video_4() { return &___video_4; }
	inline void set_video_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___video_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___video_4), (void*)value);
	}

	inline static int32_t get_offset_of_tracking_5() { return static_cast<int32_t>(offsetof(track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1, ___tracking_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_tracking_5() const { return ___tracking_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_tracking_5() { return &___tracking_5; }
	inline void set_tracking_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___tracking_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tracking_5), (void*)value);
	}
};


// BasePiece
struct BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C  : public EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563
{
public:
	// UnityEngine.Color BasePiece::mColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___mColor_5;
	// System.Boolean BasePiece::mIsFirstMove
	bool ___mIsFirstMove_6;
	// Cell BasePiece::mOriginalCell
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___mOriginalCell_7;
	// Cell BasePiece::mCurrentCell
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___mCurrentCell_8;
	// UnityEngine.RectTransform BasePiece::mRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mRectTransform_9;
	// PieceManager BasePiece::mPieceManager
	PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___mPieceManager_10;
	// Cell BasePiece::mTargetCell
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___mTargetCell_11;
	// UnityEngine.Vector3Int BasePiece::mMovement
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___mMovement_12;
	// System.Collections.Generic.List`1<Cell> BasePiece::mHighlightedCells
	List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * ___mHighlightedCells_13;

public:
	inline static int32_t get_offset_of_mColor_5() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_mColor_5() const { return ___mColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_mColor_5() { return &___mColor_5; }
	inline void set_mColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___mColor_5 = value;
	}

	inline static int32_t get_offset_of_mIsFirstMove_6() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mIsFirstMove_6)); }
	inline bool get_mIsFirstMove_6() const { return ___mIsFirstMove_6; }
	inline bool* get_address_of_mIsFirstMove_6() { return &___mIsFirstMove_6; }
	inline void set_mIsFirstMove_6(bool value)
	{
		___mIsFirstMove_6 = value;
	}

	inline static int32_t get_offset_of_mOriginalCell_7() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mOriginalCell_7)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_mOriginalCell_7() const { return ___mOriginalCell_7; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_mOriginalCell_7() { return &___mOriginalCell_7; }
	inline void set_mOriginalCell_7(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___mOriginalCell_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOriginalCell_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentCell_8() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mCurrentCell_8)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_mCurrentCell_8() const { return ___mCurrentCell_8; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_mCurrentCell_8() { return &___mCurrentCell_8; }
	inline void set_mCurrentCell_8(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___mCurrentCell_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentCell_8), (void*)value);
	}

	inline static int32_t get_offset_of_mRectTransform_9() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mRectTransform_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mRectTransform_9() const { return ___mRectTransform_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mRectTransform_9() { return &___mRectTransform_9; }
	inline void set_mRectTransform_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mRectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRectTransform_9), (void*)value);
	}

	inline static int32_t get_offset_of_mPieceManager_10() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mPieceManager_10)); }
	inline PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * get_mPieceManager_10() const { return ___mPieceManager_10; }
	inline PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 ** get_address_of_mPieceManager_10() { return &___mPieceManager_10; }
	inline void set_mPieceManager_10(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * value)
	{
		___mPieceManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPieceManager_10), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetCell_11() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mTargetCell_11)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_mTargetCell_11() const { return ___mTargetCell_11; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_mTargetCell_11() { return &___mTargetCell_11; }
	inline void set_mTargetCell_11(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___mTargetCell_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetCell_11), (void*)value);
	}

	inline static int32_t get_offset_of_mMovement_12() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mMovement_12)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_mMovement_12() const { return ___mMovement_12; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_mMovement_12() { return &___mMovement_12; }
	inline void set_mMovement_12(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___mMovement_12 = value;
	}

	inline static int32_t get_offset_of_mHighlightedCells_13() { return static_cast<int32_t>(offsetof(BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C, ___mHighlightedCells_13)); }
	inline List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * get_mHighlightedCells_13() const { return ___mHighlightedCells_13; }
	inline List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 ** get_address_of_mHighlightedCells_13() { return &___mHighlightedCells_13; }
	inline void set_mHighlightedCells_13(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * value)
	{
		___mHighlightedCells_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHighlightedCells_13), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// Bishop
struct Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:

public:
};


// King
struct King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:
	// Rook King::mLeftRook
	Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * ___mLeftRook_14;
	// Rook King::mRightRook
	Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * ___mRightRook_15;

public:
	inline static int32_t get_offset_of_mLeftRook_14() { return static_cast<int32_t>(offsetof(King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B, ___mLeftRook_14)); }
	inline Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * get_mLeftRook_14() const { return ___mLeftRook_14; }
	inline Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 ** get_address_of_mLeftRook_14() { return &___mLeftRook_14; }
	inline void set_mLeftRook_14(Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * value)
	{
		___mLeftRook_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLeftRook_14), (void*)value);
	}

	inline static int32_t get_offset_of_mRightRook_15() { return static_cast<int32_t>(offsetof(King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B, ___mRightRook_15)); }
	inline Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * get_mRightRook_15() const { return ___mRightRook_15; }
	inline Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 ** get_address_of_mRightRook_15() { return &___mRightRook_15; }
	inline void set_mRightRook_15(Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * value)
	{
		___mRightRook_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRightRook_15), (void*)value);
	}
};


// Knight
struct Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// Pawn
struct Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:

public:
};


// Queen
struct Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:

public:
};


// Rook
struct Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4  : public BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C
{
public:
	// Cell Rook::mCastleTriggerCell
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___mCastleTriggerCell_14;
	// Cell Rook::mCastleCell
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___mCastleCell_15;

public:
	inline static int32_t get_offset_of_mCastleTriggerCell_14() { return static_cast<int32_t>(offsetof(Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4, ___mCastleTriggerCell_14)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_mCastleTriggerCell_14() const { return ___mCastleTriggerCell_14; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_mCastleTriggerCell_14() { return &___mCastleTriggerCell_14; }
	inline void set_mCastleTriggerCell_14(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___mCastleTriggerCell_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCastleTriggerCell_14), (void*)value);
	}

	inline static int32_t get_offset_of_mCastleCell_15() { return static_cast<int32_t>(offsetof(Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4, ___mCastleCell_15)); }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * get_mCastleCell_15() const { return ___mCastleCell_15; }
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** get_address_of_mCastleCell_15() { return &___mCastleCell_15; }
	inline void set_mCastleCell_15(Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		___mCastleCell_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCastleCell_15), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
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


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cell[0...,0...]
struct CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * m_Items[1];

public:
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// CellState Board::ValidateCell(System.Int32,System.Int32,BasePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB (Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * __this, int32_t ___targetX0, int32_t ___targetY1, BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * ___checkingPiece2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cell>::Add(!0)
inline void List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * __this, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 *, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Void BasePiece::CreateCellPath(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, int32_t ___xDirection0, int32_t ___yDirection1, int32_t ___movement2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Cell>::GetEnumerator()
inline Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  (*) (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Cell>::get_Current()
inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_inline (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 * __this, const RuntimeMethod* method)
{
	return ((  Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * (*) (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Cell>::MoveNext()
inline bool Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Cell>::Dispose()
inline void Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Cell>::Clear()
inline void List_1_Clear_m6F06AD67044CCDE012B7698484A36A6E23F3AE48 (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Cell::RemovePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_RemovePiece_m63ED4E94BEFA90D285C2574D7145668B6ECD8CF7 (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_OnBeginDrag_m5F9E87C7ECC639845489FE40809E78E6B7649E88 (EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void BasePiece::ShowCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_ShowCells_m71F329E7588C3745CAE67EF721CB9684DFEDD162 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_OnDrag_mB6CE0C89FD6EE7B9750A095A9D87268BF72B552C (EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_m9555C6EE2E65A04903D9EA194F45B61F94281D76 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_OnEndDrag_m2954768898BB2EF5EBC87C18227ADB7767D1A42C (EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void BasePiece::ClearCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_ClearCells_m88AF03247E47C0F8CDEB270FFCB126DD6DEE8F00 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void PieceManager::SwitchSides(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_SwitchSides_m38B2F01C27833B16066590EBD267DD381111DB3C (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_get_one_mD2F5EA183E7F7D84A6DE6D3FC8D5EC0A17D29FCA (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cell>::.ctor()
inline void List_1__ctor_m06F9F2388C4FEDF9F7741CFD66E5C7A3AA24A6EA (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger__ctor_m6C07DACEA4CBC537B714051B7DAFEFCE21ABC050 (EventTrigger_tA136EB086A23F8BBDC2D547223F1AA9CBA9A2563 * __this, const RuntimeMethod* method);
// System.Void BasePiece::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void BasePiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cell>()
inline Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * GameObject_GetComponent_TisCell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149_m354622F5DA296C2BD10B3372BA2A2841D7A111E2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Cell::Setup(UnityEngine.Vector2Int,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Setup_m90F9D23E40CD77B0E85E6FC989FB04215C369DDF (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___newBoardPosition0, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___newBoard1, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_zero_m89F24AE488182BAB38B381B445B8868B3DD5A2AE (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void Board::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_Create_mFDA791DC853CF63291A7D39E3E35414D27BF8160 (Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * __this, const RuntimeMethod* method);
// System.Void PieceManager::Setup(Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_Setup_mEE70262866C6629A845542996795C039319A5004 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board0, const RuntimeMethod* method);
// System.Void BasePiece::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Kill_m8F3428DA6A9E903FEF7C59652A3B453678F0EFC2 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// System.Void BasePiece::CheckPathing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_CheckPathing_m512F0B6EDC2B6CC053446EC9C25CFA33E9E41E5F (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// Rook King::GetRook(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * King_GetRook_mDFC03DC42D2A44957F7A0D9BB37005666BD5018F (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, int32_t ___direction0, int32_t ___count1, const RuntimeMethod* method);
// System.Void BasePiece::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Move_m0AC615BC132FA20289EDA5CB0B38542E65A50576 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// System.Boolean King::CanCastle(Rook)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool King_CanCastle_mAEB341592CB020F045FEF46B7FC3F516CD257C43 (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * ___rook0, const RuntimeMethod* method);
// System.Void Rook::Castle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Castle_mCA726E7531CB6CCF40BB07F0E34336802E545974 (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Knight::MatchesState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, int32_t ___targetX0, int32_t ___targetY1, const RuntimeMethod* method);
// System.Void Knight::CreateCellPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_CreateCellPath_m5BBCB2F50069A32C459DD9C63139C950CE11D11F (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, int32_t ___flipper0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void Pawn::CheckForPromotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_CheckForPromotion_m49C3A29EF830AB67737B8ABBDEAC6F2BACAD1C38 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, const RuntimeMethod* method);
// System.Void PieceManager::PromotePiece(Pawn,Cell,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PromotePiece_m5BBDB24759522730A46CFBC6DE8F88B73DB724C8 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * ___pawn0, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___cell1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___teamColor2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___spriteColor3, const RuntimeMethod* method);
// System.Boolean Pawn::MatchesState(System.Int32,System.Int32,CellState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, int32_t ___targetX0, int32_t ___targetY1, int32_t ___targetState2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<BasePiece> PieceManager::CreatePieces(UnityEngine.Color,UnityEngine.Color32,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * PieceManager_CreatePieces_m8952E57EC99D5131EDF1CD690DC35D140449BD45 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___teamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___spriteColor1, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void PieceManager::PlacePieces(System.Int32,System.Int32,System.Collections.Generic.List`1<BasePiece>,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PlacePieces_mF262D9C7B87A9DAEA7F281A879BA0322A7575161 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, int32_t ___pawnRow0, int32_t ___royaltyRow1, List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___pieces2, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BasePiece>::.ctor()
inline void List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787 (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(!0)
inline Type_t * Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// BasePiece PieceManager::CreatePiece(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * PieceManager_CreatePiece_m08F433614C2D0DA7F2AF7CB4AFF5B62FBDA311F9 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Type_t * ___pieceType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BasePiece>::Add(!0)
inline void List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9 (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * __this, BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *, BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<BasePiece>::get_Item(System.Int32)
inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_inline (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * (*) (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<BasePiece>::GetEnumerator()
inline Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862 (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  (*) (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<BasePiece>::get_Current()
inline BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 * __this, const RuntimeMethod* method)
{
	return ((  BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * (*) (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<BasePiece>::MoveNext()
inline bool Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4 (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<BasePiece>::Dispose()
inline void Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void PieceManager::ResetPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_ResetPieces_mEDA32F7E9AAD6A4EAAC9B24C43B3A5EE3EAE2D23 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method);
// System.Void PieceManager::SetInteractive(System.Collections.Generic.List`1<BasePiece>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_SetInteractive_mBA1CECBCCE9A8F1661611B2020846626B39A394A (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___allPieces0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BasePiece>::Clear()
inline void List_1_Clear_mD793D9D46CB263C43D7B733B627D50BEE750C122 (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void BasePiece::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Reset_mE33B16E2ED703AC6E7EE2AE28EE668FCC8AA91F4 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::Add(!0,!1)
inline void Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3 (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * __this, String_t* ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, String_t*, Type_t *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void BasePiece::Place(Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Place_mF001301F694191346C38648A3CB2EE418AD4F06E (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___newCell0, const RuntimeMethod* method);
// Cell Rook::SetCell(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * Rook_SetCell_mB4397CE05681FE4386F21A9ED6344F85CFA13696 (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
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
// System.Void BackToMenu::BackFromVideosYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackToMenu_BackFromVideosYes_m602173568D1D3F22E91DF8BC1D69DE9C428E60AE (BackToMenu_t6620FA6392A9207DDC265A6E8267E06BD7DEC148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackToMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackToMenu__ctor_m989DFE443A2C4CF882A8C5B1773EBE720F38EE3B (BackToMenu_t6620FA6392A9207DDC265A6E8267E06BD7DEC148 * __this, const RuntimeMethod* method)
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
// System.Void BasePiece::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPieceManager = newPieceManager;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_0 = ___newPieceManager2;
		__this->set_mPieceManager_10(L_0);
		// mColor = newTeamColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___newTeamColor0;
		__this->set_mColor_5(L_1);
		// GetComponent<Image>().color = newSpriteColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = ___newSpriteColor1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// mRectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_mRectTransform_9(L_5);
		// }
		return;
	}
}
// System.Void BasePiece::Place(Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Place_mF001301F694191346C38648A3CB2EE418AD4F06E (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___newCell0, const RuntimeMethod* method)
{
	{
		// mCurrentCell = newCell;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ___newCell0;
		__this->set_mCurrentCell_8(L_0);
		// mOriginalCell = newCell;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_1 = ___newCell0;
		__this->set_mOriginalCell_7(L_1);
		// mCurrentCell.mCurrentPiece = this;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_2 = __this->get_mCurrentCell_8();
		NullCheck(L_2);
		L_2->set_mCurrentPiece_8(__this);
		// transform.position = newCell.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_4 = ___newCell0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BasePiece::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Reset_mE33B16E2ED703AC6E7EE2AE28EE668FCC8AA91F4 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	{
		// Kill();
		VirtActionInvoker0::Invoke(40 /* System.Void BasePiece::Kill() */, __this);
		// Place(mOriginalCell);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = __this->get_mOriginalCell_7();
		VirtActionInvoker1< Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * >::Invoke(39 /* System.Void BasePiece::Place(Cell) */, __this, L_0);
		// }
		return;
	}
}
// System.Void BasePiece::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Kill_m8F3428DA6A9E903FEF7C59652A3B453678F0EFC2 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	{
		// mCurrentCell.mCurrentPiece = null;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = __this->get_mCurrentCell_8();
		NullCheck(L_0);
		L_0->set_mCurrentPiece_8((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BasePiece::CreateCellPath(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, int32_t ___xDirection0, int32_t ___yDirection1, int32_t ___movement2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int currentX = mCurrentCell.mBoardPosition.x;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = __this->get_mCurrentCell_8();
		NullCheck(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = L_0->get_address_of_mBoardPosition_5();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int currentY = mCurrentCell.mBoardPosition.y;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = __this->get_mCurrentCell_8();
		NullCheck(L_3);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = L_3->get_address_of_mBoardPosition_5();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// for (int i = 1; i <= movement; i++)
		V_2 = 1;
		goto IL_0095;
	}

IL_0026:
	{
		// currentX += xDirection;
		int32_t L_6 = V_0;
		int32_t L_7 = ___xDirection0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		// currentY += yDirection;
		int32_t L_8 = V_1;
		int32_t L_9 = ___yDirection1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		// CellState cellState = CellState.None;
		V_3 = 0;
		// cellState = mCurrentCell.mBoard.ValidateCell(currentX, currentY, this);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_10 = __this->get_mCurrentCell_8();
		NullCheck(L_10);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_11 = L_10->get_mBoard_6();
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB(L_11, L_12, L_13, __this, /*hidden argument*/NULL);
		V_3 = L_14;
		// if (cellState == CellState.Enemy)
		int32_t L_15 = V_3;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_006b;
		}
	}
	{
		// mHighlightedCells.Add(mCurrentCell.mBoard.mAllCells[currentX, currentY]);
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_16 = __this->get_mHighlightedCells_13();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_17 = __this->get_mCurrentCell_8();
		NullCheck(L_17);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_18 = L_17->get_mBoard_6();
		NullCheck(L_18);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_19 = L_18->get_mAllCells_5();
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_22;
		L_22 = (L_19)->GetAt(L_20, L_21);
		NullCheck(L_16);
		List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A(L_16, L_22, /*hidden argument*/List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		// break;
		return;
	}

IL_006b:
	{
		// if (cellState != CellState.Free)
		int32_t L_23 = V_3;
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_0099;
		}
	}
	{
		// mHighlightedCells.Add(mCurrentCell.mBoard.mAllCells[currentX, currentY]);
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_24 = __this->get_mHighlightedCells_13();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_25 = __this->get_mCurrentCell_8();
		NullCheck(L_25);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_26 = L_25->get_mBoard_6();
		NullCheck(L_26);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_27 = L_26->get_mAllCells_5();
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_27);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_30;
		L_30 = (L_27)->GetAt(L_28, L_29);
		NullCheck(L_24);
		List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A(L_24, L_30, /*hidden argument*/List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		// for (int i = 1; i <= movement; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0095:
	{
		// for (int i = 1; i <= movement; i++)
		int32_t L_32 = V_2;
		int32_t L_33 = ___movement2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0026;
		}
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void BasePiece::CheckPathing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_CheckPathing_m512F0B6EDC2B6CC053446EC9C25CFA33E9E41E5F (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	{
		// CreateCellPath(1, 0, mMovement.x);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_0 = __this->get_address_of_mMovement_12();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_0, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, 1, 0, L_1, /*hidden argument*/NULL);
		// CreateCellPath(-1, 0, mMovement.x);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_2 = __this->get_address_of_mMovement_12();
		int32_t L_3;
		L_3 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_2, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, (-1), 0, L_3, /*hidden argument*/NULL);
		// CreateCellPath(0, 1, mMovement.y);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_4 = __this->get_address_of_mMovement_12();
		int32_t L_5;
		L_5 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_4, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, 0, 1, L_5, /*hidden argument*/NULL);
		// CreateCellPath(0, -1, mMovement.y);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_6 = __this->get_address_of_mMovement_12();
		int32_t L_7;
		L_7 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_6, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, 0, (-1), L_7, /*hidden argument*/NULL);
		// CreateCellPath(1, 1, mMovement.z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_8 = __this->get_address_of_mMovement_12();
		int32_t L_9;
		L_9 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_8, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, 1, 1, L_9, /*hidden argument*/NULL);
		// CreateCellPath(-1, 1, mMovement.z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_10 = __this->get_address_of_mMovement_12();
		int32_t L_11;
		L_11 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_10, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, (-1), 1, L_11, /*hidden argument*/NULL);
		// CreateCellPath(-1, -1, mMovement.z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_12 = __this->get_address_of_mMovement_12();
		int32_t L_13;
		L_13 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_12, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, (-1), (-1), L_13, /*hidden argument*/NULL);
		// CreateCellPath(1, -1, mMovement.z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_14 = __this->get_address_of_mMovement_12();
		int32_t L_15;
		L_15 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_14, /*hidden argument*/NULL);
		BasePiece_CreateCellPath_m37BA323641A3F2B7F15156F96F6401AF79FDB3B5(__this, 1, (-1), L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BasePiece::ShowCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_ShowCells_m71F329E7588C3745CAE67EF721CB9684DFEDD162 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Cell cell in mHighlightedCells)
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_0 = __this->get_mHighlightedCells_13();
		NullCheck(L_0);
		Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  L_1;
		L_1 = List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A(L_0, /*hidden argument*/List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			// foreach (Cell cell in mHighlightedCells)
			Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_2;
			L_2 = Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_inline((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
			// cell.mOutlineImage.enabled = true;
			NullCheck(L_2);
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_mOutlineImage_4();
			NullCheck(L_3);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		}

IL_0020:
		{
			// foreach (Cell cell in mHighlightedCells)
			bool L_4;
			L_4 = Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void BasePiece::ClearCells()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_ClearCells_m88AF03247E47C0F8CDEB270FFCB126DD6DEE8F00 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6F06AD67044CCDE012B7698484A36A6E23F3AE48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Cell cell in mHighlightedCells)
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_0 = __this->get_mHighlightedCells_13();
		NullCheck(L_0);
		Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  L_1;
		L_1 = List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A(L_0, /*hidden argument*/List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			// foreach (Cell cell in mHighlightedCells)
			Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_2;
			L_2 = Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_inline((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
			// cell.mOutlineImage.enabled = true;
			NullCheck(L_2);
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_mOutlineImage_4();
			NullCheck(L_3);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		}

IL_0020:
		{
			// foreach (Cell cell in mHighlightedCells)
			bool L_4;
			L_4 = Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// mHighlightedCells.Clear();
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_5 = __this->get_mHighlightedCells_13();
		NullCheck(L_5);
		List_1_Clear_m6F06AD67044CCDE012B7698484A36A6E23F3AE48(L_5, /*hidden argument*/List_1_Clear_m6F06AD67044CCDE012B7698484A36A6E23F3AE48_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BasePiece::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_Move_m0AC615BC132FA20289EDA5CB0B38542E65A50576 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	{
		// mTargetCell.RemovePiece();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = __this->get_mTargetCell_11();
		NullCheck(L_0);
		Cell_RemovePiece_m63ED4E94BEFA90D285C2574D7145668B6ECD8CF7(L_0, /*hidden argument*/NULL);
		// mCurrentCell.mCurrentPiece = null;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_1 = __this->get_mCurrentCell_8();
		NullCheck(L_1);
		L_1->set_mCurrentPiece_8((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)NULL);
		// mCurrentCell = mTargetCell;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_2 = __this->get_mTargetCell_11();
		__this->set_mCurrentCell_8(L_2);
		// mCurrentCell.mCurrentPiece = this;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = __this->get_mCurrentCell_8();
		NullCheck(L_3);
		L_3->set_mCurrentPiece_8(__this);
		// transform.position = mCurrentCell.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_5 = __this->get_mCurrentCell_8();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// mTargetCell = null;
		__this->set_mTargetCell_11((Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 *)NULL);
		// }
		return;
	}
}
// System.Void BasePiece::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_OnBeginDrag_mEBC876E6BEC7C725D847CA8FF6F58C6273387119 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// base.OnBeginDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		EventTrigger_OnBeginDrag_m5F9E87C7ECC639845489FE40809E78E6B7649E88(__this, L_0, /*hidden argument*/NULL);
		// CheckPathing();
		VirtActionInvoker0::Invoke(41 /* System.Void BasePiece::CheckPathing() */, __this);
		// ShowCells();
		BasePiece_ShowCells_m71F329E7588C3745CAE67EF721CB9684DFEDD162(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BasePiece::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_OnDrag_mB9F8F40222976A54231C37C51934AF60D504FAD5 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// base.OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		EventTrigger_OnDrag_mB6CE0C89FD6EE7B9750A095A9D87268BF72B552C(__this, L_0, /*hidden argument*/NULL);
		// transform.position += (Vector3)eventData.delta;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
		// foreach (Cell cell in mHighlightedCells)
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_8 = __this->get_mHighlightedCells_13();
		NullCheck(L_8);
		Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90  L_9;
		L_9 = List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A(L_8, /*hidden argument*/List_1_GetEnumerator_mBF89409E8CA1C674C83CBD48E22C7FDD4EF2CF9A_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0036:
		{
			// foreach (Cell cell in mHighlightedCells)
			Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_10;
			L_10 = Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_inline((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD349CEF3D91FD2235710BBDACE0F69874CDD9FA0_RuntimeMethod_var);
			V_1 = L_10;
			// if (RectTransformUtility.RectangleContainsScreenPoint(cell.mRectTransform, Input.mousePosition))
			Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_11 = V_1;
			NullCheck(L_11);
			RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = L_11->get_mRectTransform_7();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
			L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
			bool L_15;
			L_15 = RectTransformUtility_RectangleContainsScreenPoint_m9555C6EE2E65A04903D9EA194F45B61F94281D76(L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_005e;
			}
		}

IL_0055:
		{
			// mTargetCell = cell;
			Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_16 = V_1;
			__this->set_mTargetCell_11(L_16);
			// break;
			IL2CPP_LEAVE(0x7E, FINALLY_0070);
		}

IL_005e:
		{
			// mTargetCell = null;
			__this->set_mTargetCell_11((Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 *)NULL);
		}

IL_0065:
		{
			// foreach (Cell cell in mHighlightedCells)
			bool L_17;
			L_17 = Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA2073AE89C7B10E180C660ED7D802B105AB95CBD_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0036;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC((Enumerator_t7B9B4EE2AE7E3BFCD6D596BAE379DE0FFFD99B90 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5D89540ACF5265BB5C554D7E89DE5373A50776AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void BasePiece::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece_OnEndDrag_m5CB1D4E73438B21774020D1AC66149F6B55E2276 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEndDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		EventTrigger_OnEndDrag_m2954768898BB2EF5EBC87C18227ADB7767D1A42C(__this, L_0, /*hidden argument*/NULL);
		// ClearCells();
		BasePiece_ClearCells_m88AF03247E47C0F8CDEB270FFCB126DD6DEE8F00(__this, /*hidden argument*/NULL);
		// if (!mTargetCell)
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_1 = __this->get_mTargetCell_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// transform.position = mCurrentCell.gameObject.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_4 = __this->get_mCurrentCell_8();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003b:
	{
		// Move();
		VirtActionInvoker0::Invoke(42 /* System.Void BasePiece::Move() */, __this);
		// mPieceManager.SwitchSides(mColor);
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_8 = __this->get_mPieceManager_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get_mColor_5();
		NullCheck(L_8);
		PieceManager_SwitchSides_m38B2F01C27833B16066590EBD267DD381111DB3C(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BasePiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155 (BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m06F9F2388C4FEDF9F7741CFD66E5C7A3AA24A6EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color mColor = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_mColor_5(L_0);
		// public bool mIsFirstMove=true;
		__this->set_mIsFirstMove_6((bool)1);
		// protected Vector3Int mMovement = Vector3Int.one;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1;
		L_1 = Vector3Int_get_one_mD2F5EA183E7F7D84A6DE6D3FC8D5EC0A17D29FCA(/*hidden argument*/NULL);
		__this->set_mMovement_12(L_1);
		// protected List<Cell> mHighlightedCells = new List<Cell>();
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_2 = (List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 *)il2cpp_codegen_object_new(List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6_il2cpp_TypeInfo_var);
		List_1__ctor_m06F9F2388C4FEDF9F7741CFD66E5C7A3AA24A6EA(L_2, /*hidden argument*/List_1__ctor_m06F9F2388C4FEDF9F7741CFD66E5C7A3AA24A6EA_RuntimeMethod_var);
		__this->set_mHighlightedCells_13(L_2);
		EventTrigger__ctor_m6C07DACEA4CBC537B714051B7DAFEFCE21ABC050(__this, /*hidden argument*/NULL);
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
// System.Void Bishop::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop_Setup_m2F16DFD5F7424B39625DBD10560BFD7C2426434B (Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3683332DC59192F54697C04630385184E643D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// mMovement = new Vector3Int(0, 0, 4);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), 0, 0, 4, /*hidden argument*/NULL);
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mMovement_12(L_3);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_Bishop");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral9C3683332DC59192F54697C04630385184E643D8, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bishop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bishop__ctor_m93C3C810F8847A3E8CCC905F6B03FF5DEBC59AD7 (Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97 * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void Board::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_Create_mFDA791DC853CF63291A7D39E3E35414D27BF8160 (Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149_m354622F5DA296C2BD10B3372BA2A2841D7A111E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B11_0 = 0;
	{
		// for (int y = 0; y < 8; y++)
		V_0 = 0;
		goto IL_0073;
	}

IL_0004:
	{
		// for (int x = 0; x < 8; x++)
		V_1 = 0;
		goto IL_006b;
	}

IL_0008:
	{
		// GameObject newCell = Instantiate(mCellPrefab, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mCellPrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_2 = L_2;
		// RectTransform rectTransform = newCell.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_2;
		NullCheck(L_3);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_3, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		// rectTransform.anchoredPosition = new Vector2((x * 100) + 50, (y * 100) + 50);
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)100))), (int32_t)((int32_t)50))))), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)100))), (int32_t)((int32_t)50))))), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_4, L_7, /*hidden argument*/NULL);
		// mAllCells[x, y] = newCell.GetComponent<Cell>();
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_8 = __this->get_mAllCells_5();
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_2;
		NullCheck(L_11);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_12;
		L_12 = GameObject_GetComponent_TisCell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149_m354622F5DA296C2BD10B3372BA2A2841D7A111E2(L_11, /*hidden argument*/GameObject_GetComponent_TisCell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149_m354622F5DA296C2BD10B3372BA2A2841D7A111E2_RuntimeMethod_var);
		NullCheck(L_8);
		(L_8)->SetAt(L_9, L_10, L_12);
		// mAllCells[x, y].Setup(new Vector2Int(x, y), this);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_13 = __this->get_mAllCells_5();
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_19), L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		Cell_Setup_m90F9D23E40CD77B0E85E6FC989FB04215C369DDF(L_16, L_19, __this, /*hidden argument*/NULL);
		// for (int x = 0; x < 8; x++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006b:
	{
		// for (int x = 0; x < 8; x++)
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)8)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int y = 0; y < 8; y++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0073:
	{
		// for (int y = 0; y < 8; y++)
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int x = 0; x < 8; x += 2)
		V_3 = 0;
		goto IL_00d8;
	}

IL_007b:
	{
		// for (int y = 0; y < 8; y++)
		V_4 = 0;
		goto IL_00cf;
	}

IL_0080:
	{
		// int offset = (y % 2 != 0) ? 0 : 1;
		int32_t L_24 = V_4;
		if (((int32_t)((int32_t)L_24%(int32_t)2)))
		{
			goto IL_0089;
		}
	}
	{
		G_B11_0 = 1;
		goto IL_008a;
	}

IL_0089:
	{
		G_B11_0 = 0;
	}

IL_008a:
	{
		V_5 = G_B11_0;
		// int finalX = x + offset;
		int32_t L_25 = V_3;
		int32_t L_26 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
		// mAllCells[finalX, y].GetComponent<Image>().color = new Color32(230,220,187, 255);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_27 = __this->get_mAllCells_5();
		int32_t L_28 = V_6;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_30;
		L_30 = (L_27)->GetAt(L_28, L_29);
		NullCheck(L_30);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31;
		L_31 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_30, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_32), (uint8_t)((int32_t)230), (uint8_t)((int32_t)220), (uint8_t)((int32_t)187), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_33);
		// for (int y = 0; y < 8; y++)
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cf:
	{
		// for (int y = 0; y < 8; y++)
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) < ((int32_t)8)))
		{
			goto IL_0080;
		}
	}
	{
		// for (int x = 0; x < 8; x += 2)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)2));
	}

IL_00d8:
	{
		// for (int x = 0; x < 8; x += 2)
		int32_t L_37 = V_3;
		if ((((int32_t)L_37) < ((int32_t)8)))
		{
			goto IL_007b;
		}
	}
	{
		// }
		return;
	}
}
// CellState Board::ValidateCell(System.Int32,System.Int32,BasePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB (Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * __this, int32_t ___targetX0, int32_t ___targetY1, BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * ___checkingPiece2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * V_0 = NULL;
	{
		// if (targetX < 0 || targetX > 7)
		int32_t L_0 = ___targetX0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___targetX0;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		// return CellState.OutOfBounds;
		return (int32_t)(4);
	}

IL_000a:
	{
		// if (targetY < 0 || targetY > 7)
		int32_t L_2 = ___targetY1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = ___targetY1;
		if ((((int32_t)L_3) <= ((int32_t)7)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return CellState.OutOfBounds;
		return (int32_t)(4);
	}

IL_0014:
	{
		// Cell targetCell = mAllCells[targetX, targetY];
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_4 = __this->get_mAllCells_5();
		int32_t L_5 = ___targetX0;
		int32_t L_6 = ___targetY1;
		NullCheck(L_4);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		V_0 = L_7;
		// if (targetCell.mCurrentPiece != null)
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_8 = V_0;
		NullCheck(L_8);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_9 = L_8->get_mCurrentPiece_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// if (checkingPiece.mColor == targetCell.mCurrentPiece.mColor)
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_11 = ___checkingPiece2;
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = L_11->get_mColor_5();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_13 = V_0;
		NullCheck(L_13);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_14 = L_13->get_mCurrentPiece_8();
		NullCheck(L_14);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = L_14->get_mColor_5();
		bool L_16;
		L_16 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_12, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		// return CellState.Friendly;
		return (int32_t)(1);
	}

IL_004a:
	{
		// if (checkingPiece.mColor != targetCell.mCurrentPiece.mColor)
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_17 = ___checkingPiece2;
		NullCheck(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = L_17->get_mColor_5();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_19 = V_0;
		NullCheck(L_19);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_20 = L_19->get_mCurrentPiece_8();
		NullCheck(L_20);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = L_20->get_mColor_5();
		bool L_22;
		L_22 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_18, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		// return CellState.Enemy;
		return (int32_t)(2);
	}

IL_0064:
	{
		// return CellState.Free;
		return (int32_t)(3);
	}
}
// System.Void Board::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_m88EC68E70635365D5168FCC7D6A2B4FE3915B944 (Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cell[,] mAllCells = new Cell[8, 8];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)8, (il2cpp_array_size_t)8 };
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_0 = (CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C*)GenArrayNew(CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C_il2cpp_TypeInfo_var, L_1);
		__this->set_mAllCells_5(L_0);
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
// System.Void Cell::Setup(UnityEngine.Vector2Int,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Setup_m90F9D23E40CD77B0E85E6FC989FB04215C369DDF (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___newBoardPosition0, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___newBoard1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mBoardPosition = newBoardPosition;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___newBoardPosition0;
		__this->set_mBoardPosition_5(L_0);
		// mBoard = newBoard;
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_1 = ___newBoard1;
		__this->set_mBoard_6(L_1);
		// mRectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_mRectTransform_7(L_2);
		// }
		return;
	}
}
// System.Void Cell::RemovePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_RemovePiece_m63ED4E94BEFA90D285C2574D7145668B6ECD8CF7 (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mCurrentPiece != null)
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_0 = __this->get_mCurrentPiece_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// mCurrentPiece.Kill();
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_2 = __this->get_mCurrentPiece_8();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(40 /* System.Void BasePiece::Kill() */, L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m8A64B8FBB74A0ECF5EE0871E80CD28E644CBAAF7 (Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int mBoardPosition = Vector2Int.zero;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0;
		L_0 = Vector2Int_get_zero_m89F24AE488182BAB38B381B445B8868B3DD5A2AE(/*hidden argument*/NULL);
		__this->set_mBoardPosition_5(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::PlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayButton_mD4881B94140D3A8E1322C92486207587F17C9ADC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30353B831C1BFBC26332261881BA4D57E31A8E93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PlayScene");  // for opening Mainscene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral30353B831C1BFBC26332261881BA4D57E31A8E93, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ScreenshotYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ScreenshotYes_mC23C619800BA455D07F0383A4ACE00479C675719 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8F499EDDDE2E4F31BA0115167D57E72466B1B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("RulesScene");  // for opening rulescene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAB8F499EDDDE2E4F31BA0115167D57E72466B1B3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::VideoYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_VideoYes_mF82125269084ABC7257A0F7D2B87122AF85AD449 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65AA3AE180BAA2A1B31BD832C512CB1B09F46EBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoScene");  // for opening rulescene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral65AA3AE180BAA2A1B31BD832C512CB1B09F46EBF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_exit_m97B79D9A04041F43ADD11A03BB3BF94FDE2B4BD9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// System.Void GameManager2::PopupYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_PopupYes_mA8E8D31A420B0934265B44A7A5A3EB6DA58126BF (GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2_Start_mDD4755ABD533B43A664071F80BB6748133BCFACD (GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E * __this, const RuntimeMethod* method)
{
	{
		// mBoard.Create();
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_0 = __this->get_mBoard_4();
		NullCheck(L_0);
		Board_Create_mFDA791DC853CF63291A7D39E3E35414D27BF8160(L_0, /*hidden argument*/NULL);
		// mPieceManager.Setup(mBoard);
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_1 = __this->get_mPieceManager_5();
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_2 = __this->get_mBoard_4();
		NullCheck(L_1);
		PieceManager_Setup_mEE70262866C6629A845542996795C039319A5004(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager2__ctor_mF3D6197A83FE6DAEF59945BB3F1CA05D1473A6F3 (GameManager2_tF3E2C11FD70B9AD44151BDCA08AD5F6A16164A1E * __this, const RuntimeMethod* method)
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
// System.Void GameManager3::PopupYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager3_PopupYes_mEC0F2583AC8C661D497B3C8F84A63B11B71A38F9 (GameManager3_tCD2A270F872193356FCEF44A1E53F77DC65ED517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager3__ctor_mDB584E023AEA92AAFE6A484945809E9D5F279BFA (GameManager3_tCD2A270F872193356FCEF44A1E53F77DC65ED517 * __this, const RuntimeMethod* method)
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
// System.Void GameManager4::Rematch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager4_Rematch_m5D0A8C3F78898D7C8B8B6ECB23305A91FE223222 (GameManager4_tAEF6626FFDD4CD98C6B55BF1001E510CFB8D6E0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30353B831C1BFBC26332261881BA4D57E31A8E93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("PlayScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral30353B831C1BFBC26332261881BA4D57E31A8E93, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager4::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager4_Exit_mC625686C0D89F15A3700443A1DB7178B26F56443 (GameManager4_tAEF6626FFDD4CD98C6B55BF1001E510CFB8D6E0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager4__ctor_m40B8E9B68A863D41B76DDA299B28F342EFEBD8CE (GameManager4_tAEF6626FFDD4CD98C6B55BF1001E510CFB8D6E0A * __this, const RuntimeMethod* method)
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
// System.Void King::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_Setup_m6B170EAFA9B28EF059C48F8B6538A87B7896A92D (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C064B60E5E4A9858E8C27B7B9113D852C25C01B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// mMovement = new Vector3Int(1, 1, 1);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), 1, 1, 1, /*hidden argument*/NULL);
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mMovement_12(L_3);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_King");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral2C064B60E5E4A9858E8C27B7B9113D852C25C01B, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void King::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_Kill_mDB43AC44DC9DF3F5E5DFD0EE1E295B0E81EA6F5C (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Kill();
		BasePiece_Kill_m8F3428DA6A9E903FEF7C59652A3B453678F0EFC2(__this, /*hidden argument*/NULL);
		// mPieceManager.mIsKingAlive = false;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mPieceManager_10();
		NullCheck(L_0);
		L_0->set_mIsKingAlive_4((bool)0);
		// SceneManager.LoadScene("GameOver");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void King::CheckPathing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_CheckPathing_mD40932FB412AD307D04D9D9986BAE3507C5DC87A (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, const RuntimeMethod* method)
{
	{
		// base.CheckPathing();
		BasePiece_CheckPathing_m512F0B6EDC2B6CC053446EC9C25CFA33E9E41E5F(__this, /*hidden argument*/NULL);
		// mRightRook = GetRook(1, 3);
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_0;
		L_0 = King_GetRook_mDFC03DC42D2A44957F7A0D9BB37005666BD5018F(__this, 1, 3, /*hidden argument*/NULL);
		__this->set_mRightRook_15(L_0);
		// mLeftRook = GetRook(-1, 4);
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_1;
		L_1 = King_GetRook_mDFC03DC42D2A44957F7A0D9BB37005666BD5018F(__this, (-1), 4, /*hidden argument*/NULL);
		__this->set_mLeftRook_14(L_1);
		// }
		return;
	}
}
// System.Void King::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King_Move_mFDA60C8D70DE5A13FFF8FCB9D9C5F4FD0BBCE4AD (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, const RuntimeMethod* method)
{
	{
		// base.Move();
		BasePiece_Move_m0AC615BC132FA20289EDA5CB0B38542E65A50576(__this, /*hidden argument*/NULL);
		// if (CanCastle(mLeftRook))
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_0 = __this->get_mLeftRook_14();
		bool L_1;
		L_1 = King_CanCastle_mAEB341592CB020F045FEF46B7FC3F516CD257C43(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// mLeftRook.Castle();
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_2 = __this->get_mLeftRook_14();
		NullCheck(L_2);
		Rook_Castle_mCA726E7531CB6CCF40BB07F0E34336802E545974(L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// if (CanCastle(mRightRook))
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_3 = __this->get_mRightRook_15();
		bool L_4;
		L_4 = King_CanCastle_mAEB341592CB020F045FEF46B7FC3F516CD257C43(__this, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// mRightRook.Castle();
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_5 = __this->get_mRightRook_15();
		NullCheck(L_5);
		Rook_Castle_mCA726E7531CB6CCF40BB07F0E34336802E545974(L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Boolean King::CanCastle(Rook)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool King_CanCastle_mAEB341592CB020F045FEF46B7FC3F516CD257C43 (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * ___rook0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rook == null)
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_0 = ___rook0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (rook.mCastleTriggerCell != mCurrentCell)
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_2 = ___rook0;
		NullCheck(L_2);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = L_2->get_mCastleTriggerCell_14();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_4 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// if (rook.mColor != mColor || !rook.mIsFirstMove)
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_6 = ___rook0;
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)L_6)->get_mColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mColor_5();
		bool L_9;
		L_9 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_10 = ___rook0;
		NullCheck(L_10);
		bool L_11 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)L_10)->get_mIsFirstMove_6();
		if (L_11)
		{
			goto IL_003d;
		}
	}

IL_003b:
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// return true;
		return (bool)1;
	}
}
// Rook King::GetRook(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * King_GetRook_mDFC03DC42D2A44957F7A0D9BB37005666BD5018F (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, int32_t ___direction0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * V_2 = NULL;
	Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!mIsFirstMove)
		bool L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mIsFirstMove_6();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 *)NULL;
	}

IL_000a:
	{
		// int currentX = mCurrentCell.mBoardPosition.x;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_1 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_1);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = L_1->get_address_of_mBoardPosition_5();
		int32_t L_3;
		L_3 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// int currentY = mCurrentCell.mBoardPosition.y;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_4 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_4);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_5 = L_4->get_address_of_mBoardPosition_5();
		int32_t L_6;
		L_6 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int i = 1; i < count; i++)
		V_4 = 1;
		goto IL_0058;
	}

IL_0031:
	{
		// int offsetX = currentX + (i * direction);
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		int32_t L_9 = ___direction0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))));
		// CellState cellState = mCurrentCell.mBoard.ValidateCell(offsetX, currentY, this);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_10 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_10);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_11 = L_10->get_mBoard_6();
		int32_t L_12 = V_5;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB(L_11, L_12, L_13, __this, /*hidden argument*/NULL);
		// if (cellState != CellState.Free)
		if ((((int32_t)L_14) == ((int32_t)3)))
		{
			goto IL_0052;
		}
	}
	{
		// return null;
		return (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 *)NULL;
	}

IL_0052:
	{
		// for (int i = 1; i < count; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 1; i < count; i++)
		int32_t L_16 = V_4;
		int32_t L_17 = ___count1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0031;
		}
	}
	{
		// Cell rookCell = mCurrentCell.mBoard.mAllCells[currentX + (count * direction), currentY];
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_18 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_18);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_19 = L_18->get_mBoard_6();
		NullCheck(L_19);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_20 = L_19->get_mAllCells_5();
		int32_t L_21 = V_0;
		int32_t L_22 = ___count1;
		int32_t L_23 = ___direction0;
		int32_t L_24 = V_1;
		NullCheck(L_20);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_25;
		L_25 = (L_20)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_23)))), L_24);
		V_2 = L_25;
		// Rook rook = null;
		V_3 = (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 *)NULL;
		// if (rookCell.mCurrentPiece is Rook)
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_26 = V_2;
		NullCheck(L_26);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_27 = L_26->get_mCurrentPiece_8();
		if (!((Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 *)IsInstClass((RuntimeObject*)L_27, Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		// rook = (Rook)rookCell.mCurrentPiece;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_28 = V_2;
		NullCheck(L_28);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_29 = L_28->get_mCurrentPiece_8();
		V_3 = ((Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 *)CastclassClass((RuntimeObject*)L_29, Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_il2cpp_TypeInfo_var));
	}

IL_0094:
	{
		// if (rook != null)
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_30, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00ae;
		}
	}
	{
		// mHighlightedCells.Add(rook.mCastleTriggerCell);
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_32 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mHighlightedCells_13();
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_33 = V_3;
		NullCheck(L_33);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_34 = L_33->get_mCastleTriggerCell_14();
		NullCheck(L_32);
		List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A(L_32, L_34, /*hidden argument*/List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// return rook;
		Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * L_35 = V_3;
		return L_35;
	}
}
// System.Void King::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void King__ctor_m928AA3E86E3C2071EECB6DCD071F40251F6D0E54 (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void Knight::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Setup_mCC315D93C6D02A7518D37E329F44BC8078EED4CD (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral771838CD68BAC97CD5DE5ADA542099A2E974B809);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_Knight");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3;
		L_3 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4;
		L_4 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral771838CD68BAC97CD5DE5ADA542099A2E974B809, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Knight::CreateCellPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_CreateCellPath_m5BBCB2F50069A32C459DD9C63139C950CE11D11F (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, int32_t ___flipper0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int currentX = mCurrentCell.mBoardPosition.x;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = L_0->get_address_of_mBoardPosition_5();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int currentY = mCurrentCell.mBoardPosition.y;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_3);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = L_3->get_address_of_mBoardPosition_5();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// MatchesState(currentX - 1 , currentY + (2 * flipper));
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___flipper0;
		Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_8)))), /*hidden argument*/NULL);
		// MatchesState(currentX - 3, currentY + (2 * flipper));
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = ___flipper0;
		Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)3)), ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_11)))), /*hidden argument*/NULL);
		// MatchesState(currentX + 3, currentY + (2 * flipper));
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = ___flipper0;
		Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)), ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_14)))), /*hidden argument*/NULL);
		// MatchesState(currentX + 1, currentY + (2 * flipper));
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = ___flipper0;
		Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_17)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Knight::CheckPathing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_CheckPathing_m1C65CF01519AC649A09D7AEA54B8746A5EDD4B76 (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, const RuntimeMethod* method)
{
	{
		// CreateCellPath(1);
		Knight_CreateCellPath_m5BBCB2F50069A32C459DD9C63139C950CE11D11F(__this, 1, /*hidden argument*/NULL);
		// CreateCellPath(-1);
		Knight_CreateCellPath_m5BBCB2F50069A32C459DD9C63139C950CE11D11F(__this, (-1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Knight::MatchesState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_MatchesState_m39F6F41B09CB3B808BACD609F5B43C7CF2E7164C (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, int32_t ___targetX0, int32_t ___targetY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CellState cellState = CellState.None;
		V_0 = 0;
		// cellState = mCurrentCell.mBoard.ValidateCell(targetX, targetY, this);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_1 = L_0->get_mBoard_6();
		int32_t L_2 = ___targetX0;
		int32_t L_3 = ___targetY1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB(L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (cellState != CellState.Friendly && cellState != CellState.OutOfBounds)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_0040;
		}
	}
	{
		// mHighlightedCells.Add(mCurrentCell.mBoard.mAllCells[targetX, targetY]);
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_7 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mHighlightedCells_13();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_8 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_8);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_9 = L_8->get_mBoard_6();
		NullCheck(L_9);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_10 = L_9->get_mAllCells_5();
		int32_t L_11 = ___targetX0;
		int32_t L_12 = ___targetY1;
		NullCheck(L_10);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_13;
		L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_7);
		List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A(L_7, L_13, /*hidden argument*/List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Knight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight__ctor_m96588E6EF75510224D1D25540C3C8A31E8C4E2B0 (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07 * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void Pawn::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Setup_m8C6F56D8746027B833D5780C3F377B03FDAFEF92 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E0DF8F1EC018B455A9C1C14006E4CF53967D77);
		s_Il2CppMethodInitialized = true;
	}
	Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * G_B2_0 = NULL;
	Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * G_B1_0 = NULL;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * G_B3_1 = NULL;
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// mIsFirstMove = true;
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mIsFirstMove_6((bool)1);
		// mMovement = mColor == Color.white ? new Vector3Int(0, 1, 1) : new Vector3Int(0, -1, -1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		bool L_5;
		L_5 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_3, L_4, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_6), 0, (-1), (-1), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_002d:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_7), 0, 1, 1, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		NullCheck(G_B3_1);
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)G_B3_1)->set_mMovement_12(G_B3_0);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_Pawn");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9;
		L_9 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral50E0DF8F1EC018B455A9C1C14006E4CF53967D77, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_8);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pawn::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_Move_mC44C0B451FB91BA1E99A98BFC13B769076752AA8 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, const RuntimeMethod* method)
{
	{
		// base.Move();
		BasePiece_Move_m0AC615BC132FA20289EDA5CB0B38542E65A50576(__this, /*hidden argument*/NULL);
		// mIsFirstMove = false;
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mIsFirstMove_6((bool)0);
		// CheckForPromotion();
		Pawn_CheckForPromotion_m49C3A29EF830AB67737B8ABBDEAC6F2BACAD1C38(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Pawn::MatchesState(System.Int32,System.Int32,CellState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, int32_t ___targetX0, int32_t ___targetY1, int32_t ___targetState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cellState = mCurrentCell.mBoard.ValidateCell(targetX, targetY, this);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_1 = L_0->get_mBoard_6();
		int32_t L_2 = ___targetX0;
		int32_t L_3 = ___targetY1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB(L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		// if (cellState == targetState)
		int32_t L_5 = ___targetState2;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003a;
		}
	}
	{
		// mHighlightedCells.Add(mCurrentCell.mBoard.mAllCells[targetX, targetY]);
		List_1_t71D1CF84595A2593C683CAF866A69F95736C59D6 * L_6 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mHighlightedCells_13();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_7 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_7);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_8 = L_7->get_mBoard_6();
		NullCheck(L_8);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_9 = L_8->get_mAllCells_5();
		int32_t L_10 = ___targetX0;
		int32_t L_11 = ___targetY1;
		NullCheck(L_9);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_6);
		List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A(L_6, L_12, /*hidden argument*/List_1_Add_mAD069A065A4F6F43BAE057E47BE471DBF621F51A_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Pawn::CheckForPromotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_CheckForPromotion_m49C3A29EF830AB67737B8ABBDEAC6F2BACAD1C38 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int currentX = mCurrentCell.mBoardPosition.x;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = L_0->get_address_of_mBoardPosition_5();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int currentY = mCurrentCell.mBoardPosition.y;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_3);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = L_3->get_address_of_mBoardPosition_5();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// CellState cellState = mCurrentCell.mBoard.ValidateCell(currentX, currentY + mMovement.y, this);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_6 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_6);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_7 = L_6->get_mBoard_6();
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_10 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_11;
		L_11 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_12;
		L_12 = Board_ValidateCell_mAB5CA1E923C60576EB0A9FE01C1D12A2558F65CB(L_7, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), __this, /*hidden argument*/NULL);
		// if (cellState == CellState.OutOfBounds)
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_0069;
		}
	}
	{
		// Color spriteColor = GetComponent<Image>().color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13;
		L_13 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		V_2 = L_14;
		// mPieceManager.PromotePiece(this, mCurrentCell, mColor, spriteColor);
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_15 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mPieceManager_10();
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_16 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mColor_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = V_2;
		NullCheck(L_15);
		PieceManager_PromotePiece_m5BBDB24759522730A46CFBC6DE8F88B73DB724C8(L_15, __this, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Pawn::CheckPathing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn_CheckPathing_m92E79EE037E1EBC512850332F20F2D3E6844E78B (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int currentX = mCurrentCell.mBoardPosition.x;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = L_0->get_address_of_mBoardPosition_5();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int currentY = mCurrentCell.mBoardPosition.y;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_3 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_3);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = L_3->get_address_of_mBoardPosition_5();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// MatchesState(currentX - mMovement.z, currentY + mMovement.z, CellState.Enemy);
		int32_t L_6 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_7 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_8;
		L_8 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_10 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_11;
		L_11 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)), ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), 2, /*hidden argument*/NULL);
		// if (MatchesState(currentX, currentY + mMovement.y, CellState.Free))
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_15 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_16;
		L_16 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1(__this, L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16)), 3, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		// if (mIsFirstMove)
		bool L_18 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mIsFirstMove_6();
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// MatchesState(currentX, currentY + (mMovement.y * 2), CellState.Free);
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_21 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_22;
		L_22 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1(__this, L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2)))), 3, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// MatchesState(currentX + mMovement.z, currentY + mMovement.z, CellState.Enemy);
		int32_t L_24 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_25 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_26;
		L_26 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_28 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_address_of_mMovement_12();
		int32_t L_29;
		L_29 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)L_28, /*hidden argument*/NULL);
		bool L_30;
		L_30 = Pawn_MatchesState_mDB44A1B4D21103A800A6F3E5F1D4ACDE7DB33BA1(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_26)), ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_29)), 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pawn__ctor_mD2BC81D442D4B11D6B048CC50F9A54B62C1256E0 (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void PieceManager::Setup(Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_Setup_mEE70262866C6629A845542996795C039319A5004 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board0, const RuntimeMethod* method)
{
	{
		// mWhitePieces = CreatePieces(Color.white, new Color32(80, 124, 159, 255),board);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_1), (uint8_t)((int32_t)80), (uint8_t)((int32_t)124), (uint8_t)((int32_t)159), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_2 = ___board0;
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_3;
		L_3 = PieceManager_CreatePieces_m8952E57EC99D5131EDF1CD690DC35D140449BD45(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_mWhitePieces_6(L_3);
		// mBlackPieces = CreatePieces(Color.black, new Color32(210, 95, 64, 255),board);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_5), (uint8_t)((int32_t)210), (uint8_t)((int32_t)95), (uint8_t)((int32_t)64), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_6 = ___board0;
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_7;
		L_7 = PieceManager_CreatePieces_m8952E57EC99D5131EDF1CD690DC35D140449BD45(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_mBlackPieces_7(L_7);
		// PlacePieces(1, 0, mWhitePieces, board);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_8 = __this->get_mWhitePieces_6();
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_9 = ___board0;
		PieceManager_PlacePieces_mF262D9C7B87A9DAEA7F281A879BA0322A7575161(__this, 1, 0, L_8, L_9, /*hidden argument*/NULL);
		// PlacePieces(6, 7, mBlackPieces, board);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_10 = __this->get_mBlackPieces_7();
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_11 = ___board0;
		PieceManager_PlacePieces_mF262D9C7B87A9DAEA7F281A879BA0322A7575161(__this, 6, 7, L_10, L_11, /*hidden argument*/NULL);
		// SwitchSides(Color.black);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		PieceManager_SwitchSides_m38B2F01C27833B16066590EBD267DD381111DB3C(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<BasePiece> PieceManager::CreatePieces(UnityEngine.Color,UnityEngine.Color32,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * PieceManager_CreatePieces_m8952E57EC99D5131EDF1CD690DC35D140449BD45 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___teamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___spriteColor1, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Type_t * V_3 = NULL;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * V_4 = NULL;
	{
		// List<BasePiece> newPieces = new List<BasePiece>();
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_0 = (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *)il2cpp_codegen_object_new(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_il2cpp_TypeInfo_var);
		List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787(L_0, /*hidden argument*/List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < mPieceOrder.Length; i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_000a:
	{
		// string key = mPieceOrder[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_mPieceOrder_9();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Type pieceType = mPieceLibrary[key];
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_5 = __this->get_mPieceLibrary_10();
		String_t* L_6 = V_2;
		NullCheck(L_5);
		Type_t * L_7;
		L_7 = Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m5EE5B257E761957633252673F7CE743880A8E17C_RuntimeMethod_var);
		V_3 = L_7;
		// BasePiece newPiece = CreatePiece(pieceType);
		Type_t * L_8 = V_3;
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_9;
		L_9 = PieceManager_CreatePiece_m08F433614C2D0DA7F2AF7CB4AFF5B62FBDA311F9(__this, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		// newPieces.Add(newPiece);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_10 = V_0;
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_11 = V_4;
		NullCheck(L_10);
		List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9(L_10, L_11, /*hidden argument*/List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9_RuntimeMethod_var);
		// newPiece.Setup(teamColor, spriteColor, this);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_12 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = ___teamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_14 = ___spriteColor1;
		NullCheck(L_12);
		VirtActionInvoker3< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * >::Invoke(38 /* System.Void BasePiece::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager) */, L_12, L_13, L_14, __this);
		// for (int i = 0; i < mPieceOrder.Length; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003f:
	{
		// for (int i = 0; i < mPieceOrder.Length; i++)
		int32_t L_16 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = __this->get_mPieceOrder_9();
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// return newPieces;
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_18 = V_0;
		return L_18;
	}
}
// BasePiece PieceManager::CreatePiece(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * PieceManager_CreatePiece_m08F433614C2D0DA7F2AF7CB4AFF5B62FBDA311F9 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Type_t * ___pieceType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject newPieceObject = Instantiate(mPiecePrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mPiecePrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// newPieceObject.transform.SetParent(transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_3, L_4, /*hidden argument*/NULL);
		// newPieceObject.transform.localScale = new Vector3(1, 1, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_2;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// newPieceObject.transform.localRotation = Quaternion.identity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_5;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_10, /*hidden argument*/NULL);
		// BasePiece newPiece = (BasePiece)newPieceObject.AddComponent(pieceType);
		Type_t * L_11 = ___pieceType0;
		NullCheck(L_8);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_12;
		L_12 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_8, L_11, /*hidden argument*/NULL);
		// return newPiece;
		return ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)CastclassClass((RuntimeObject*)L_12, BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C_il2cpp_TypeInfo_var));
	}
}
// System.Void PieceManager::PlacePieces(System.Int32,System.Int32,System.Collections.Generic.List`1<BasePiece>,Board)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PlacePieces_mF262D9C7B87A9DAEA7F281A879BA0322A7575161 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, int32_t ___pawnRow0, int32_t ___royaltyRow1, List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___pieces2, Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * ___board3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 8; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_0004:
	{
		// pieces[i].Place(board.mAllCells[i, pawnRow]);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_0 = ___pieces2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_2;
		L_2 = List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_RuntimeMethod_var);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_3 = ___board3;
		NullCheck(L_3);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_4 = L_3->get_mAllCells_5();
		int32_t L_5 = V_0;
		int32_t L_6 = ___pawnRow0;
		NullCheck(L_4);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		NullCheck(L_2);
		VirtActionInvoker1< Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * >::Invoke(39 /* System.Void BasePiece::Place(Cell) */, L_2, L_7);
		// pieces[i + 8].Place(board.mAllCells[i, royaltyRow]);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_8 = ___pieces2;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_10;
		L_10 = List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_inline(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)8)), /*hidden argument*/List_1_get_Item_m1FEB6326767FDDBF19649703699DC624D60E7C58_RuntimeMethod_var);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_11 = ___board3;
		NullCheck(L_11);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_12 = L_11->get_mAllCells_5();
		int32_t L_13 = V_0;
		int32_t L_14 = ___royaltyRow1;
		NullCheck(L_12);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_15;
		L_15 = (L_12)->GetAt(L_13, L_14);
		NullCheck(L_10);
		VirtActionInvoker1< Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * >::Invoke(39 /* System.Void BasePiece::Place(Cell) */, L_10, L_15);
		// for (int i = 0; i < 8; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PieceManager::SetInteractive(System.Collections.Generic.List`1<BasePiece>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_SetInteractive_mBA1CECBCCE9A8F1661611B2020846626B39A394A (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * ___allPieces0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (BasePiece piece in allPieces)
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_0 = ___allPieces0;
		NullCheck(L_0);
		Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  L_1;
		L_1 = List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862(L_0, /*hidden argument*/List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0016;
		}

IL_0009:
		{
			// foreach (BasePiece piece in allPieces)
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_2;
			L_2 = Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
			// piece.enabled = value;
			bool L_3 = ___value1;
			NullCheck(L_2);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, L_3, /*hidden argument*/NULL);
		}

IL_0016:
		{
			// foreach (BasePiece piece in allPieces)
			bool L_4;
			L_4 = Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PieceManager::SwitchSides(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_SwitchSides_m38B2F01C27833B16066590EBD267DD381111DB3C (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B9_0 = NULL;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B10_1 = NULL;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B12_0 = NULL;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * G_B13_1 = NULL;
	{
		// if (!mIsKingAlive)
		bool L_0 = __this->get_mIsKingAlive_4();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// ResetPieces();
		PieceManager_ResetPieces_mEDA32F7E9AAD6A4EAAC9B24C43B3A5EE3EAE2D23(__this, /*hidden argument*/NULL);
		// mIsKingAlive = true;
		__this->set_mIsKingAlive_4((bool)1);
		// color = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		___color0 = L_1;
	}

IL_001c:
	{
		// bool isBlackTurn = color == Color.white ? true : false;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		bool L_4;
		L_4 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 1;
	}

IL_002d:
	{
		V_0 = (bool)G_B5_0;
		// SetInteractive(mWhitePieces, !isBlackTurn);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_5 = __this->get_mWhitePieces_6();
		bool L_6 = V_0;
		PieceManager_SetInteractive_mBA1CECBCCE9A8F1661611B2020846626B39A394A(__this, L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SetInteractive(mBlackPieces, isBlackTurn);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_7 = __this->get_mBlackPieces_7();
		bool L_8 = V_0;
		PieceManager_SetInteractive_mBA1CECBCCE9A8F1661611B2020846626B39A394A(__this, L_7, L_8, /*hidden argument*/NULL);
		// foreach (BasePiece piece in mPromotedPieces)
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_9 = __this->get_mPromotedPieces_8();
		NullCheck(L_9);
		Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  L_10;
		L_10 = List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862(L_9, /*hidden argument*/List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_0059:
		{
			// foreach (BasePiece piece in mPromotedPieces)
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_11;
			L_11 = Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
			// bool isBlackPiece = piece.mColor != Color.white ? true : false;
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_12 = L_11;
			NullCheck(L_12);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = L_12->get_mColor_5();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
			L_14 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			bool L_15;
			L_15 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_13, L_14, /*hidden argument*/NULL);
			G_B8_0 = L_12;
			if (L_15)
			{
				G_B9_0 = L_12;
				goto IL_0075;
			}
		}

IL_0072:
		{
			G_B10_0 = 0;
			G_B10_1 = G_B8_0;
			goto IL_0076;
		}

IL_0075:
		{
			G_B10_0 = 1;
			G_B10_1 = G_B9_0;
		}

IL_0076:
		{
			// bool isPartOfTeam = isBlackPiece == true ? isBlackTurn : !isBlackTurn;
			G_B11_0 = G_B10_1;
			if (G_B10_0)
			{
				G_B12_0 = G_B10_1;
				goto IL_007e;
			}
		}

IL_0078:
		{
			bool L_16 = V_0;
			G_B13_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
			G_B13_1 = G_B11_0;
			goto IL_007f;
		}

IL_007e:
		{
			bool L_17 = V_0;
			G_B13_0 = ((int32_t)(L_17));
			G_B13_1 = G_B12_0;
		}

IL_007f:
		{
			V_2 = (bool)G_B13_0;
			// piece.enabled = isPartOfTeam;
			bool L_18 = V_2;
			NullCheck(G_B13_1);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(G_B13_1, L_18, /*hidden argument*/NULL);
		}

IL_0086:
		{
			// foreach (BasePiece piece in mPromotedPieces)
			bool L_19;
			L_19 = Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0059;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0x9F, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(145)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9F, IL_009f)
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void PieceManager::ResetPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_ResetPieces_mEDA32F7E9AAD6A4EAAC9B24C43B3A5EE3EAE2D23 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD793D9D46CB263C43D7B733B627D50BEE750C122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (BasePiece piece in mPromotedPieces)
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_0 = __this->get_mPromotedPieces_8();
		NullCheck(L_0);
		Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  L_1;
		L_1 = List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862(L_0, /*hidden argument*/List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_000e:
		{
			// foreach (BasePiece piece in mPromotedPieces)
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_2;
			L_2 = Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
			// piece.Kill();
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_3 = L_2;
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(40 /* System.Void BasePiece::Kill() */, L_3);
			// Destroy(piece.gameObject);
			NullCheck(L_3);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		}

IL_0025:
		{
			// foreach (BasePiece piece in mPromotedPieces)
			bool L_5;
			L_5 = Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// mPromotedPieces.Clear();
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_6 = __this->get_mPromotedPieces_8();
		NullCheck(L_6);
		List_1_Clear_mD793D9D46CB263C43D7B733B627D50BEE750C122(L_6, /*hidden argument*/List_1_Clear_mD793D9D46CB263C43D7B733B627D50BEE750C122_RuntimeMethod_var);
		// foreach (BasePiece piece in mWhitePieces)
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_7 = __this->get_mWhitePieces_6();
		NullCheck(L_7);
		Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  L_8;
		L_8 = List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862(L_7, /*hidden argument*/List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0057:
		{
			// foreach (BasePiece piece in mWhitePieces)
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_9;
			L_9 = Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
			// piece.Reset();
			NullCheck(L_9);
			BasePiece_Reset_mE33B16E2ED703AC6E7EE2AE28EE668FCC8AA91F4(L_9, /*hidden argument*/NULL);
		}

IL_0063:
		{
			// foreach (BasePiece piece in mWhitePieces)
			bool L_10;
			L_10 = Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0057;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// foreach (BasePiece piece in mBlackPieces)
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_11 = __this->get_mBlackPieces_7();
		NullCheck(L_11);
		Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84  L_12;
		L_12 = List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862(L_11, /*hidden argument*/List_1_GetEnumerator_mCDF9E2C89301BD53943B9221117DE7B67867F862_RuntimeMethod_var);
		V_0 = L_12;
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_008a:
		{
			// foreach (BasePiece piece in mBlackPieces)
			BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_13;
			L_13 = Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_inline((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA4F63A8CDCB6CCB79A7737F41A6951F4C4BE629B_RuntimeMethod_var);
			// piece.Reset();
			NullCheck(L_13);
			BasePiece_Reset_mE33B16E2ED703AC6E7EE2AE28EE668FCC8AA91F4(L_13, /*hidden argument*/NULL);
		}

IL_0096:
		{
			// foreach (BasePiece piece in mBlackPieces)
			bool L_14;
			L_14 = Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFC7B1FBF684BB23C3FF7507E061F292DEBF139C4_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_008a;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A((Enumerator_t91374201F099D4D48F5DBCFCE8B05B089276AB84 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m028F81A9E0306F9A1A868EEF1A94700D7C7B1D0A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void PieceManager::PromotePiece(Pawn,Cell,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PromotePiece_m5BBDB24759522730A46CFBC6DE8F88B73DB724C8 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * ___pawn0, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___cell1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___teamColor2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___spriteColor3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * V_0 = NULL;
	{
		// pawn.Kill();
		Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D * L_0 = ___pawn0;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(40 /* System.Void BasePiece::Kill() */, L_0);
		// BasePiece promotedPiece = CreatePiece(typeof(Queen));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_3;
		L_3 = PieceManager_CreatePiece_m08F433614C2D0DA7F2AF7CB4AFF5B62FBDA311F9(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// promotedPiece.Setup(teamColor, spriteColor, this);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_4 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___teamColor2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___spriteColor3;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7;
		L_7 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker3< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * >::Invoke(38 /* System.Void BasePiece::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager) */, L_4, L_5, L_7, __this);
		// promotedPiece.Place(cell);
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_8 = V_0;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_9 = ___cell1;
		NullCheck(L_8);
		VirtActionInvoker1< Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * >::Invoke(39 /* System.Void BasePiece::Place(Cell) */, L_8, L_9);
		// mPromotedPieces.Add(promotedPiece);
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_10 = __this->get_mPromotedPieces_8();
		BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C * L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9(L_10, L_11, /*hidden argument*/List_1_Add_m7D68A0C9D08988E074BCE0077257F65A84C79DD9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PieceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager__ctor_m4A12FD1F179C8F8C4761BCED153FCCE1FBA802E9 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool mIsKingAlive = true;
		__this->set_mIsKingAlive_4((bool)1);
		// private List<BasePiece> mPromotedPieces = new List<BasePiece>();
		List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C * L_0 = (List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C *)il2cpp_codegen_object_new(List_1_tDFC4CC339155EA0B0A49ECDF19AEDE377583184C_il2cpp_TypeInfo_var);
		List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787(L_0, /*hidden argument*/List_1__ctor_m7DF6A2965B792C80C92E075E8B1AF72BEE0D7787_RuntimeMethod_var);
		__this->set_mPromotedPieces_8(L_0);
		//      private string[] mPieceOrder = new string[16]
		// {
		//     "P", "P", "P", "P", "P", "P", "P", "P",
		//     "R", "B", "KN", "Q", "K", "R", "B", "KN",
		// 
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79);
		__this->set_mPieceOrder_9(L_17);
		// private Dictionary<string, Type> mPieceLibrary = new Dictionary<string, Type>()
		// {
		//     {"P",  typeof(Pawn)},
		//     {"R",  typeof(Rook)},
		//     {"KN", typeof(Knight)},
		//     {"B",  typeof(Bishop)},
		//     {"K",  typeof(King)},
		//     {"Q",  typeof(Queen)}
		// };
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_18 = (Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *)il2cpp_codegen_object_new(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234(L_18, /*hidden argument*/Dictionary_2__ctor_mAB54DC9EA2E016E35B204E9E26F3CF9F978B1234_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_19 = L_18;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Pawn_tD21D03F7F93F195C597798DB3901C458C39E311D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_19, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, L_21, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_22 = L_19;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_22, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_24, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_25 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (Knight_t068A5F0702013AAD61035BE0CE8FB56AA1EAAE07_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_25, _stringLiteral712AAA938DC9EAAA7C7B5A6828CFEB42354ECD79, L_27, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_28 = L_25;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (Bishop_tC3965650E8CD2DD21D324A88FD7EE736AA323A97_0_0_0_var) };
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_28, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, L_30, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_31 = L_28;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (King_tE9E3E30C039CA672B2BBF16E930B2097CBA4597B_0_0_0_var) };
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_31, _stringLiteral3D714DD3E8E77A697EF557E85ED2B014A96328C5, L_33, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_34 = L_31;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870_0_0_0_var) };
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3(L_34, _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90, L_36, /*hidden argument*/Dictionary_2_Add_mBEFBA097B67F6A309B3987FB1FDDBEF5C8D3D8E3_RuntimeMethod_var);
		__this->set_mPieceLibrary_10(L_34);
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
// System.Void Queen::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen_Setup_m08AC98F4FB54358B019CA2AC25CE17BFD1B2335A (Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF04F8070183A0D79228D387FE62D3ACD5DFE301);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// mMovement = new Vector3Int(7, 7, 7);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), 7, 7, 7, /*hidden argument*/NULL);
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mMovement_12(L_3);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_Queen");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteralDF04F8070183A0D79228D387FE62D3ACD5DFE301, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Queen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queen__ctor_m84B8B21A92242F74A420D44192D294540AB09A78 (Queen_t72E7ED2215B7FA8803F170ACA3AED31943FA3870 * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void Rook::Setup(UnityEngine.Color,UnityEngine.Color32,PieceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Setup_mACEAC1E8E6483409EDB190A81C8A8C6C7B41FF2D (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newTeamColor0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___newSpriteColor1, PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * ___newPieceManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A97BD1667CFE0BE820571CB49A04009DF42A41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Setup(newTeamColor, newSpriteColor, newPieceManager);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___newTeamColor0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___newSpriteColor1;
		PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * L_2 = ___newPieceManager2;
		BasePiece_Setup_mE4FF84FBFE068779DC6B4BD23CF8C9A978215EB4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// mMovement = new Vector3Int(7, 7, 0);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), 7, 7, 0, /*hidden argument*/NULL);
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mMovement_12(L_3);
		// GetComponent<Image>().sprite = Resources.Load<Sprite>("T_Rook");
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD(_stringLiteral14A97BD1667CFE0BE820571CB49A04009DF42A41, /*hidden argument*/Resources_Load_TisSprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9_m52961477D189E2C10AE576C1F8C37FCB16A825DD_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rook::Place(Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Place_m2B827AEBCF4FF7D0A981CDBC6E706B0A868620B9 (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * ___newCell0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// base.Place(newCell);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ___newCell0;
		BasePiece_Place_mF001301F694191346C38648A3CB2EE418AD4F06E(__this, L_0, /*hidden argument*/NULL);
		// int triggerOffset = mCurrentCell.mBoardPosition.x < 4 ? 2 : -1;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_1 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_1);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = L_1->get_address_of_mBoardPosition_5();
		int32_t L_3;
		L_3 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 2;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		// mCastleTriggerCell = SetCell(triggerOffset);
		int32_t L_4 = V_0;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_5;
		L_5 = Rook_SetCell_mB4397CE05681FE4386F21A9ED6344F85CFA13696(__this, L_4, /*hidden argument*/NULL);
		__this->set_mCastleTriggerCell_14(L_5);
		// int castleOffset = mCurrentCell.mBoardPosition.x < 4 ? 3 : -2;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_6 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_6);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_7 = L_6->get_address_of_mBoardPosition_5();
		int32_t L_8;
		L_8 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0043;
		}
	}
	{
		G_B6_0 = ((int32_t)-2);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 3;
	}

IL_0044:
	{
		V_1 = G_B6_0;
		// mCastleCell = SetCell(castleOffset);
		int32_t L_9 = V_1;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_10;
		L_10 = Rook_SetCell_mB4397CE05681FE4386F21A9ED6344F85CFA13696(__this, L_9, /*hidden argument*/NULL);
		__this->set_mCastleCell_15(L_10);
		// }
		return;
	}
}
// System.Void Rook::Castle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook_Castle_mCA726E7531CB6CCF40BB07F0E34336802E545974 (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, const RuntimeMethod* method)
{
	{
		// mTargetCell = mCastleCell;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = __this->get_mCastleCell_15();
		((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->set_mTargetCell_11(L_0);
		// Move();
		VirtActionInvoker0::Invoke(42 /* System.Void BasePiece::Move() */, __this);
		// }
		return;
	}
}
// Cell Rook::SetCell(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * Rook_SetCell_mB4397CE05681FE4386F21A9ED6344F85CFA13696 (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2Int newPosition = mCurrentCell.mBoardPosition;
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_0 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1 = L_0->get_mBoardPosition_5();
		V_0 = L_1;
		// newPosition.x += offset;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = (&V_0);
		int32_t L_3;
		L_3 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___offset0;
		Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		// return mCurrentCell.mBoard.mAllCells[newPosition.x, newPosition.y];
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_5 = ((BasePiece_t725264945BB9246FC60B260FD75676D3A519A06C *)__this)->get_mCurrentCell_8();
		NullCheck(L_5);
		Board_tCD3BC0CE0D6279E0759C85C6EA5A47A368497BB1 * L_6 = L_5->get_mBoard_6();
		NullCheck(L_6);
		CellU5BU2CU5D_tDEF10AD25F4532116D8430D77884EAA8643BA01C* L_7 = L_6->get_mAllCells_5();
		int32_t L_8;
		L_8 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		Cell_t577CC64507C54E1575DDC4DAC3545D2A42CE9149 * L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		return L_10;
	}
}
// System.Void Rook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rook__ctor_m5BB60339298E0776B3E747BA7962FFCEDF9EF96D (Rook_t4144D91DE840FD7B0A5DDC08EAE940448CBD36A4 * __this, const RuntimeMethod* method)
{
	{
		BasePiece__ctor_m42C244283D7393921B954A418249AEB4EC1D6155(__this, /*hidden argument*/NULL);
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
// System.Void RulesManager::BackYes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesManager_BackYes_mA756E8A7475E298A1D5CB11781A223DE97B29686 (RulesManager_tA0B4DF90AE241268B5D7C30871BD1F81DB5F9EC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RulesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RulesManager__ctor_mD8A8AC810824B22E72CBEFEF502A949135F3F8C6 (RulesManager_tA0B4DF90AE241268B5D7C30871BD1F81DB5F9EC7 * __this, const RuntimeMethod* method)
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
// System.Void track::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void track_Start_mF07C55D5B304C8AB915DB1BFC2E89C6D5167DDA4 (track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tracking = GetComponent<Slider> ();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0;
		L_0 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(__this, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		__this->set_tracking_5(L_0);
		// }
		return;
	}
}
// System.Void track::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void track_Update_m240E1A0DC84B03F2B88166FEA8F007F3322216CA (track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1 * __this, const RuntimeMethod* method)
{
	{
		// tracking.value= (float)video.frame / (float)video.frameCount ;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_tracking_5();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_video_4();
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E(L_1, /*hidden argument*/NULL);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get_video_4();
		NullCheck(L_3);
		uint64_t L_4;
		L_4 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)((float)((float)L_2))/(float)((float)((float)((double)((uint64_t)L_4)))))));
		// }
		return;
	}
}
// System.Void track::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void track__ctor_mCE7F62B2A0A8812B52F4B73A92635384EB9F136E (track_t5BA2C963A4A040BCF4279A5C7F4479B64E843CF1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CdeltaU3Ek__BackingField_14();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
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
