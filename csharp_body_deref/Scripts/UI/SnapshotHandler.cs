using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200051D")]
internal class SnapshotHandler : MonoBehaviour
{
	[Token(Token = "0x200051E")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001985")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001986")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001987")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotHandler _003C_003E4__this;

		[Token(Token = "0x4001988")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x4001989")]
		[FieldOffset(Offset = "0x34")]
		public int damage;

		[Token(Token = "0x400198A")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003Csnapshot_003E5__2;

		[Token(Token = "0x17000A00")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60035F9")]
			[Address(RVA = "0x3F177A0", Offset = "0x3F177A0", VA = "0x3F177A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A01")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60035FB")]
			[Address(RVA = "0x3F177F0", Offset = "0x3F177F0", VA = "0x3F177F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60035F6")]
		[Address(RVA = "0x3F16E10", Offset = "0x3F16E10", VA = "0x3F16E10")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60035F7")]
		[Address(RVA = "0x3F17400", Offset = "0x3F17400", VA = "0x3F17400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60035F8")]
		[Address(RVA = "0x3F17410", Offset = "0x3F17410", VA = "0x3F17410", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60035FA")]
		[Address(RVA = "0x3F177B0", Offset = "0x3F177B0", VA = "0x3F177B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001983")]
	[FieldOffset(Offset = "0x20")]
	public BaseCamera SnapshotCamera;

	[Token(Token = "0x4001984")]
	[FieldOffset(Offset = "0x28")]
	public InGameCamera InGameCamera;

	[Token(Token = "0x60035F0")]
	[Address(RVA = "0x3F16B30", Offset = "0x3F16B30", VA = "0x3F16B30")]
	public void Awake()
	{
	}

	[Token(Token = "0x60035F1")]
	[Address(RVA = "0x3F16C60", Offset = "0x3F16C60", VA = "0x3F16C60")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x60035F2")]
	[Address(RVA = "0x3F16D70", Offset = "0x3F16D70", VA = "0x3F16D70")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__4))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, int damage)
	{
		return null;
	}

	[Token(Token = "0x60035F3")]
	[Address(RVA = "0x3F16E30", Offset = "0x3F16E30", VA = "0x3F16E30")]
	private void SetSnapshotPosition(Vector3 position)
	{
	}

	[Token(Token = "0x60035F4")]
	[Address(RVA = "0x3F170B0", Offset = "0x3F170B0", VA = "0x3F170B0")]
	private Texture2D RTImage()
	{
		return null;
	}

	[Token(Token = "0x60035F5")]
	[Address(RVA = "0x3F173F0", Offset = "0x3F173F0", VA = "0x3F173F0")]
	public SnapshotHandler()
	{
	}
}
