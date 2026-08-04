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

[Token(Token = "0x20001DC")]
internal sealed class AottgDeferredSidePanelSectionsRuntime : MonoBehaviour
{
	[Token(Token = "0x20001DD")]
	[CompilerGenerated]
	private sealed class _003CBuildDeferred_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A1D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A1E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A1F")]
		[FieldOffset(Offset = "0x20")]
		public AottgDeferredSidePanelSectionsRuntime _003C_003E4__this;

		[Token(Token = "0x4000A20")]
		[FieldOffset(Offset = "0x28")]
		private Transform _003Cparent_003E5__2;

		[Token(Token = "0x4000A21")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B42")]
			[Address(RVA = "0x4435220", Offset = "0x4435220", VA = "0x4435220", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B44")]
			[Address(RVA = "0x4435270", Offset = "0x4435270", VA = "0x4435270", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x4434EE0", Offset = "0x4434EE0", VA = "0x4434EE0")]
		[DebuggerHidden]
		public _003CBuildDeferred_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x4435000", Offset = "0x4435000", VA = "0x4435000", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x4435010", Offset = "0x4435010", VA = "0x4435010", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x4435230", Offset = "0x4435230", VA = "0x4435230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A17")]
	public const string NodeType = "DeferredSidePanelSections";

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _nodes;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x38")]
	private Coroutine _build;

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4434A00", Offset = "0x4434A00", VA = "0x4434A00")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4434AF0", Offset = "0x4434AF0", VA = "0x4434AF0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4434C80", Offset = "0x4434C80", VA = "0x4434C80")]
	private void Setup(GisketchNodeDefinition[] nodes, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4434E30", Offset = "0x4434E30", VA = "0x4434E30")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4434D20", Offset = "0x4434D20", VA = "0x4434D20")]
	private void StartIfReady()
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4434EB0", Offset = "0x4434EB0", VA = "0x4434EB0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4434E40", Offset = "0x4434E40", VA = "0x4434E40")]
	[IteratorStateMachine(typeof(_003CBuildDeferred_003Ed__12))]
	private IEnumerator BuildDeferred()
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4434F00", Offset = "0x4434F00", VA = "0x4434F00")]
	private GameObject SettleRoot()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x4434FF0", Offset = "0x4434FF0", VA = "0x4434FF0")]
	public AottgDeferredSidePanelSectionsRuntime()
	{
	}
}
