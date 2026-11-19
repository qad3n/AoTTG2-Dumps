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

[Token(Token = "0x2000735")]
internal class SnapshotHandler : MonoBehaviour
{
	[Token(Token = "0x2000736")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400243B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400243C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400243D")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotHandler _003C_003E4__this;

		[Token(Token = "0x400243E")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x400243F")]
		[FieldOffset(Offset = "0x34")]
		public int damage;

		[Token(Token = "0x4002440")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003Csnapshot_003E5__2;

		[Token(Token = "0x17000C06")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045EA")]
			[Address(RVA = "0x5B63500", Offset = "0x5B62500", VA = "0x5B63500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C07")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045EC")]
			[Address(RVA = "0x5B63550", Offset = "0x5B62550", VA = "0x5B63550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045E7")]
		[Address(RVA = "0x5B62B90", Offset = "0x5B61B90", VA = "0x5B62B90")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045E8")]
		[Address(RVA = "0x5B63150", Offset = "0x5B62150", VA = "0x5B63150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045E9")]
		[Address(RVA = "0x5B63160", Offset = "0x5B62160", VA = "0x5B63160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045EB")]
		[Address(RVA = "0x5B63510", Offset = "0x5B62510", VA = "0x5B63510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002439")]
	[FieldOffset(Offset = "0x20")]
	public BaseCamera SnapshotCamera;

	[Token(Token = "0x400243A")]
	[FieldOffset(Offset = "0x28")]
	public InGameCamera InGameCamera;

	[Token(Token = "0x60045E1")]
	[Address(RVA = "0x5B628C0", Offset = "0x5B618C0", VA = "0x5B628C0")]
	public void Awake()
	{
	}

	[Token(Token = "0x60045E2")]
	[Address(RVA = "0x5B62A00", Offset = "0x5B61A00", VA = "0x5B62A00")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x60045E3")]
	[Address(RVA = "0x5B62B00", Offset = "0x5B61B00", VA = "0x5B62B00")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__4))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, int damage)
	{
		return null;
	}

	[Token(Token = "0x60045E4")]
	[Address(RVA = "0x5B62BB0", Offset = "0x5B61BB0", VA = "0x5B62BB0")]
	private void SetSnapshotPosition(Vector3 position)
	{
	}

	[Token(Token = "0x60045E5")]
	[Address(RVA = "0x5B62E40", Offset = "0x5B61E40", VA = "0x5B62E40")]
	private Texture2D RTImage()
	{
		return null;
	}

	[Token(Token = "0x60045E6")]
	[Address(RVA = "0x5B63140", Offset = "0x5B62140", VA = "0x5B63140")]
	public SnapshotHandler()
	{
	}
}
