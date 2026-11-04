// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.CameraGizmoListener
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace RuntimeSceneGizmo;

[Token(Token = "0x2000058")]
public class CameraGizmoListener : MonoBehaviour
{
	[Token(Token = "0x2000059")]
	[CompilerGenerated]
	private sealed class _003CSetCameraRotation_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 targetForward;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x34")]
		private Quaternion _003CinitialRotation_003E5__2;

		[Token(Token = "0x40001CE")]
		[FieldOffset(Offset = "0x44")]
		private Quaternion _003CtargetRotation_003E5__3;

		[Token(Token = "0x40001CF")]
		[FieldOffset(Offset = "0x54")]
		private float _003Ct_003E5__4;

		[Token(Token = "0x1700007E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002D9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002DB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSetCameraRotation_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x1DCFD00", Offset = "0x1DCE300", VA = "0x181DCFD00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x1DCFFE0", Offset = "0x1DCE5E0", VA = "0x181DCFFE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200005A")]
	[CompilerGenerated]
	private sealed class _003CSwitchProjection_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CisOrthographic_003E5__2;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x2C")]
		private Matrix4x4 _003Cdest_003E5__3;

		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x6C")]
		private Matrix4x4 _003Csrc_003E5__4;

		[Token(Token = "0x40001D6")]
		[FieldOffset(Offset = "0xAC")]
		private float _003Ct_003E5__5;

		[Token(Token = "0x17000080")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002DF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000081")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E1")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSwitchProjection_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x1DD0020", Offset = "0x1DCE620", VA = "0x181DD0020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x1DD03D0", Offset = "0x1DCE9D0", VA = "0x181DD03D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float cameraAdjustmentSpeed;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float projectionTransitionSpeed;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x28")]
	private Camera mainCamera;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x30")]
	private Transform mainCamParent;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x38")]
	private IEnumerator cameraRotateCoroutine;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x40")]
	private IEnumerator projectionChangeCoroutine;

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x1DB9BE0", Offset = "0x1DB81E0", VA = "0x181DB9BE0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x1DB9C40", Offset = "0x1DB8240", VA = "0x181DB9C40")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x1DB9C80", Offset = "0x1DB8280", VA = "0x181DB9C80")]
	public void OnGizmoComponentClicked(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x1DBA060", Offset = "0x1DB8660", VA = "0x181DBA060")]
	public void SwitchOrthographicMode()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x1DB9F20", Offset = "0x1DB8520", VA = "0x181DB9F20")]
	public void RotateCameraInDirection(Vector3 direction)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x1DBA0F0", Offset = "0x1DB86F0", VA = "0x181DBA0F0")]
	[IteratorStateMachine(typeof(_003CSwitchProjection_003Ed__11))]
	private IEnumerator SwitchProjection()
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x1DB9FD0", Offset = "0x1DB85D0", VA = "0x181DB9FD0")]
	[IteratorStateMachine(typeof(_003CSetCameraRotation_003Ed__12))]
	private IEnumerator SetCameraRotation(Vector3 targetForward)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x1DBA160", Offset = "0x1DB8760", VA = "0x181DBA160")]
	public CameraGizmoListener()
	{
	}
}
