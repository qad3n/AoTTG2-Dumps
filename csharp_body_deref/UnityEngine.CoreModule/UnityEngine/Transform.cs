// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Transform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A9")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/Transform.h")]
[UnityEngine.Bindings.NativeHeader("Configuration/UnityConfigure.h")]
public class Transform : Component, IEnumerable
{
	[Token(Token = "0x20001AA")]
	private class Enumerator : IEnumerator
	{
		[Token(Token = "0x4000613")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Transform outer;

		[Token(Token = "0x4000614")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int currentIndex;

		[Token(Token = "0x1700022D")]
		public object Current
		{
			[Token(Token = "0x6000C6F")]
			[Address(RVA = "0x4E0BD40", Offset = "0x4E0BD40", VA = "0x4E0BD40", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x4E0BC30", Offset = "0x4E0BC30", VA = "0x4E0BC30")]
		internal Enumerator(Transform outer)
		{
		}

		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x4E0BDE0", Offset = "0x4E0BDE0", VA = "0x4E0BDE0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x4E0BE90", Offset = "0x4E0BE90", VA = "0x4E0BE90", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x1700021B")]
	public Vector3 position
	{
		[Token(Token = "0x6000C11")]
		[Address(RVA = "0x4E08F00", Offset = "0x4E08F00", VA = "0x4E08F00")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C12")]
		[Address(RVA = "0x4E08FF0", Offset = "0x4E08FF0", VA = "0x4E08FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6000C13")]
		[Address(RVA = "0x4E07AB0", Offset = "0x4E07AB0", VA = "0x4E07AB0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C14")]
		[Address(RVA = "0x4E07C90", Offset = "0x4E07C90", VA = "0x4E07C90")]
		set
		{
		}
	}

	[Token(Token = "0x1700021D")]
	public Vector3 eulerAngles
	{
		[Token(Token = "0x6000C15")]
		[Address(RVA = "0x4E09150", Offset = "0x4E09150", VA = "0x4E09150")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C16")]
		[Address(RVA = "0x4E09220", Offset = "0x4E09220", VA = "0x4E09220")]
		set
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public Vector3 localEulerAngles
	{
		[Token(Token = "0x6000C17")]
		[Address(RVA = "0x4E09370", Offset = "0x4E09370", VA = "0x4E09370")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x4E09440", Offset = "0x4E09440", VA = "0x4E09440")]
		set
		{
		}
	}

	[Token(Token = "0x1700021F")]
	public Vector3 right
	{
		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x4E09590", Offset = "0x4E09590", VA = "0x4E09590")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x4E095F0", Offset = "0x4E095F0", VA = "0x4E095F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000220")]
	public Vector3 up
	{
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x4E096F0", Offset = "0x4E096F0", VA = "0x4E096F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x4E09750", Offset = "0x4E09750", VA = "0x4E09750")]
		set
		{
		}
	}

	[Token(Token = "0x17000221")]
	public Vector3 forward
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x4E09850", Offset = "0x4E09850", VA = "0x4E09850")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x4E098B0", Offset = "0x4E098B0", VA = "0x4E098B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000222")]
	public Quaternion rotation
	{
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x4E09180", Offset = "0x4E09180", VA = "0x4E09180")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x4E092D0", Offset = "0x4E092D0", VA = "0x4E092D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000223")]
	public Quaternion localRotation
	{
		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x4E093A0", Offset = "0x4E093A0", VA = "0x4E093A0")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x4E094F0", Offset = "0x4E094F0", VA = "0x4E094F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000224")]
	public Vector3 localScale
	{
		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x4E09A50", Offset = "0x4E09A50", VA = "0x4E09A50")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000C24")]
		[Address(RVA = "0x4E09B40", Offset = "0x4E09B40", VA = "0x4E09B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000225")]
	public Transform parent
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x4E08D30", Offset = "0x4E08D30", VA = "0x4E08D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x4E09CB0", Offset = "0x4E09CB0", VA = "0x4E09CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000226")]
	internal Transform parentInternal
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x4E09C20", Offset = "0x4E09C20", VA = "0x4E09C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x4E09D50", Offset = "0x4E09D50", VA = "0x4E09D50")]
		set
		{
		}
	}

	[Token(Token = "0x17000227")]
	public Matrix4x4 worldToLocalMatrix
	{
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x4E09F60", Offset = "0x4E09F60", VA = "0x4E09F60")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000228")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x4E08530", Offset = "0x4E08530", VA = "0x4E08530")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000229")]
	public Transform root
	{
		[Token(Token = "0x6000C3D")]
		[Address(RVA = "0x4E0B0F0", Offset = "0x4E0B0F0", VA = "0x4E0B0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022A")]
	public int childCount
	{
		[Token(Token = "0x6000C3F")]
		[Address(RVA = "0x4E0B240", Offset = "0x4E0B240", VA = "0x4E0B240")]
		[UnityEngine.Bindings.NativeMethod("GetChildrenCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x4E0B7D0", Offset = "0x4E0B7D0", VA = "0x4E0B7D0")]
		[UnityEngine.Bindings.NativeMethod("GetWorldScaleLossy")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700022C")]
	[UnityEngine.Bindings.NativeProperty("HasChangedDeprecated")]
	public bool hasChanged
	{
		[Token(Token = "0x6000C48")]
		[Address(RVA = "0x4E0BA30", Offset = "0x4E0BA30", VA = "0x4E0BA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C49")]
		[Address(RVA = "0x4E0BAF0", Offset = "0x4E0BAF0", VA = "0x4E0BAF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4E08E90", Offset = "0x4E08E90", VA = "0x4E08E90")]
	protected Transform()
	{
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4E09D60", Offset = "0x4E09D60", VA = "0x4E09D60")]
	private Transform GetParent()
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4E09DF0", Offset = "0x4E09DF0", VA = "0x4E09DF0")]
	public void SetParent(Transform p)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4E09E30", Offset = "0x4E09E30", VA = "0x4E09E30")]
	[UnityEngine.Bindings.FreeFunction("SetParent", HasExplicitThis = true)]
	public void SetParent(Transform parent, bool worldPositionStays)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4E0A0C0", Offset = "0x4E0A0C0", VA = "0x4E0A0C0")]
	public void Rotate(Vector3 eulers, [DefaultValue("Space.Self")] Space relativeTo)
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4E0A520", Offset = "0x4E0A520", VA = "0x4E0A520")]
	public void Rotate(Vector3 eulers)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x4E0A530", Offset = "0x4E0A530", VA = "0x4E0A530")]
	public void Rotate(float xAngle, float yAngle, float zAngle)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4E0A540", Offset = "0x4E0A540", VA = "0x4E0A540")]
	[UnityEngine.Bindings.NativeMethod("RotateAround")]
	internal void RotateAroundInternal(Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4E0A640", Offset = "0x4E0A640", VA = "0x4E0A640")]
	public void RotateAround(Vector3 point, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4E0A7F0", Offset = "0x4E0A7F0", VA = "0x4E0A7F0")]
	public void LookAt(Transform target)
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4E0A980", Offset = "0x4E0A980", VA = "0x4E0A980")]
	public void LookAt(Vector3 worldPosition, [DefaultValue("Vector3.up")] Vector3 worldUp)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4E0AA40", Offset = "0x4E0AA40", VA = "0x4E0AA40")]
	public void LookAt(Vector3 worldPosition)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4E0A990", Offset = "0x4E0A990", VA = "0x4E0A990")]
	[UnityEngine.Bindings.FreeFunction("Internal_LookAt", HasExplicitThis = true)]
	private void Internal_LookAt(Vector3 worldPosition, Vector3 worldUp)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4E0AAF0", Offset = "0x4E0AAF0", VA = "0x4E0AAF0")]
	public Vector3 TransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4E0ABF0", Offset = "0x4E0ABF0", VA = "0x4E0ABF0")]
	public Vector3 InverseTransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4E0ACF0", Offset = "0x4E0ACF0", VA = "0x4E0ACF0")]
	public Vector3 TransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4E0ADF0", Offset = "0x4E0ADF0", VA = "0x4E0ADF0")]
	public Vector3 InverseTransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4E0AEF0", Offset = "0x4E0AEF0", VA = "0x4E0AEF0")]
	public Vector3 TransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4E0AFF0", Offset = "0x4E0AFF0", VA = "0x4E0AFF0")]
	public Vector3 InverseTransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4E0B180", Offset = "0x4E0B180", VA = "0x4E0B180")]
	private Transform GetRoot()
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4E0B300", Offset = "0x4E0B300", VA = "0x4E0B300")]
	public void SetAsFirstSibling()
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4E0B3C0", Offset = "0x4E0B3C0", VA = "0x4E0B3C0")]
	public void SetAsLastSibling()
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4E0B480", Offset = "0x4E0B480", VA = "0x4E0B480")]
	public void SetSiblingIndex(int index)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4E0B550", Offset = "0x4E0B550", VA = "0x4E0B550")]
	public int GetSiblingIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4E0B610", Offset = "0x4E0B610", VA = "0x4E0B610")]
	[UnityEngine.Bindings.FreeFunction]
	private static Transform FindRelativeTransformWithPath([UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform transform, string path, [DefaultValue("false")] bool isActiveOnly)
	{
		return null;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4E0B6F0", Offset = "0x4E0B6F0", VA = "0x4E0B6F0")]
	public Transform Find(string n)
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4E0B8C0", Offset = "0x4E0B8C0", VA = "0x4E0B8C0")]
	[UnityEngine.Bindings.FreeFunction("Internal_IsChildOrSameTransform", HasExplicitThis = true)]
	public bool IsChildOf([UnityEngine.Bindings.NotNull("ArgumentNullException")] Transform parent)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4E0BBC0", Offset = "0x4E0BBC0", VA = "0x4E0BBC0", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4E0BC70", Offset = "0x4E0BC70", VA = "0x4E0BC70")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GetChild", HasExplicitThis = true)]
	public Transform GetChild(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4E08FB0", Offset = "0x4E08FB0", VA = "0x4E08FB0")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4E09090", Offset = "0x4E09090", VA = "0x4E09090")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4E090D0", Offset = "0x4E090D0", VA = "0x4E090D0")]
	private static extern void get_localPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4E09110", Offset = "0x4E09110", VA = "0x4E09110")]
	private static extern void set_localPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x4E09950", Offset = "0x4E09950", VA = "0x4E09950")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4E09990", Offset = "0x4E09990", VA = "0x4E09990")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x4E099D0", Offset = "0x4E099D0", VA = "0x4E099D0")]
	private static extern void get_localRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x4E09A10", Offset = "0x4E09A10", VA = "0x4E09A10")]
	private static extern void set_localRotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4E09B00", Offset = "0x4E09B00", VA = "0x4E09B00")]
	private static extern void get_localScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4E09BE0", Offset = "0x4E09BE0", VA = "0x4E09BE0")]
	private static extern void set_localScale_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4E09E00", Offset = "0x4E09E00", VA = "0x4E09E00")]
	private static extern Transform GetParent_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4E09F20", Offset = "0x4E09F20", VA = "0x4E09F20")]
	private static extern void SetParent_Injected(IntPtr _unity_self, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4E0A040", Offset = "0x4E0A040", VA = "0x4E0A040")]
	private static extern void get_worldToLocalMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4E0A080", Offset = "0x4E0A080", VA = "0x4E0A080")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4E0A5F0", Offset = "0x4E0A5F0", VA = "0x4E0A5F0")]
	private static extern void RotateAroundInternal_Injected(IntPtr _unity_self, [In] ref Vector3 axis, float angle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x4E0AAB0", Offset = "0x4E0AAB0", VA = "0x4E0AAB0")]
	private static extern void Internal_LookAt_Injected(IntPtr _unity_self, [In] ref Vector3 worldPosition, [In] ref Vector3 worldUp);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4E0ABB0", Offset = "0x4E0ABB0", VA = "0x4E0ABB0")]
	private static extern void TransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x4E0ACB0", Offset = "0x4E0ACB0", VA = "0x4E0ACB0")]
	private static extern void InverseTransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x4E0ADB0", Offset = "0x4E0ADB0", VA = "0x4E0ADB0")]
	private static extern void TransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4E0AEB0", Offset = "0x4E0AEB0", VA = "0x4E0AEB0")]
	private static extern void InverseTransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x4E0AFB0", Offset = "0x4E0AFB0", VA = "0x4E0AFB0")]
	private static extern void TransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x4E0B0B0", Offset = "0x4E0B0B0", VA = "0x4E0B0B0")]
	private static extern void InverseTransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4E0B210", Offset = "0x4E0B210", VA = "0x4E0B210")]
	private static extern Transform GetRoot_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4E0B2D0", Offset = "0x4E0B2D0", VA = "0x4E0B2D0")]
	private static extern int get_childCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x4E0B390", Offset = "0x4E0B390", VA = "0x4E0B390")]
	private static extern void SetAsFirstSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4E0B450", Offset = "0x4E0B450", VA = "0x4E0B450")]
	private static extern void SetAsLastSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4E0B510", Offset = "0x4E0B510", VA = "0x4E0B510")]
	private static extern void SetSiblingIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4E0B5E0", Offset = "0x4E0B5E0", VA = "0x4E0B5E0")]
	private static extern int GetSiblingIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4E0B6B0", Offset = "0x4E0B6B0", VA = "0x4E0B6B0")]
	private static extern Transform FindRelativeTransformWithPath_Injected(IntPtr transform, string path, [DefaultValue("false")] bool isActiveOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4E0B880", Offset = "0x4E0B880", VA = "0x4E0B880")]
	private static extern void get_lossyScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x4E0B9F0", Offset = "0x4E0B9F0", VA = "0x4E0B9F0")]
	private static extern bool IsChildOf_Injected(IntPtr _unity_self, IntPtr parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4E0BAC0", Offset = "0x4E0BAC0", VA = "0x4E0BAC0")]
	private static extern bool get_hasChanged_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4E0BB80", Offset = "0x4E0BB80", VA = "0x4E0BB80")]
	private static extern void set_hasChanged_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x4E0BD00", Offset = "0x4E0BD00", VA = "0x4E0BD00")]
	private static extern Transform GetChild_Injected(IntPtr _unity_self, int index);
}
