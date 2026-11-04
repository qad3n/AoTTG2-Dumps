// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotHandler.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/SnapshotHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006D3")]
internal class SnapshotHandler : MonoBehaviour
{
	[Token(Token = "0x20006D4")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002248")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002249")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400224A")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotHandler _003C_003E4__this;

		[Token(Token = "0x400224B")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x400224C")]
		[FieldOffset(Offset = "0x34")]
		public int damage;

		[Token(Token = "0x400224D")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003Csnapshot_003E5__2;

		[Token(Token = "0x17000BBD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004329")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BBE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600432B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004326")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004327")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004328")]
		[Address(RVA = "0x21D0060", Offset = "0x21CE660", VA = "0x1821D0060", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600432A")]
		[Address(RVA = "0x21D0450", Offset = "0x21CEA50", VA = "0x1821D0450", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002246")]
	[FieldOffset(Offset = "0x20")]
	public BaseCamera SnapshotCamera;

	[Token(Token = "0x4002247")]
	[FieldOffset(Offset = "0x28")]
	public InGameCamera InGameCamera;

	[Token(Token = "0x6004320")]
	[Address(RVA = "0x21CB920", Offset = "0x21C9F20", VA = "0x1821CB920")]
	public void Awake()
	{
	}

	[Token(Token = "0x6004321")]
	[Address(RVA = "0x21CBFC0", Offset = "0x21CA5C0", VA = "0x1821CBFC0")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x6004322")]
	[Address(RVA = "0x21CBF40", Offset = "0x21CA540", VA = "0x1821CBF40")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__4))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, int damage)
	{
		return null;
	}

	[Token(Token = "0x6004323")]
	[Address(RVA = "0x21CBD40", Offset = "0x21CA340", VA = "0x1821CBD40")]
	private void SetSnapshotPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6004324")]
	[Address(RVA = "0x21CBA60", Offset = "0x21CA060", VA = "0x1821CBA60")]
	private Texture2D RTImage()
	{
		return null;
	}

	[Token(Token = "0x6004325")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SnapshotHandler()
	{
	}
}
