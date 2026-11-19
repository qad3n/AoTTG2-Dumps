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

[Token(Token = "0x20008F3")]
internal class MinimapCamera : MonoBehaviour
{
	[Token(Token = "0x20008F4")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D7E")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D texture;

		[Token(Token = "0x4002D7F")]
		[FieldOffset(Offset = "0x28")]
		public MinimapCamera _003C_003E4__this;

		[Token(Token = "0x4002D80")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4002D81")]
		[FieldOffset(Offset = "0x3C")]
		public float height;

		[Token(Token = "0x4002D82")]
		[FieldOffset(Offset = "0x40")]
		public bool minimap;

		[Token(Token = "0x17000ED0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005540")]
			[Address(RVA = "0x5CD9180", Offset = "0x5CD8180", VA = "0x5CD9180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000ED1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005542")]
			[Address(RVA = "0x5CD91D0", Offset = "0x5CD81D0", VA = "0x5CD91D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600553D")]
		[Address(RVA = "0x5CD8B30", Offset = "0x5CD7B30", VA = "0x5CD8B30")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600553E")]
		[Address(RVA = "0x5CD8F60", Offset = "0x5CD7F60", VA = "0x5CD8F60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600553F")]
		[Address(RVA = "0x5CD8F70", Offset = "0x5CD7F70", VA = "0x5CD8F70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005541")]
		[Address(RVA = "0x5CD9190", Offset = "0x5CD8190", VA = "0x5CD9190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002D74")]
	[FieldOffset(Offset = "0x20")]
	private Transform _cameraTransform;

	[Token(Token = "0x4002D75")]
	[FieldOffset(Offset = "0x28")]
	private Camera _camera;

	[Token(Token = "0x4002D76")]
	[FieldOffset(Offset = "0x30")]
	private MinimapCameraRender _cameraRender;

	[Token(Token = "0x4002D77")]
	[FieldOffset(Offset = "0x38")]
	private bool _takingSnapshot;

	[Token(Token = "0x4002D78")]
	[FieldOffset(Offset = "0x40")]
	private RenderTexture _minimapRenderTexture;

	[Token(Token = "0x4002D79")]
	[FieldOffset(Offset = "0x48")]
	private RenderTexture _mapRenderTexture;

	[Token(Token = "0x4002D7A")]
	[FieldOffset(Offset = "0x0")]
	public static int MinimapSize;

	[Token(Token = "0x4002D7B")]
	[FieldOffset(Offset = "0x4")]
	public static int MapSize;

	[Token(Token = "0x6005533")]
	[Address(RVA = "0x5CD8230", Offset = "0x5CD7230", VA = "0x5CD8230")]
	public void Awake()
	{
	}

	[Token(Token = "0x6005534")]
	[Address(RVA = "0x5CD8410", Offset = "0x5CD7410", VA = "0x5CD8410")]
	public bool Ready()
	{
		return default(bool);
	}

	[Token(Token = "0x6005535")]
	[Address(RVA = "0x5CD8420", Offset = "0x5CD7420", VA = "0x5CD8420")]
	public RenderTexture RenderMap(Vector3 position, float height)
	{
		return null;
	}

	[Token(Token = "0x6005536")]
	[Address(RVA = "0x5CD8850", Offset = "0x5CD7850", VA = "0x5CD8850")]
	public void TakeSnapshot(Vector3 position, float height, Texture2D texture, bool minimap, bool immediate = false)
	{
	}

	[Token(Token = "0x6005537")]
	[Address(RVA = "0x5CD89C0", Offset = "0x5CD79C0", VA = "0x5CD89C0")]
	private void TakeSnapshotImmediate(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x6005538")]
	[Address(RVA = "0x5CD8A70", Offset = "0x5CD7A70", VA = "0x5CD8A70")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__13))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return null;
	}

	[Token(Token = "0x6005539")]
	[Address(RVA = "0x5CD8460", Offset = "0x5CD7460", VA = "0x5CD8460")]
	private bool RTImage(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return default(bool);
	}

	[Token(Token = "0x600553A")]
	[Address(RVA = "0x5CD8DF0", Offset = "0x5CD7DF0", VA = "0x5CD8DF0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600553B")]
	[Address(RVA = "0x5CD8F10", Offset = "0x5CD7F10", VA = "0x5CD8F10")]
	public MinimapCamera()
	{
	}
}
