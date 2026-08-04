// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/MinimapCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x200070A")]
internal class MinimapCamera : MonoBehaviour
{
	[Token(Token = "0x200070B")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002217")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002218")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002219")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D texture;

		[Token(Token = "0x400221A")]
		[FieldOffset(Offset = "0x28")]
		public MinimapCamera _003C_003E4__this;

		[Token(Token = "0x400221B")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x400221C")]
		[FieldOffset(Offset = "0x3C")]
		public float height;

		[Token(Token = "0x400221D")]
		[FieldOffset(Offset = "0x40")]
		public bool minimap;

		[Token(Token = "0x17000D90")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045AD")]
			[Address(RVA = "0x437ED20", Offset = "0x437ED20", VA = "0x437ED20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D91")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045AF")]
			[Address(RVA = "0x437ED70", Offset = "0x437ED70", VA = "0x437ED70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60045AA")]
		[Address(RVA = "0x437EA90", Offset = "0x437EA90", VA = "0x437EA90")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60045AB")]
		[Address(RVA = "0x437EB00", Offset = "0x437EB00", VA = "0x437EB00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60045AC")]
		[Address(RVA = "0x437EB10", Offset = "0x437EB10", VA = "0x437EB10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60045AE")]
		[Address(RVA = "0x437ED30", Offset = "0x437ED30", VA = "0x437ED30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002210")]
	[FieldOffset(Offset = "0x20")]
	private Transform _cameraTransform;

	[Token(Token = "0x4002211")]
	[FieldOffset(Offset = "0x28")]
	private Camera _camera;

	[Token(Token = "0x4002212")]
	[FieldOffset(Offset = "0x30")]
	private bool _takingSnapshot;

	[Token(Token = "0x4002213")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture _minimapRenderTexture;

	[Token(Token = "0x4002214")]
	[FieldOffset(Offset = "0x40")]
	private RenderTexture _mapRenderTexture;

	[Token(Token = "0x4002215")]
	[FieldOffset(Offset = "0x0")]
	public static int MinimapSize;

	[Token(Token = "0x4002216")]
	[FieldOffset(Offset = "0x4")]
	public static int MapSize;

	[Token(Token = "0x60045A2")]
	[Address(RVA = "0x437E2C0", Offset = "0x437E2C0", VA = "0x437E2C0")]
	public void Awake()
	{
	}

	[Token(Token = "0x60045A3")]
	[Address(RVA = "0x437E480", Offset = "0x437E480", VA = "0x437E480")]
	public bool Ready()
	{
		return default(bool);
	}

	[Token(Token = "0x60045A4")]
	[Address(RVA = "0x437E490", Offset = "0x437E490", VA = "0x437E490")]
	public void TakeSnapshot(Vector3 position, float height, Texture2D texture, bool minimap, bool immediate = false)
	{
	}

	[Token(Token = "0x60045A5")]
	[Address(RVA = "0x437E610", Offset = "0x437E610", VA = "0x437E610")]
	private void TakeSnapshotImmediate(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x60045A6")]
	[Address(RVA = "0x437E6C0", Offset = "0x437E6C0", VA = "0x437E6C0")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__11))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return null;
	}

	[Token(Token = "0x60045A7")]
	[Address(RVA = "0x437E790", Offset = "0x437E790", VA = "0x437E790")]
	private void RTImage(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x60045A8")]
	[Address(RVA = "0x437EAB0", Offset = "0x437EAB0", VA = "0x437EAB0")]
	public MinimapCamera()
	{
	}
}
