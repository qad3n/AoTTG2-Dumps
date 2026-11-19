// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Routing;

[Token(Token = "0x2000049")]
internal sealed class GisketchScrollSnapshot
{
	[Token(Token = "0x200004A")]
	private struct Entry
	{
		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ScrollRect _scroll;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private string _path;

		[Token(Token = "0x4000173")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float _horizontalOffset;

		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float _verticalOffset;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float _horizontalNormalized;

		[Token(Token = "0x4000177")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private float _verticalNormalized;

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x5252A80", Offset = "0x5251A80", VA = "0x5252A80")]
		public static Entry Capture(ScrollRect scroll, Transform root)
		{
			return default(Entry);
		}

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x5252F10", Offset = "0x5251F10", VA = "0x5252F10")]
		public void Restore(GameObject root)
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x5253130", Offset = "0x5252130", VA = "0x5253130")]
		public GameObject LiveRoot()
		{
			return null;
		}

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x5253C50", Offset = "0x5252C50", VA = "0x5253C50")]
		private ScrollRect Resolve(GameObject root)
		{
			return null;
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x5253CF0", Offset = "0x5252CF0", VA = "0x5253CF0")]
		private ScrollRect ResolveFromRoot(GameObject root)
		{
			return null;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003CRestoreNextFrame_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScrollSnapshot _003C_003E4__this;

		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject root;

		[Token(Token = "0x17000043")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002A2")]
			[Address(RVA = "0x5253FE0", Offset = "0x5252FE0", VA = "0x5253FE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000044")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002A4")]
			[Address(RVA = "0x5254030", Offset = "0x5253030", VA = "0x5254030", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x5253110", Offset = "0x5252110", VA = "0x5253110")]
		[DebuggerHidden]
		public _003CRestoreNextFrame_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x5253F60", Offset = "0x5252F60", VA = "0x5253F60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x5253F70", Offset = "0x5252F70", VA = "0x5253F70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x5253FF0", Offset = "0x5252FF0", VA = "0x5253FF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400016E")]
	private const float RangeEpsilon = 0.01f;

	[Token(Token = "0x400016F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Entry[] EmptyEntries;

	[Token(Token = "0x4000170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Entry[] _entries;

	[Token(Token = "0x17000042")]
	public bool HasEntries
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5252840", Offset = "0x5251840", VA = "0x5252840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x52527C0", Offset = "0x52517C0", VA = "0x52527C0")]
	private GisketchScrollSnapshot(Entry[] entries)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x524F080", Offset = "0x524E080", VA = "0x524F080")]
	public static GisketchScrollSnapshot Empty()
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5252860", Offset = "0x5251860", VA = "0x5252860")]
	public static GisketchScrollSnapshot CaptureNearest(GameObject source, GameObject root)
	{
		return null;
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x524F140", Offset = "0x524E140", VA = "0x524F140")]
	public static GisketchScrollSnapshot CaptureAll(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x524F740", Offset = "0x524E740", VA = "0x524F740")]
	public void Restore([Optional] GameObject root)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x524F850", Offset = "0x524E850", VA = "0x524F850")]
	[IteratorStateMachine(typeof(_003CRestoreNextFrame_003Ed__10))]
	public IEnumerator RestoreNextFrame([Optional] GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x5252DF0", Offset = "0x5251DF0", VA = "0x5252DF0")]
	private GameObject FirstLiveScrollRoot()
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x52531B0", Offset = "0x52521B0", VA = "0x52531B0")]
	private static float MaxHorizontal(ScrollRect scroll)
	{
		return default(float);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x52533E0", Offset = "0x52523E0", VA = "0x52533E0")]
	private static float MaxVertical(ScrollRect scroll)
	{
		return default(float);
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5253220", Offset = "0x5252220", VA = "0x5253220")]
	private static float MaxScroll(ScrollRect scroll, bool horizontal)
	{
		return default(float);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5253450", Offset = "0x5252450", VA = "0x5253450")]
	private static string PathFromRoot(Transform root, Transform target)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5253710", Offset = "0x5252710", VA = "0x5253710")]
	private static Transform FindByPath(Transform root, string path)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5253860", Offset = "0x5252860", VA = "0x5253860")]
	private static Transform FindDirectChild(Transform root, string name)
	{
		return null;
	}
}
