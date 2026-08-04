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

[Token(Token = "0x2000562")]
internal class SnapshotHandler : MonoBehaviour
{
	[Token(Token = "0x2000563")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001A98")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001A99")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001A9A")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotHandler _003C_003E4__this;

		[Token(Token = "0x4001A9B")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x4001A9C")]
		[FieldOffset(Offset = "0x34")]
		public int damage;

		[Token(Token = "0x4001A9D")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003Csnapshot_003E5__2;

		[Token(Token = "0x17000A6A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003807")]
			[Address(RVA = "0x42241A0", Offset = "0x42241A0", VA = "0x42241A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A6B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003809")]
			[Address(RVA = "0x42241F0", Offset = "0x42241F0", VA = "0x42241F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003804")]
		[Address(RVA = "0x4223810", Offset = "0x4223810", VA = "0x4223810")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003805")]
		[Address(RVA = "0x4223E00", Offset = "0x4223E00", VA = "0x4223E00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003806")]
		[Address(RVA = "0x4223E10", Offset = "0x4223E10", VA = "0x4223E10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003808")]
		[Address(RVA = "0x42241B0", Offset = "0x42241B0", VA = "0x42241B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001A96")]
	[FieldOffset(Offset = "0x20")]
	public BaseCamera SnapshotCamera;

	[Token(Token = "0x4001A97")]
	[FieldOffset(Offset = "0x28")]
	public InGameCamera InGameCamera;

	[Token(Token = "0x60037FE")]
	[Address(RVA = "0x4223530", Offset = "0x4223530", VA = "0x4223530")]
	public void Awake()
	{
	}

	[Token(Token = "0x60037FF")]
	[Address(RVA = "0x4223660", Offset = "0x4223660", VA = "0x4223660")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x6003800")]
	[Address(RVA = "0x4223770", Offset = "0x4223770", VA = "0x4223770")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__4))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, int damage)
	{
		return null;
	}

	[Token(Token = "0x6003801")]
	[Address(RVA = "0x4223830", Offset = "0x4223830", VA = "0x4223830")]
	private void SetSnapshotPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6003802")]
	[Address(RVA = "0x4223AB0", Offset = "0x4223AB0", VA = "0x4223AB0")]
	private Texture2D RTImage()
	{
		return null;
	}

	[Token(Token = "0x6003803")]
	[Address(RVA = "0x4223DF0", Offset = "0x4223DF0", VA = "0x4223DF0")]
	public SnapshotHandler()
	{
	}
}
