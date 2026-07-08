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

[Token(Token = "0x20001A9")]
internal sealed class AottgDeferredSidePanelSectionsRuntime : MonoBehaviour
{
	[Token(Token = "0x20001AA")]
	[CompilerGenerated]
	private sealed class _003CBuildDeferred_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000959")]
		[FieldOffset(Offset = "0x20")]
		public AottgDeferredSidePanelSectionsRuntime _003C_003E4__this;

		[Token(Token = "0x400095A")]
		[FieldOffset(Offset = "0x28")]
		private Transform _003Cparent_003E5__2;

		[Token(Token = "0x400095B")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000116")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60009C5")]
			[Address(RVA = "0x4103880", Offset = "0x4103880", VA = "0x4103880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000117")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60009C7")]
			[Address(RVA = "0x41038D0", Offset = "0x41038D0", VA = "0x41038D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x4103540", Offset = "0x4103540", VA = "0x4103540")]
		[DebuggerHidden]
		public _003CBuildDeferred_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x4103660", Offset = "0x4103660", VA = "0x4103660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x4103670", Offset = "0x4103670", VA = "0x4103670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x4103890", Offset = "0x4103890", VA = "0x4103890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000951")]
	public const string NodeType = "DeferredSidePanelSections";

	[Token(Token = "0x4000952")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition[] _nodes;

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x28")]
	private GisketchBuildContext _context;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x30")]
	private GisketchView _view;

	[Token(Token = "0x4000956")]
	[FieldOffset(Offset = "0x38")]
	private Coroutine _build;

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x4103060", Offset = "0x4103060", VA = "0x4103060")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x4103150", Offset = "0x4103150", VA = "0x4103150")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x41032E0", Offset = "0x41032E0", VA = "0x41032E0")]
	private void Setup(GisketchNodeDefinition[] nodes, GisketchBuildContext context, GisketchView view)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x4103490", Offset = "0x4103490", VA = "0x4103490")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x4103380", Offset = "0x4103380", VA = "0x4103380")]
	private void StartIfReady()
	{
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x4103510", Offset = "0x4103510", VA = "0x4103510")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x41034A0", Offset = "0x41034A0", VA = "0x41034A0")]
	[IteratorStateMachine(typeof(_003CBuildDeferred_003Ed__12))]
	private IEnumerator BuildDeferred()
	{
		return null;
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x4103560", Offset = "0x4103560", VA = "0x4103560")]
	private GameObject SettleRoot()
	{
		return null;
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x4103650", Offset = "0x4103650", VA = "0x4103650")]
	public AottgDeferredSidePanelSectionsRuntime()
	{
	}
}
