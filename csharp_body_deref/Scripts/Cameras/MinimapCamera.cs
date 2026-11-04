// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.MinimapCamera
// Update status: CHANGED in this game update
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

[Token(Token = "0x200088D")]
internal class MinimapCamera : MonoBehaviour
{
	[Token(Token = "0x200088E")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002AD4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002AD5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002AD6")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D texture;

		[Token(Token = "0x4002AD7")]
		[FieldOffset(Offset = "0x28")]
		public MinimapCamera _003C_003E4__this;

		[Token(Token = "0x4002AD8")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4002AD9")]
		[FieldOffset(Offset = "0x3C")]
		public float height;

		[Token(Token = "0x4002ADA")]
		[FieldOffset(Offset = "0x40")]
		public bool minimap;

		[Token(Token = "0x17000EF1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005204")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EF2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005206")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005201")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__13(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005202")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005203")]
		[Address(RVA = "0x22FE4B0", Offset = "0x22FCAB0", VA = "0x1822FE4B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005205")]
		[Address(RVA = "0x22FE730", Offset = "0x22FCD30", VA = "0x1822FE730", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002ACC")]
	[FieldOffset(Offset = "0x20")]
	private Transform _cameraTransform;

	[Token(Token = "0x4002ACD")]
	[FieldOffset(Offset = "0x28")]
	private Camera _camera;

	[Token(Token = "0x4002ACE")]
	[FieldOffset(Offset = "0x30")]
	private MinimapCameraRender _cameraRender;

	[Token(Token = "0x4002ACF")]
	[FieldOffset(Offset = "0x38")]
	private bool _takingSnapshot;

	[Token(Token = "0x4002AD0")]
	[FieldOffset(Offset = "0x40")]
	private RenderTexture _minimapRenderTexture;

	[Token(Token = "0x4002AD1")]
	[FieldOffset(Offset = "0x48")]
	private RenderTexture _mapRenderTexture;

	[Token(Token = "0x4002AD2")]
	[FieldOffset(Offset = "0x0")]
	public static int MinimapSize;

	[Token(Token = "0x4002AD3")]
	[FieldOffset(Offset = "0x4")]
	public static int MapSize;

	[Token(Token = "0x60051F7")]
	[Address(RVA = "0x22F8980", Offset = "0x22F6F80", VA = "0x1822F8980")]
	public void Awake()
	{
	}

	[Token(Token = "0x60051F8")]
	[Address(RVA = "0x1BC3220", Offset = "0x1BC1820", VA = "0x181BC3220")]
	public bool Ready()
	{
		return default(bool);
	}

	[Token(Token = "0x60051F9")]
	[Address(RVA = "0x22F9030", Offset = "0x22F7630", VA = "0x1822F9030")]
	public RenderTexture RenderMap(Vector3 position, float height)
	{
		return null;
	}

	[Token(Token = "0x60051FA")]
	[Address(RVA = "0x22F9210", Offset = "0x22F7810", VA = "0x1822F9210")]
	public void TakeSnapshot(Vector3 position, float height, Texture2D texture, bool minimap, bool immediate = false)
	{
	}

	[Token(Token = "0x60051FB")]
	[Address(RVA = "0x22F9140", Offset = "0x22F7740", VA = "0x1822F9140")]
	private void TakeSnapshotImmediate(Vector3 position, float height, Texture2D texture, bool minimap)
	{
	}

	[Token(Token = "0x60051FC")]
	[Address(RVA = "0x22F9090", Offset = "0x22F7690", VA = "0x1822F9090")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__13))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return null;
	}

	[Token(Token = "0x60051FD")]
	[Address(RVA = "0x22F8C90", Offset = "0x22F7290", VA = "0x1822F8C90")]
	private bool RTImage(Vector3 position, float height, Texture2D texture, bool minimap)
	{
		return default(bool);
	}

	[Token(Token = "0x60051FE")]
	[Address(RVA = "0x22F8B50", Offset = "0x22F7150", VA = "0x1822F8B50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60051FF")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MinimapCamera()
	{
	}
}
