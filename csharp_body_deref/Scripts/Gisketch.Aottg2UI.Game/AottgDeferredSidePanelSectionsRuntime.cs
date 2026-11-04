// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgDeferredSidePanelSectionsRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EA")]
internal sealed class AottgDeferredSidePanelSectionsRuntime : MonoBehaviour
{
	[Token(Token = "0x20002EB")]
	[CompilerGenerated]
	private sealed class _003CBuildDeferred_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000EE6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000EE7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000EE8")]
		[FieldOffset(Offset = "0x20")]
		public AottgDeferredSidePanelSectionsRuntime _003C_003E4__this;

		[Token(Token = "0x4000EE9")]
		[FieldOffset(Offset = "0x28")]
		private Transform _003Cparent_003E5__2;

		[Token(Token = "0x4000EEA")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x170001FF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001234")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000200")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001236")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001231")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CBuildDeferred_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001232")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001233")]
		[Address(RVA = "0x1E3A040", Offset = "0x1E38640", VA = "0x181E3A040", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001235")]
		[Address(RVA = "0x1E3A340", Offset = "0x1E38940", VA = "0x181E3A340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000EE0")]
	public const string NodeType = "DeferredSidePanelSections";

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _nodes;

	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x38")]
	private Coroutine _build;

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x1E2A1D0", Offset = "0x1E287D0", VA = "0x181E2A1D0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x1E29F90", Offset = "0x1E28590", VA = "0x181E29F90")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x1E2A3D0", Offset = "0x1E289D0", VA = "0x181E2A3D0")]
	private void Setup(GisketchNodeDefinition[] nodes, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x1E2A1C0", Offset = "0x1E287C0", VA = "0x181E2A1C0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x1E2A470", Offset = "0x1E28A70", VA = "0x181E2A470")]
	private void StartIfReady()
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x1E2A180", Offset = "0x1E28780", VA = "0x181E2A180")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x1E29F20", Offset = "0x1E28520", VA = "0x181E29F20")]
	[IteratorStateMachine(typeof(_003CBuildDeferred_003Ed__12))]
	private IEnumerator BuildDeferred()
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x1E2A2D0", Offset = "0x1E288D0", VA = "0x181E2A2D0")]
	private GameObject SettleRoot()
	{
		return null;
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgDeferredSidePanelSectionsRuntime()
	{
	}
}
