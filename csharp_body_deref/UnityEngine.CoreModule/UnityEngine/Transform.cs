using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A6")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/Transform.h")]
[UnityEngine.Bindings.NativeHeader("Configuration/UnityConfigure.h")]
public class Transform : Component, IEnumerable
{
	[Token(Token = "0x20001A7")]
	private class Enumerator : IEnumerator
	{
		[Token(Token = "0x4000613")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Transform outer;

		[Token(Token = "0x4000614")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int currentIndex;

		[Token(Token = "0x1700022C")]
		public object Current
		{
			[Token(Token = "0x6000C6D")]
			[Address(RVA = "0x4AE4410", Offset = "0x4AE4410", VA = "0x4AE4410", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x4AE4300", Offset = "0x4AE4300", VA = "0x4AE4300")]
		internal Enumerator(Transform outer)
		{
		}

		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x4AE44B0", Offset = "0x4AE44B0", VA = "0x4AE44B0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C6F")]
		[Address(RVA = "0x4AE4560", Offset = "0x4AE4560", VA = "0x4AE4560", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public Vector3 position
	{
		[Token(Token = "0x6000C0F")]
		[Address(RVA = "0x4AE15D0", Offset = "0x4AE15D0", VA = "0x4AE15D0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C10")]
		[Address(RVA = "0x4AE16C0", Offset = "0x4AE16C0", VA = "0x4AE16C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021B")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x4AE0180", Offset = "0x4AE0180", VA = "0x4AE0180")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x4AE0360", Offset = "0x4AE0360", VA = "0x4AE0360")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public Vector3 eulerAngles
	{
		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x4AE1820", Offset = "0x4AE1820", VA = "0x4AE1820")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x4AE18F0", Offset = "0x4AE18F0", VA = "0x4AE18F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021D")]
	public Vector3 localEulerAngles
	{
		[Token(Token = "0x6000C15")]
		[Address(RVA = "0x4AE1A40", Offset = "0x4AE1A40", VA = "0x4AE1A40")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x4AE1B10", Offset = "0x4AE1B10", VA = "0x4AE1B10")]
		set
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public Vector3 right
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x4AE1C60", Offset = "0x4AE1C60", VA = "0x4AE1C60")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x4AE1CC0", Offset = "0x4AE1CC0", VA = "0x4AE1CC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021F")]
	public Vector3 up
	{
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x4AE1DC0", Offset = "0x4AE1DC0", VA = "0x4AE1DC0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x4AE1E20", Offset = "0x4AE1E20", VA = "0x4AE1E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000220")]
	public Vector3 forward
	{
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x4AE1F20", Offset = "0x4AE1F20", VA = "0x4AE1F20")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x4AE1F80", Offset = "0x4AE1F80", VA = "0x4AE1F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000221")]
	public Quaternion rotation
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x4AE1850", Offset = "0x4AE1850", VA = "0x4AE1850")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x4AE19A0", Offset = "0x4AE19A0", VA = "0x4AE19A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000222")]
	public Quaternion localRotation
	{
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x4AE1A70", Offset = "0x4AE1A70", VA = "0x4AE1A70")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x4AE1BC0", Offset = "0x4AE1BC0", VA = "0x4AE1BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000223")]
	public Vector3 localScale
	{
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x4AE2120", Offset = "0x4AE2120", VA = "0x4AE2120")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x4AE2210", Offset = "0x4AE2210", VA = "0x4AE2210")]
		set
		{
		}
	}

	[Token(Token = "0x17000224")]
	public Transform parent
	{
		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x4AE1400", Offset = "0x4AE1400", VA = "0x4AE1400")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x4AE2380", Offset = "0x4AE2380", VA = "0x4AE2380")]
		set
		{
		}
	}

	[Token(Token = "0x17000225")]
	internal Transform parentInternal
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x4AE22F0", Offset = "0x4AE22F0", VA = "0x4AE22F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x4AE2420", Offset = "0x4AE2420", VA = "0x4AE2420")]
		set
		{
		}
	}

	[Token(Token = "0x17000226")]
	public Matrix4x4 worldToLocalMatrix
	{
		[Token(Token = "0x6000C2A")]
		[Address(RVA = "0x4AE2630", Offset = "0x4AE2630", VA = "0x4AE2630")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000227")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x4AE0C00", Offset = "0x4AE0C00", VA = "0x4AE0C00")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000228")]
	public Transform root
	{
		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x4AE37C0", Offset = "0x4AE37C0", VA = "0x4AE37C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000229")]
	public int childCount
	{
		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x4AE3910", Offset = "0x4AE3910", VA = "0x4AE3910")]
		[UnityEngine.Bindings.NativeMethod("GetChildrenCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022A")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x4AE3EA0", Offset = "0x4AE3EA0", VA = "0x4AE3EA0")]
		[UnityEngine.Bindings.NativeMethod("GetWorldScaleLossy")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700022B")]
	[UnityEngine.Bindings.NativeProperty("HasChangedDeprecated")]
	public bool hasChanged
	{
		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x4AE4100", Offset = "0x4AE4100", VA = "0x4AE4100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C47")]
		[Address(RVA = "0x4AE41C0", Offset = "0x4AE41C0", VA = "0x4AE41C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4AE1560", Offset = "0x4AE1560", VA = "0x4AE1560")]
	protected Transform()
	{
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4AE2430", Offset = "0x4AE2430", VA = "0x4AE2430")]
	private Transform GetParent()
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4AE24C0", Offset = "0x4AE24C0", VA = "0x4AE24C0")]
	public void SetParent(Transform p)
	{
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4AE2500", Offset = "0x4AE2500", VA = "0x4AE2500")]
	[UnityEngine.Bindings.FreeFunction("SetParent", HasExplicitThis = true)]
	public void SetParent(Transform parent, bool worldPositionStays)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4AE2790", Offset = "0x4AE2790", VA = "0x4AE2790")]
	public void Rotate(Vector3 eulers, [DefaultValue("Space.Self")] Space relativeTo)
	{
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4AE2BF0", Offset = "0x4AE2BF0", VA = "0x4AE2BF0")]
	public void Rotate(Vector3 eulers)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4AE2C00", Offset = "0x4AE2C00", VA = "0x4AE2C00")]
	public void Rotate(float xAngle, float yAngle, float zAngle)
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4AE2C10", Offset = "0x4AE2C10", VA = "0x4AE2C10")]
	[UnityEngine.Bindings.NativeMethod("RotateAround")]
	internal void RotateAroundInternal(Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x4AE2D10", Offset = "0x4AE2D10", VA = "0x4AE2D10")]
	public void RotateAround(Vector3 point, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4AE2EC0", Offset = "0x4AE2EC0", VA = "0x4AE2EC0")]
	public void LookAt(Transform target)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4AE3050", Offset = "0x4AE3050", VA = "0x4AE3050")]
	public void LookAt(Vector3 worldPosition, [DefaultValue("Vector3.up")] Vector3 worldUp)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4AE3110", Offset = "0x4AE3110", VA = "0x4AE3110")]
	public void LookAt(Vector3 worldPosition)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4AE3060", Offset = "0x4AE3060", VA = "0x4AE3060")]
	[UnityEngine.Bindings.FreeFunction("Internal_LookAt", HasExplicitThis = true)]
	private void Internal_LookAt(Vector3 worldPosition, Vector3 worldUp)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4AE31C0", Offset = "0x4AE31C0", VA = "0x4AE31C0")]
	public Vector3 TransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4AE32C0", Offset = "0x4AE32C0", VA = "0x4AE32C0")]
	public Vector3 InverseTransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4AE33C0", Offset = "0x4AE33C0", VA = "0x4AE33C0")]
	public Vector3 TransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4AE34C0", Offset = "0x4AE34C0", VA = "0x4AE34C0")]
	public Vector3 InverseTransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4AE35C0", Offset = "0x4AE35C0", VA = "0x4AE35C0")]
	public Vector3 TransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4AE36C0", Offset = "0x4AE36C0", VA = "0x4AE36C0")]
	public Vector3 InverseTransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4AE3850", Offset = "0x4AE3850", VA = "0x4AE3850")]
	private Transform GetRoot()
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4AE39D0", Offset = "0x4AE39D0", VA = "0x4AE39D0")]
	public void SetAsFirstSibling()
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4AE3A90", Offset = "0x4AE3A90", VA = "0x4AE3A90")]
	public void SetAsLastSibling()
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4AE3B50", Offset = "0x4AE3B50", VA = "0x4AE3B50")]
	public void SetSiblingIndex(int index)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4AE3C20", Offset = "0x4AE3C20", VA = "0x4AE3C20")]
	public int GetSiblingIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4AE3CE0", Offset = "0x4AE3CE0", VA = "0x4AE3CE0")]
	[UnityEngine.Bindings.FreeFunction]
	private static Transform FindRelativeTransformWithPath([UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform transform, string path, [DefaultValue("false")] bool isActiveOnly)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4AE3DC0", Offset = "0x4AE3DC0", VA = "0x4AE3DC0")]
	public Transform Find(string n)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4AE3F90", Offset = "0x4AE3F90", VA = "0x4AE3F90")]
	[UnityEngine.Bindings.FreeFunction("Internal_IsChildOrSameTransform", HasExplicitThis = true)]
	public bool IsChildOf([UnityEngine.Bindings.NotNull("ArgumentNullException")] Transform parent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4AE4290", Offset = "0x4AE4290", VA = "0x4AE4290", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4AE4340", Offset = "0x4AE4340", VA = "0x4AE4340")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GetChild", HasExplicitThis = true)]
	public Transform GetChild(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4AE1680", Offset = "0x4AE1680", VA = "0x4AE1680")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4AE1760", Offset = "0x4AE1760", VA = "0x4AE1760")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4AE17A0", Offset = "0x4AE17A0", VA = "0x4AE17A0")]
	private static extern void get_localPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4AE17E0", Offset = "0x4AE17E0", VA = "0x4AE17E0")]
	private static extern void set_localPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4AE2020", Offset = "0x4AE2020", VA = "0x4AE2020")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4AE2060", Offset = "0x4AE2060", VA = "0x4AE2060")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x4AE20A0", Offset = "0x4AE20A0", VA = "0x4AE20A0")]
	private static extern void get_localRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4AE20E0", Offset = "0x4AE20E0", VA = "0x4AE20E0")]
	private static extern void set_localRotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x4AE21D0", Offset = "0x4AE21D0", VA = "0x4AE21D0")]
	private static extern void get_localScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x4AE22B0", Offset = "0x4AE22B0", VA = "0x4AE22B0")]
	private static extern void set_localScale_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4AE24D0", Offset = "0x4AE24D0", VA = "0x4AE24D0")]
	private static extern Transform GetParent_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4AE25F0", Offset = "0x4AE25F0", VA = "0x4AE25F0")]
	private static extern void SetParent_Injected(IntPtr _unity_self, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4AE2710", Offset = "0x4AE2710", VA = "0x4AE2710")]
	private static extern void get_worldToLocalMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4AE2750", Offset = "0x4AE2750", VA = "0x4AE2750")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4AE2CC0", Offset = "0x4AE2CC0", VA = "0x4AE2CC0")]
	private static extern void RotateAroundInternal_Injected(IntPtr _unity_self, [In] ref Vector3 axis, float angle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4AE3180", Offset = "0x4AE3180", VA = "0x4AE3180")]
	private static extern void Internal_LookAt_Injected(IntPtr _unity_self, [In] ref Vector3 worldPosition, [In] ref Vector3 worldUp);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4AE3280", Offset = "0x4AE3280", VA = "0x4AE3280")]
	private static extern void TransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x4AE3380", Offset = "0x4AE3380", VA = "0x4AE3380")]
	private static extern void InverseTransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4AE3480", Offset = "0x4AE3480", VA = "0x4AE3480")]
	private static extern void TransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x4AE3580", Offset = "0x4AE3580", VA = "0x4AE3580")]
	private static extern void InverseTransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x4AE3680", Offset = "0x4AE3680", VA = "0x4AE3680")]
	private static extern void TransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4AE3780", Offset = "0x4AE3780", VA = "0x4AE3780")]
	private static extern void InverseTransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x4AE38E0", Offset = "0x4AE38E0", VA = "0x4AE38E0")]
	private static extern Transform GetRoot_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x4AE39A0", Offset = "0x4AE39A0", VA = "0x4AE39A0")]
	private static extern int get_childCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4AE3A60", Offset = "0x4AE3A60", VA = "0x4AE3A60")]
	private static extern void SetAsFirstSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4AE3B20", Offset = "0x4AE3B20", VA = "0x4AE3B20")]
	private static extern void SetAsLastSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x4AE3BE0", Offset = "0x4AE3BE0", VA = "0x4AE3BE0")]
	private static extern void SetSiblingIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4AE3CB0", Offset = "0x4AE3CB0", VA = "0x4AE3CB0")]
	private static extern int GetSiblingIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4AE3D80", Offset = "0x4AE3D80", VA = "0x4AE3D80")]
	private static extern Transform FindRelativeTransformWithPath_Injected(IntPtr transform, string path, [DefaultValue("false")] bool isActiveOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4AE3F50", Offset = "0x4AE3F50", VA = "0x4AE3F50")]
	private static extern void get_lossyScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4AE40C0", Offset = "0x4AE40C0", VA = "0x4AE40C0")]
	private static extern bool IsChildOf_Injected(IntPtr _unity_self, IntPtr parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4AE4190", Offset = "0x4AE4190", VA = "0x4AE4190")]
	private static extern bool get_hasChanged_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x4AE4250", Offset = "0x4AE4250", VA = "0x4AE4250")]
	private static extern void set_hasChanged_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4AE43D0", Offset = "0x4AE43D0", VA = "0x4AE43D0")]
	private static extern Transform GetChild_Injected(IntPtr _unity_self, int index);
}
