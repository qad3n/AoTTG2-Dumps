// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CameraScreenRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200027D")]
internal class CameraScreenRaycaster : IScreenRaycaster
{
	[Token(Token = "0x200027E")]
	public class CameraRayEnumerator : IEnumerator<(Ray, Camera, bool)>, IEnumerator, IDisposable, IEnumerable<(Ray, Camera, bool)>, IEnumerable
	{
		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x10")]
		private Camera[] m_Cameras;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x18")]
		private int m_LayerMask;

		[Token(Token = "0x4000959")]
		[FieldOffset(Offset = "0x1C")]
		private Vector2 m_MousePosition;

		[Token(Token = "0x400095A")]
		[FieldOffset(Offset = "0x24")]
		private int? m_TargetDisplay;

		[Token(Token = "0x400095B")]
		[FieldOffset(Offset = "0x2C")]
		private int m_Index;

		[Token(Token = "0x400095C")]
		[FieldOffset(Offset = "0x30")]
		private Camera m_CurrentCamera;

		[Token(Token = "0x400095D")]
		[FieldOffset(Offset = "0x38")]
		private Ray m_CurrentRay;

		[Token(Token = "0x400095E")]
		[FieldOffset(Offset = "0x50")]
		private bool m_IsInsideCameraRect;

		[Token(Token = "0x1700036B")]
		public (Ray, Camera, bool) Current
		{
			[Token(Token = "0x60010F4")]
			[Address(RVA = "0x6C8A340", Offset = "0x6C89340", VA = "0x6C8A340", Slot = "4")]
			get
			{
				return default((Ray, Camera, bool));
			}
		}

		[Token(Token = "0x1700036C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010F5")]
			[Address(RVA = "0x6C8A3C0", Offset = "0x6C893C0", VA = "0x6C8A3C0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010F2")]
		[Address(RVA = "0x6C8A2A0", Offset = "0x6C892A0", VA = "0x6C8A2A0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x6C8A330", Offset = "0x6C89330", VA = "0x6C8A330", Slot = "8")]
		public void Reset()
		{
		}

		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x6C8A490", Offset = "0x6C89490", VA = "0x6C8A490", Slot = "9")]
		public IEnumerator<(Ray, Camera, bool)> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x6C8A4A0", Offset = "0x6C894A0", VA = "0x6C8A4A0", Slot = "10")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010F8")]
		[Address(RVA = "0x6C89F90", Offset = "0x6C88F90", VA = "0x6C89F90")]
		public static CameraRayEnumerator GetPooled(Camera[] cameras, int layerMask, Vector2 mousePosition, int? targetDisplay)
		{
			return null;
		}

		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x6C8A4B0", Offset = "0x6C894B0", VA = "0x6C8A4B0", Slot = "5")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x6C8A530", Offset = "0x6C89530", VA = "0x6C8A530")]
		public CameraRayEnumerator()
		{
		}
	}

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x10")]
	public Camera[] cameras;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x18")]
	public Camera[] singleCamera;

	[Token(Token = "0x4000956")]
	[FieldOffset(Offset = "0x20")]
	public int layerMask;

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x6C89D30", Offset = "0x6C88D30", VA = "0x6C89D30", Slot = "6")]
	public virtual void Update()
	{
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x6C89E40", Offset = "0x6C88E40", VA = "0x6C89E40", Slot = "5")]
	public IEnumerable<(Ray, Camera, bool)> MakeRay(Vector2 mousePosition, int pointerId, int? targetDisplay)
	{
		return null;
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x6C8A040", Offset = "0x6C89040", VA = "0x6C8A040")]
	private static bool IsValid(Camera camera, int layerMask, int? targetDisplay)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x6C8A100", Offset = "0x6C89100", VA = "0x6C8A100")]
	private static bool MakeRay(Camera camera, Vector2 mousePosition, out Ray ray)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x6C86850", Offset = "0x6C85850", VA = "0x6C86850")]
	public CameraScreenRaycaster()
	{
	}
}
