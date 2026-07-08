using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20006BC")]
internal class MinimapCamera : MonoBehaviour
{
	[Token(Token = "0x20006BD")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020BA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020BB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020BC")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D texture;

		[Token(Token = "0x40020BD")]
		[FieldOffset(Offset = "0x28")]
		public MinimapCamera _003C_003E4__this;

		[Token(Token = "0x40020BE")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x40020BF")]
		[FieldOffset(Offset = "0x3C")]
		public float height;

		[Token(Token = "0x40020C0")]
		[FieldOffset(Offset = "0x40")]
		public bool minimap;

		[Token(Token = "0x17000D16")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004345")]
			[Address(RVA = "0x404BD10", Offset = "0x404BD10", VA = "0x404BD10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D17")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004347")]
			[Address(RVA = "0x404BD60", Offset = "0x404BD60", VA = "0x404BD60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004342")]
		[Address(RVA = "0x404BA80", Offset = "0x404BA80", VA = "0x404BA80")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004343")]
		[Address(RVA = "0x404BAF0", Offset = "0x404BAF0", VA = "0x404BAF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004344")]
		[Address(RVA = "0x404BB00", Offset = "0x404BB00", VA = "0x404BB00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004346")]
		[Address(RVA = "0x404BD20", Offset = "0x404BD20", VA = "0x404BD20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020B3")]
	[FieldOffset(Offset = "0x20")]
	private Transform _cameraTransform;

	[Token(Token = "0x40020B4")]
	[FieldOffset(Offset = "0x28")]
	private Camera _camera;

	[Token(Token = "0x40020B5")]
	[FieldOffset(Offset = "0x30")]
	private bool _takingSnapshot;

	[Token(Token = "0x40020B6")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture _minimapRenderTexture;

	[Token(Token = "0x40020B7")]
	[FieldOffset(Offset = "0x40")]
	private RenderTexture _mapRenderTexture;

	[Token(Token = "0x40020B8")]
	[FieldOffset(Offset = "0x0")]
	public static int MinimapSize;

	[Token(Token = "0x40020B9")]
	[FieldOffset(Offset = "0x4")]
	public static int MapSize;

	[Token(Token = "0x600433A")]
	[Address(RVA = "0x404B2B0", Offset = "0x404B2B0", VA = "0x404B2B0")]
	public void Awake()
	{
	}

	[Token(Token = "0x600433B")]
	[Address(RVA = "0x404B470", Offset = "0x404B470", VA = "0x404B470")]
	public bool Ready()
	{
		return default(bool);
	}

	[Token(Token = "0x600433C")]
	[Address(RVA = "0x404B480", Offset = "0x404B480", VA = "0x404B480")]
	public void TakeSnapshot(Vector3 position, float height, Texture2D texture, bool minimap, bool immediate = false)
	{
	}

	[Token(Token = "0x600433D")]
	[Address(RVA = "0x404B600", Offset = "0x404B600", VA = "0x404B600")]
	private void TakeSnapshotImmediate(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x600433E")]
	[Address(RVA = "0x404B6B0", Offset = "0x404B6B0", VA = "0x404B6B0")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__11))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return null;
	}

	[Token(Token = "0x600433F")]
	[Address(RVA = "0x404B780", Offset = "0x404B780", VA = "0x404B780")]
	private void RTImage(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x6004340")]
	[Address(RVA = "0x404BAA0", Offset = "0x404BAA0", VA = "0x404BAA0")]
	public MinimapCamera()
	{
	}
}
