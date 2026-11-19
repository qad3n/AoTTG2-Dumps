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

[Token(Token = "0x2000348")]
internal sealed class AottgDeferredSidePanelSectionsRuntime : MonoBehaviour
{
	[Token(Token = "0x2000349")]
	[CompilerGenerated]
	private sealed class _003CBuildDeferred_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400107C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400107D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400107E")]
		[FieldOffset(Offset = "0x20")]
		public AottgDeferredSidePanelSectionsRuntime _003C_003E4__this;

		[Token(Token = "0x400107F")]
		[FieldOffset(Offset = "0x28")]
		private Transform _003Cparent_003E5__2;

		[Token(Token = "0x4001080")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700023C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600148A")]
			[Address(RVA = "0x5814C00", Offset = "0x5813C00", VA = "0x5814C00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600148C")]
			[Address(RVA = "0x5814C50", Offset = "0x5813C50", VA = "0x5814C50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001487")]
		[Address(RVA = "0x58148D0", Offset = "0x58138D0", VA = "0x58148D0")]
		[DebuggerHidden]
		public _003CBuildDeferred_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001488")]
		[Address(RVA = "0x58149F0", Offset = "0x58139F0", VA = "0x58149F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001489")]
		[Address(RVA = "0x5814A00", Offset = "0x5813A00", VA = "0x5814A00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600148B")]
		[Address(RVA = "0x5814C10", Offset = "0x5813C10", VA = "0x5814C10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001076")]
	public const string NodeType = "DeferredSidePanelSections";

	[Token(Token = "0x4001077")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4001078")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _nodes;

	[Token(Token = "0x4001079")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x400107A")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x400107B")]
	[FieldOffset(Offset = "0x38")]
	private Coroutine _build;

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x5814400", Offset = "0x5813400", VA = "0x5814400")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x58144F0", Offset = "0x58134F0", VA = "0x58144F0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x5814680", Offset = "0x5813680", VA = "0x5814680")]
	private void Setup(GisketchNodeDefinition[] nodes, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x5814820", Offset = "0x5813820", VA = "0x5814820")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x5814720", Offset = "0x5813720", VA = "0x5814720")]
	private void StartIfReady()
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x58148A0", Offset = "0x58138A0", VA = "0x58148A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x5814830", Offset = "0x5813830", VA = "0x5814830")]
	[IteratorStateMachine(typeof(_003CBuildDeferred_003Ed__12))]
	private IEnumerator BuildDeferred()
	{
		return null;
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x58148F0", Offset = "0x58138F0", VA = "0x58148F0")]
	private GameObject SettleRoot()
	{
		return null;
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x58149E0", Offset = "0x58139E0", VA = "0x58149E0")]
	public AottgDeferredSidePanelSectionsRuntime()
	{
	}
}
