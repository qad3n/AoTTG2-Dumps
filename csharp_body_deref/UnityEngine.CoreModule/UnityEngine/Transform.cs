// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Transform
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001E9")]
[UnityEngine.Bindings.NativeHeader("Configuration/UnityConfigure.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/Transform.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformScriptBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Transform : Component, IEnumerable
{
	[Token(Token = "0x20001EA")]
	private class Enumerator : IEnumerator
	{
		[Token(Token = "0x40006B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Transform outer;

		[Token(Token = "0x40006B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int currentIndex;

		[Token(Token = "0x170002B2")]
		public object Current
		{
			[Token(Token = "0x6001059")]
			[Address(RVA = "0x2F49090", Offset = "0x2F47690", VA = "0x182F49090", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001058")]
		[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
		internal Enumerator(Transform outer)
		{
		}

		[Token(Token = "0x600105A")]
		[Address(RVA = "0x2F48FF0", Offset = "0x2F475F0", VA = "0x182F48FF0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600105B")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x170002A0")]
	public Vector3 position
	{
		[Token(Token = "0x6000FF9")]
		[Address(RVA = "0x2F5B760", Offset = "0x2F59D60", VA = "0x182F5B760")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x2F5C390", Offset = "0x2F5A990", VA = "0x182F5C390")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x2F5B2C0", Offset = "0x2F598C0", VA = "0x182F5B2C0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x2F5BFC0", Offset = "0x2F5A5C0", VA = "0x182F5BFC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public Vector3 eulerAngles
	{
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x2F5AE70", Offset = "0x2F59470", VA = "0x182F5AE70")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x2F5BC10", Offset = "0x2F5A210", VA = "0x182F5BC10")]
		set
		{
		}
	}

	[Token(Token = "0x170002A3")]
	public Vector3 localEulerAngles
	{
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x2F5B160", Offset = "0x2F59760", VA = "0x182F5B160")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x2F5BEB0", Offset = "0x2F5A4B0", VA = "0x182F5BEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A4")]
	public Vector3 right
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x2F5B800", Offset = "0x2F59E00", VA = "0x182F5B800")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x2F5C420", Offset = "0x2F5AA20", VA = "0x182F5C420")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public Vector3 up
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x2F5BA00", Offset = "0x2F5A000", VA = "0x182F5BA00")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x2F5C5F0", Offset = "0x2F5ABF0", VA = "0x182F5C5F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public Vector3 forward
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x2F5AF80", Offset = "0x2F59580", VA = "0x182F5AF80")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001006")]
		[Address(RVA = "0x2F5BCD0", Offset = "0x2F5A2D0", VA = "0x182F5BCD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public Quaternion rotation
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x2F5B970", Offset = "0x2F59F70", VA = "0x182F5B970")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6001008")]
		[Address(RVA = "0x2F5C560", Offset = "0x2F5AB60", VA = "0x182F5C560")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public Quaternion localRotation
	{
		[Token(Token = "0x6001009")]
		[Address(RVA = "0x2F5B3B0", Offset = "0x2F599B0", VA = "0x182F5B3B0")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x2F5C0A0", Offset = "0x2F5A6A0", VA = "0x182F5C0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public Vector3 localScale
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x2F5B490", Offset = "0x2F59A90", VA = "0x182F5B490")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x2F5C180", Offset = "0x2F5A780", VA = "0x182F5C180")]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public Transform parent
	{
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x2F59000", Offset = "0x2F57600", VA = "0x182F59000")]
		get
		{
			return null;
		}
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x2F5C210", Offset = "0x2F5A810", VA = "0x182F5C210")]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	internal Transform parentInternal
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x2F59000", Offset = "0x2F57600", VA = "0x182F59000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x2F5A720", Offset = "0x2F58D20", VA = "0x182F5A720")]
		set
		{
		}
	}

	[Token(Token = "0x170002AC")]
	public Matrix4x4 worldToLocalMatrix
	{
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x2F5BB70", Offset = "0x2F5A170", VA = "0x182F5BB70")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002AD")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x2F5B580", Offset = "0x2F59B80", VA = "0x182F5B580")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002AE")]
	public Transform root
	{
		[Token(Token = "0x6001026")]
		[Address(RVA = "0x2F590E0", Offset = "0x2F576E0", VA = "0x182F590E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AF")]
	public int childCount
	{
		[Token(Token = "0x6001028")]
		[Address(RVA = "0x2F5ADF0", Offset = "0x2F593F0", VA = "0x182F5ADF0")]
		[UnityEngine.Bindings.NativeMethod("GetChildrenCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B0")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x2F5B670", Offset = "0x2F59C70", VA = "0x182F5B670")]
		[UnityEngine.Bindings.NativeMethod("GetWorldScaleLossy")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002B1")]
	[UnityEngine.Bindings.NativeProperty("HasChangedDeprecated")]
	public bool hasChanged
	{
		[Token(Token = "0x6001031")]
		[Address(RVA = "0x2F5B0E0", Offset = "0x2F596E0", VA = "0x182F5B0E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001032")]
		[Address(RVA = "0x2F5BE20", Offset = "0x2F5A420", VA = "0x182F5BE20")]
		set
		{
		}
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected Transform()
	{
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x2F59000", Offset = "0x2F57600", VA = "0x182F59000")]
	private Transform GetParent()
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x2F5A720", Offset = "0x2F58D20", VA = "0x182F5A720")]
	public void SetParent(Transform p)
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x2F5A7E0", Offset = "0x2F58DE0", VA = "0x182F5A7E0")]
	[UnityEngine.Bindings.FreeFunction("SetParent", HasExplicitThis = true)]
	public void SetParent(Transform parent, bool worldPositionStays)
	{
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x2F5A910", Offset = "0x2F58F10", VA = "0x182F5A910")]
	public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x2F59E90", Offset = "0x2F58490", VA = "0x182F59E90")]
	public void Rotate(Vector3 eulers, [DefaultValue("Space.Self")] Space relativeTo)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x2F59E30", Offset = "0x2F58430", VA = "0x182F59E30")]
	public void Rotate(Vector3 eulers)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x2F59E60", Offset = "0x2F58460", VA = "0x182F59E60")]
	public void Rotate(float xAngle, float yAngle, float zAngle)
	{
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x2F59B30", Offset = "0x2F58130", VA = "0x182F59B30")]
	[UnityEngine.Bindings.NativeMethod("RotateAround")]
	internal void RotateAroundInternal(Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x2F59BD0", Offset = "0x2F581D0", VA = "0x182F59BD0")]
	public void RotateAround(Vector3 point, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x2F59790", Offset = "0x2F57D90", VA = "0x182F59790")]
	public void LookAt(Transform target)
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x2F59940", Offset = "0x2F57F40", VA = "0x182F59940")]
	public void LookAt(Vector3 worldPosition, [DefaultValue("Vector3.up")] Vector3 worldUp)
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x2F599F0", Offset = "0x2F57FF0", VA = "0x182F599F0")]
	public void LookAt(Vector3 worldPosition)
	{
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x2F592A0", Offset = "0x2F578A0", VA = "0x182F592A0")]
	[UnityEngine.Bindings.FreeFunction("Internal_LookAt", HasExplicitThis = true)]
	private void Internal_LookAt(Vector3 worldPosition, Vector3 worldUp)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x2F5AAE0", Offset = "0x2F590E0", VA = "0x182F5AAE0")]
	public Vector3 TransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x2F593A0", Offset = "0x2F579A0", VA = "0x182F593A0")]
	public Vector3 InverseTransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x2F5AD00", Offset = "0x2F59300", VA = "0x182F5AD00")]
	public Vector3 TransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x2F595C0", Offset = "0x2F57BC0", VA = "0x182F595C0")]
	public Vector3 InverseTransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x2F5ABF0", Offset = "0x2F591F0", VA = "0x182F5ABF0")]
	public Vector3 TransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x2F594B0", Offset = "0x2F57AB0", VA = "0x182F594B0")]
	public Vector3 InverseTransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x2F590E0", Offset = "0x2F576E0", VA = "0x182F590E0")]
	private Transform GetRoot()
	{
		return null;
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x2F5A580", Offset = "0x2F58B80", VA = "0x182F5A580")]
	public void SetAsFirstSibling()
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x2F5A640", Offset = "0x2F58C40", VA = "0x182F5A640")]
	public void SetAsLastSibling()
	{
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x2F5A9F0", Offset = "0x2F58FF0", VA = "0x182F5A9F0")]
	public void SetSiblingIndex(int index)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x2F591C0", Offset = "0x2F577C0", VA = "0x182F591C0")]
	public int GetSiblingIndex()
	{
		return default(int);
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x2F58BF0", Offset = "0x2F571F0", VA = "0x182F58BF0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	private Transform FindRelativeTransformWithPath(string path, [DefaultValue("false")] bool isActiveOnly)
	{
		return null;
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x2F58E00", Offset = "0x2F57400", VA = "0x182F58E00")]
	public Transform Find(string n)
	{
		return null;
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x2F596C0", Offset = "0x2F57CC0", VA = "0x182F596C0")]
	[UnityEngine.Bindings.FreeFunction("Internal_IsChildOrSameAsOtherTransform", HasExplicitThis = true)]
	public bool IsChildOf([UnityEngine.Bindings.NotNull] Transform parent)
	{
		return default(bool);
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x2F58F50", Offset = "0x2F57550", VA = "0x182F58F50", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x2F58EB0", Offset = "0x2F574B0", VA = "0x182F58EB0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GetChild", HasExplicitThis = true)]
	public Transform GetChild(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001035")]
	[Address(RVA = "0x2F5B710", Offset = "0x2F59D10", VA = "0x182F5B710")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001036")]
	[Address(RVA = "0x2F5C340", Offset = "0x2F5A940", VA = "0x182F5C340")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001037")]
	[Address(RVA = "0x2F5B270", Offset = "0x2F59870", VA = "0x182F5B270")]
	private static extern void get_localPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001038")]
	[Address(RVA = "0x2F5BF70", Offset = "0x2F5A570", VA = "0x182F5BF70")]
	private static extern void set_localPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001039")]
	[Address(RVA = "0x2F5B920", Offset = "0x2F59F20", VA = "0x182F5B920")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103A")]
	[Address(RVA = "0x2F5C510", Offset = "0x2F5AB10", VA = "0x182F5C510")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103B")]
	[Address(RVA = "0x2F5B360", Offset = "0x2F59960", VA = "0x182F5B360")]
	private static extern void get_localRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103C")]
	[Address(RVA = "0x2F5C050", Offset = "0x2F5A650", VA = "0x182F5C050")]
	private static extern void set_localRotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103D")]
	[Address(RVA = "0x2F5B440", Offset = "0x2F59A40", VA = "0x182F5B440")]
	private static extern void get_localScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103E")]
	[Address(RVA = "0x2F5C130", Offset = "0x2F5A730", VA = "0x182F5C130")]
	private static extern void set_localScale_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x2F58FC0", Offset = "0x2F575C0", VA = "0x182F58FC0")]
	private static extern IntPtr GetParent_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001040")]
	[Address(RVA = "0x2F5A6C0", Offset = "0x2F58CC0", VA = "0x182F5A6C0")]
	private static extern void SetParent_Injected(IntPtr _unity_self, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x2F5BB20", Offset = "0x2F5A120", VA = "0x182F5BB20")]
	private static extern void get_worldToLocalMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001042")]
	[Address(RVA = "0x2F5B530", Offset = "0x2F59B30", VA = "0x182F5B530")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001043")]
	[Address(RVA = "0x2F5A8B0", Offset = "0x2F58EB0", VA = "0x182F5A8B0")]
	private static extern void SetPositionAndRotation_Injected(IntPtr _unity_self, [In] ref Vector3 position, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x2F59AD0", Offset = "0x2F580D0", VA = "0x182F59AD0")]
	private static extern void RotateAroundInternal_Injected(IntPtr _unity_self, [In] ref Vector3 axis, float angle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x2F59240", Offset = "0x2F57840", VA = "0x182F59240")]
	private static extern void Internal_LookAt_Injected(IntPtr _unity_self, [In] ref Vector3 worldPosition, [In] ref Vector3 worldUp);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001046")]
	[Address(RVA = "0x2F5AA80", Offset = "0x2F59080", VA = "0x182F5AA80")]
	private static extern void TransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x2F59340", Offset = "0x2F57940", VA = "0x182F59340")]
	private static extern void InverseTransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001048")]
	[Address(RVA = "0x2F5ACA0", Offset = "0x2F592A0", VA = "0x182F5ACA0")]
	private static extern void TransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001049")]
	[Address(RVA = "0x2F59560", Offset = "0x2F57B60", VA = "0x182F59560")]
	private static extern void InverseTransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104A")]
	[Address(RVA = "0x2F5AB90", Offset = "0x2F59190", VA = "0x182F5AB90")]
	private static extern void TransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104B")]
	[Address(RVA = "0x2F59450", Offset = "0x2F57A50", VA = "0x182F59450")]
	private static extern void InverseTransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104C")]
	[Address(RVA = "0x2F590A0", Offset = "0x2F576A0", VA = "0x182F590A0")]
	private static extern IntPtr GetRoot_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104D")]
	[Address(RVA = "0x2F5ADB0", Offset = "0x2F593B0", VA = "0x182F5ADB0")]
	private static extern int get_childCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104E")]
	[Address(RVA = "0x2F5A540", Offset = "0x2F58B40", VA = "0x182F5A540")]
	private static extern void SetAsFirstSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104F")]
	[Address(RVA = "0x2F5A600", Offset = "0x2F58C00", VA = "0x182F5A600")]
	private static extern void SetAsLastSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001050")]
	[Address(RVA = "0x2F5A9B0", Offset = "0x2F58FB0", VA = "0x182F5A9B0")]
	private static extern void SetSiblingIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001051")]
	[Address(RVA = "0x2F59180", Offset = "0x2F57780", VA = "0x182F59180")]
	private static extern int GetSiblingIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x2F58B90", Offset = "0x2F57190", VA = "0x182F58B90")]
	private static extern IntPtr FindRelativeTransformWithPath_Injected(IntPtr _unity_self, ref ManagedSpanWrapper path, [DefaultValue("false")] bool isActiveOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x2F5B620", Offset = "0x2F59C20", VA = "0x182F5B620")]
	private static extern void get_lossyScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001054")]
	[Address(RVA = "0x2F59670", Offset = "0x2F57C70", VA = "0x182F59670")]
	private static extern bool IsChildOf_Injected(IntPtr _unity_self, IntPtr parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x2F5B0A0", Offset = "0x2F596A0", VA = "0x182F5B0A0")]
	private static extern bool get_hasChanged_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001056")]
	[Address(RVA = "0x2F5BDD0", Offset = "0x2F5A3D0", VA = "0x182F5BDD0")]
	private static extern void set_hasChanged_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001057")]
	[Address(RVA = "0x2F58E70", Offset = "0x2F57470", VA = "0x182F58E70")]
	private static extern IntPtr GetChild_Injected(IntPtr _unity_self, int index);
}
