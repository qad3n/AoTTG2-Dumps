// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListRefresher
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DA")]
internal sealed class AottgRoomListRefresher : MonoBehaviour
{
	[Token(Token = "0x4000E6C")]
	public const string NodeType = "AottgRoomListRefresher";

	[Token(Token = "0x4000E6D")]
	private const float RefreshSeconds = 5f;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0x20")]
	private float _nextRefresh;

	[Token(Token = "0x4000E70")]
	[FieldOffset(Offset = "0x24")]
	private bool _roomListReceived;

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x57D1620", Offset = "0x57D0620", VA = "0x57D1620")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c (Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		object @object;
		String type;
		Gisketch_Aottg2UI_Game_AottgRoomListRefresher___c_StaticFields pGVar1;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07545479 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545479 = true;
		}
		if (AottgRoomListRefresher._registered == false) {
			__this = GisketchComponentRegistry.Default;
			type = "AottgRoomListRefresher";
			pGVar1 = typeof(AottgRoomListRefresher.c).static_fields;
			__this_00 = pGVar1.__9__5_0;
			if (__this_00 == null) {
				if ((typeof(AottgRoomListRefresher.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar1 = typeof(AottgRoomListRefresher.c).static_fields;
				}
				@object = (object)pGVar1.__9;
				__this_00 = new GisketchComponentFactory(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListRefresher_c_RegisterFactory_b__5_0);
				pGVar1 = typeof(AottgRoomListRefresher.c).static_fields;
				pGVar1.__9__5_0 = __this_00;
			}
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Register(type, __this_00);
			AottgRoomListRefresher._registered = true;
		}
		return;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x57D1CA0", Offset = "0x57D0CA0", VA = "0x57D1CA0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c (Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$OnEnable): clean
		float fVar1;

		fVar1 = Time.unscaledTime;
		this._nextRefresh = fVar1;
		this._roomListReceived = MainMenuGameManager.RoomListReceived;
		return;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x57D1D00", Offset = "0x57D0D00", VA = "0x57D1D00")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c (Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$Update): clean
		bool bVar1;
		float fVar2;

		bVar1 = MainMenuGameManager.RoomListReceived;
		fVar2 = Time.unscaledTime;
		if ((fVar2 < this._nextRefresh) && (bVar1 == this._roomListReceived)) {
			return;
		}
		this._roomListReceived = bVar1;
		fVar2 = Time.unscaledTime;
		this._nextRefresh = fVar2 + 5.0;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			AottgRoomList.Refresh();
			return;
		}
		AottgRoomList.Refresh();
		return;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x57D1DC0", Offset = "0x57D0DC0", VA = "0x57D1DC0")]
	public AottgRoomListRefresher()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c (Gisketch.Aottg2UI.Game.AottgRoomListRefresher$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListRefresher.c.

	// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgRoomListRefresher.c();
		AottgRoomListRefresher.c.__9 =(AottgRoomListRefresher.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomListRefresher.<>c$$<RegisterFactory>b__5_0: clean
	private bool c__RegisterFactory_b__5_0(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		if (go == null) {
			throw new NullReferenceException();
		}
		go.AddComponent<AottgRoomListRefresher>();
		return true;
	}
}
