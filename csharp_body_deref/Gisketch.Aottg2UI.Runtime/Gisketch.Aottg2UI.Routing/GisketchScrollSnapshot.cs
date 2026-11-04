// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot
// Update status: NEW in this game update
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

[Token(Token = "0x2000042")]
internal sealed class GisketchScrollSnapshot
{
	[Token(Token = "0x2000043")]
	private struct Entry
	{
		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ScrollRect _scroll;

		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private string _path;

		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float _horizontalOffset;

		[Token(Token = "0x4000152")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float _verticalOffset;

		[Token(Token = "0x4000153")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float _horizontalNormalized;

		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private float _verticalNormalized;

		[Token(Token = "0x600024F")]
		[Address(RVA = "0x18A38A0", Offset = "0x18A1EA0", VA = "0x1818A38A0")]
		public static Entry Capture(ScrollRect scroll, Transform root)
		{
			return default(Entry);
		}

		[Token(Token = "0x6000250")]
		[Address(RVA = "0x18A4060", Offset = "0x18A2660", VA = "0x1818A4060")]
		public void Restore(GameObject root)
		{
		}

		[Token(Token = "0x6000251")]
		[Address(RVA = "0x18A3BC0", Offset = "0x18A21C0", VA = "0x1818A3BC0")]
		public GameObject LiveRoot()
		{
			return null;
		}

		[Token(Token = "0x6000252")]
		[Address(RVA = "0x18A3FA0", Offset = "0x18A25A0", VA = "0x1818A3FA0")]
		private ScrollRect Resolve(GameObject root)
		{
			return null;
		}

		[Token(Token = "0x6000253")]
		[Address(RVA = "0x18A3C40", Offset = "0x18A2240", VA = "0x1818A3C40")]
		private ScrollRect ResolveFromRoot(GameObject root)
		{
			return null;
		}
	}

	[Token(Token = "0x2000044")]
	[CompilerGenerated]
	private sealed class _003CRestoreNextFrame_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScrollSnapshot _003C_003E4__this;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject root;

		[Token(Token = "0x17000043")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000257")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000044")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000259")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000254")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRestoreNextFrame_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000255")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000256")]
		[Address(RVA = "0x18BFBA0", Offset = "0x18BE1A0", VA = "0x1818BFBA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000258")]
		[Address(RVA = "0x18BFC20", Offset = "0x18BE220", VA = "0x1818BFC20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400014B")]
	private const float RangeEpsilon = 0.01f;

	[Token(Token = "0x400014C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Entry[] EmptyEntries;

	[Token(Token = "0x400014D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Entry[] _entries;

	[Token(Token = "0x17000042")]
	public bool HasEntries
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x18AE650", Offset = "0x18ACC50", VA = "0x1818AE650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x18AE5C0", Offset = "0x18ACBC0", VA = "0x1818AE5C0")]
	private GisketchScrollSnapshot(Entry[] entries)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x18AD8F0", Offset = "0x18ABEF0", VA = "0x1818AD8F0")]
	public static GisketchScrollSnapshot Empty()
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x18AD6D0", Offset = "0x18ABCD0", VA = "0x1818AD6D0")]
	public static GisketchScrollSnapshot CaptureNearest(GameObject source, GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x18AD3E0", Offset = "0x18AB9E0", VA = "0x1818AD3E0")]
	public static GisketchScrollSnapshot CaptureAll(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x18AE390", Offset = "0x18AC990", VA = "0x1818AE390")]
	public void Restore([Optional] GameObject root)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x18AE300", Offset = "0x18AC900", VA = "0x1818AE300")]
	[IteratorStateMachine(typeof(_003CRestoreNextFrame_003Ed__10))]
	public IEnumerator RestoreNextFrame([Optional] GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x18ADD50", Offset = "0x18AC350", VA = "0x1818ADD50")]
	private GameObject FirstLiveScrollRoot()
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x18ADE30", Offset = "0x18AC430", VA = "0x1818ADE30")]
	private static float MaxHorizontal(ScrollRect scroll)
	{
		return default(float);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x18AE030", Offset = "0x18AC630", VA = "0x1818AE030")]
	private static float MaxVertical(ScrollRect scroll)
	{
		return default(float);
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x18ADE80", Offset = "0x18AC480", VA = "0x1818ADE80")]
	private static float MaxScroll(ScrollRect scroll, bool horizontal)
	{
		return default(float);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x18AE080", Offset = "0x18AC680", VA = "0x1818AE080")]
	private static string PathFromRoot(Transform root, Transform target)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x18AD9C0", Offset = "0x18ABFC0", VA = "0x1818AD9C0")]
	private static Transform FindByPath(Transform root, string path)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x18ADB00", Offset = "0x18AC100", VA = "0x1818ADB00")]
	private static Transform FindDirectChild(Transform root, string name)
	{
		return null;
	}
}
