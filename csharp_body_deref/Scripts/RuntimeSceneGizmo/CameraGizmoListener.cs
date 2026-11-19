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

[Token(Token = "0x2000057")]
public class CameraGizmoListener : MonoBehaviour
{
	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private sealed class _003CSetCameraRotation_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 targetForward;

		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x34")]
		private Quaternion _003CinitialRotation_003E5__2;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x44")]
		private Quaternion _003CtargetRotation_003E5__3;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x54")]
		private float _003Ct_003E5__4;

		[Token(Token = "0x17000077")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x576B8B0", Offset = "0x576A8B0", VA = "0x576B8B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000078")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E4")]
			[Address(RVA = "0x576B900", Offset = "0x576A900", VA = "0x576B900", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x576B5C0", Offset = "0x576A5C0", VA = "0x576B5C0")]
		[DebuggerHidden]
		public _003CSetCameraRotation_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x576B600", Offset = "0x576A600", VA = "0x576B600", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x576B610", Offset = "0x576A610", VA = "0x576B610", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x576B8C0", Offset = "0x576A8C0", VA = "0x576B8C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000059")]
	[CompilerGenerated]
	private sealed class _003CSwitchProjection_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CisOrthographic_003E5__2;

		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x2C")]
		private Matrix4x4 _003Cdest_003E5__3;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x6C")]
		private Matrix4x4 _003Csrc_003E5__4;

		[Token(Token = "0x40001E5")]
		[FieldOffset(Offset = "0xAC")]
		private float _003Ct_003E5__5;

		[Token(Token = "0x17000079")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002E8")]
			[Address(RVA = "0x576C180", Offset = "0x576B180", VA = "0x576C180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002EA")]
			[Address(RVA = "0x576C1D0", Offset = "0x576B1D0", VA = "0x576C1D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x576B5A0", Offset = "0x576A5A0", VA = "0x576B5A0")]
		[DebuggerHidden]
		public _003CSwitchProjection_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x576B910", Offset = "0x576A910", VA = "0x576B910", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x576B920", Offset = "0x576A920", VA = "0x576B920", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x576C190", Offset = "0x576B190", VA = "0x576C190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float cameraAdjustmentSpeed;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float projectionTransitionSpeed;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x28")]
	private Camera mainCamera;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x30")]
	private Transform mainCamParent;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x38")]
	private IEnumerator cameraRotateCoroutine;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x40")]
	private IEnumerator projectionChangeCoroutine;

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x576B0F0", Offset = "0x576A0F0", VA = "0x576B0F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x576B150", Offset = "0x576A150", VA = "0x576B150")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x576B180", Offset = "0x576A180", VA = "0x576B180")]
	public void OnGizmoComponentClicked(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x576B350", Offset = "0x576A350", VA = "0x576B350")]
	public void SwitchOrthographicMode()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x576B3E0", Offset = "0x576A3E0", VA = "0x576B3E0")]
	public void RotateCameraInDirection(Vector3 direction)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x576B4A0", Offset = "0x576A4A0", VA = "0x576B4A0")]
	[IteratorStateMachine(typeof(_003CSwitchProjection_003Ed__11))]
	private IEnumerator SwitchProjection()
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x576B510", Offset = "0x576A510", VA = "0x576B510")]
	[IteratorStateMachine(typeof(_003CSetCameraRotation_003Ed__12))]
	private IEnumerator SetCameraRotation(Vector3 targetForward)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x576B5E0", Offset = "0x576A5E0", VA = "0x576B5E0")]
	public CameraGizmoListener()
	{
	}
}
