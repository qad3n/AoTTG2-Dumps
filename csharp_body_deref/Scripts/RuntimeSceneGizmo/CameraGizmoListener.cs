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
		[Token(Token = "0x40001BD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 targetForward;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x34")]
		private Quaternion _003CinitialRotation_003E5__2;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x44")]
		private Quaternion _003CtargetRotation_003E5__3;

		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x54")]
		private float _003Ct_003E5__4;

		[Token(Token = "0x1700007C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002C9")]
			[Address(RVA = "0x3F81F20", Offset = "0x3F81F20", VA = "0x3F81F20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002CB")]
			[Address(RVA = "0x3F81F70", Offset = "0x3F81F70", VA = "0x3F81F70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x3F81CA0", Offset = "0x3F81CA0", VA = "0x3F81CA0")]
		[DebuggerHidden]
		public _003CSetCameraRotation_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x3F81CE0", Offset = "0x3F81CE0", VA = "0x3F81CE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x3F81CF0", Offset = "0x3F81CF0", VA = "0x3F81CF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x3F81F30", Offset = "0x3F81F30", VA = "0x3F81F30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200005A")]
	[CompilerGenerated]
	private sealed class _003CSwitchProjection_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CisOrthographic_003E5__2;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x2C")]
		private Matrix4x4 _003Cdest_003E5__3;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x6C")]
		private Matrix4x4 _003Csrc_003E5__4;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0xAC")]
		private float _003Ct_003E5__5;

		[Token(Token = "0x1700007E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002CF")]
			[Address(RVA = "0x3F82830", Offset = "0x3F82830", VA = "0x3F82830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700007F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002D1")]
			[Address(RVA = "0x3F82880", Offset = "0x3F82880", VA = "0x3F82880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x3F81C80", Offset = "0x3F81C80", VA = "0x3F81C80")]
		[DebuggerHidden]
		public _003CSwitchProjection_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x3F81F80", Offset = "0x3F81F80", VA = "0x3F81F80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x3F81F90", Offset = "0x3F81F90", VA = "0x3F81F90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x3F82840", Offset = "0x3F82840", VA = "0x3F82840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float cameraAdjustmentSpeed;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float projectionTransitionSpeed;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x28")]
	private Camera mainCamera;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x30")]
	private Transform mainCamParent;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x38")]
	private IEnumerator cameraRotateCoroutine;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x40")]
	private IEnumerator projectionChangeCoroutine;

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3F817F0", Offset = "0x3F817F0", VA = "0x3F817F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x3F81850", Offset = "0x3F81850", VA = "0x3F81850")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x3F81880", Offset = "0x3F81880", VA = "0x3F81880")]
	public void OnGizmoComponentClicked(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x3F81A10", Offset = "0x3F81A10", VA = "0x3F81A10")]
	public void SwitchOrthographicMode()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x3F81AB0", Offset = "0x3F81AB0", VA = "0x3F81AB0")]
	public void RotateCameraInDirection(Vector3 direction)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3F81B80", Offset = "0x3F81B80", VA = "0x3F81B80")]
	[IteratorStateMachine(typeof(_003CSwitchProjection_003Ed__11))]
	private IEnumerator SwitchProjection()
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3F81BF0", Offset = "0x3F81BF0", VA = "0x3F81BF0")]
	[IteratorStateMachine(typeof(_003CSetCameraRotation_003Ed__12))]
	private IEnumerator SetCameraRotation(Vector3 targetForward)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3F81CC0", Offset = "0x3F81CC0", VA = "0x3F81CC0")]
	public CameraGizmoListener()
	{
	}
}
