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

[Token(Token = "0x20001EA")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/ScriptBindings/TransformScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/Transform.h")]
[UnityEngine.Bindings.NativeHeader("Configuration/UnityConfigure.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Transform : Component, IEnumerable
{
	[Token(Token = "0x20001EB")]
	private class Enumerator : IEnumerator
	{
		[Token(Token = "0x40006BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Transform outer;

		[Token(Token = "0x40006BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int currentIndex;

		[Token(Token = "0x170002B9")]
		public object Current
		{
			[Token(Token = "0x600106F")]
			[Address(RVA = "0x692F590", Offset = "0x692E590", VA = "0x692F590", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600106E")]
		[Address(RVA = "0x692F480", Offset = "0x692E480", VA = "0x692F480")]
		internal Enumerator(Transform outer)
		{
		}

		[Token(Token = "0x6001070")]
		[Address(RVA = "0x692F5B0", Offset = "0x692E5B0", VA = "0x692F5B0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001071")]
		[Address(RVA = "0x692F630", Offset = "0x692E630", VA = "0x692F630", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public Vector3 position
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x692C4E0", Offset = "0x692B4E0", VA = "0x692C4E0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x692C5B0", Offset = "0x692B5B0", VA = "0x692C5B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public Vector3 localPosition
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x692A690", Offset = "0x6929690", VA = "0x692A690")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x692A870", Offset = "0x6929870", VA = "0x692A870")]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public Vector3 eulerAngles
	{
		[Token(Token = "0x6001013")]
		[Address(RVA = "0x692C6F0", Offset = "0x692B6F0", VA = "0x692C6F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x692C820", Offset = "0x692B820", VA = "0x692C820")]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public Vector3 localEulerAngles
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x692C940", Offset = "0x692B940", VA = "0x692C940")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001016")]
		[Address(RVA = "0x692CA70", Offset = "0x692BA70", VA = "0x692CA70")]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public Vector3 right
	{
		[Token(Token = "0x6001017")]
		[Address(RVA = "0x692CB90", Offset = "0x692BB90", VA = "0x692CB90")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x692CC70", Offset = "0x692BC70", VA = "0x692CC70")]
		set
		{
		}
	}

	[Token(Token = "0x170002AC")]
	public Vector3 up
	{
		[Token(Token = "0x6001019")]
		[Address(RVA = "0x692CD60", Offset = "0x692BD60", VA = "0x692CD60")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600101A")]
		[Address(RVA = "0x692CE40", Offset = "0x692BE40", VA = "0x692CE40")]
		set
		{
		}
	}

	[Token(Token = "0x170002AD")]
	public Vector3 forward
	{
		[Token(Token = "0x600101B")]
		[Address(RVA = "0x692CF30", Offset = "0x692BF30", VA = "0x692CF30")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600101C")]
		[Address(RVA = "0x692D010", Offset = "0x692C010", VA = "0x692D010")]
		set
		{
		}
	}

	[Token(Token = "0x170002AE")]
	public Quaternion rotation
	{
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x692C790", Offset = "0x692B790", VA = "0x692C790")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x692C8C0", Offset = "0x692B8C0", VA = "0x692C8C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AF")]
	public Quaternion localRotation
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x692C9E0", Offset = "0x692B9E0", VA = "0x692C9E0")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x692CB10", Offset = "0x692BB10", VA = "0x692CB10")]
		set
		{
		}
	}

	[Token(Token = "0x170002B0")]
	public Vector3 localScale
	{
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x692D1F0", Offset = "0x692C1F0", VA = "0x692D1F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x692D2C0", Offset = "0x692C2C0", VA = "0x692D2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B1")]
	public Transform parent
	{
		[Token(Token = "0x6001023")]
		[Address(RVA = "0x692C3E0", Offset = "0x692B3E0", VA = "0x692C3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x692D390", Offset = "0x692C390", VA = "0x692D390")]
		set
		{
		}
	}

	[Token(Token = "0x170002B2")]
	internal Transform parentInternal
	{
		[Token(Token = "0x6001025")]
		[Address(RVA = "0x692D380", Offset = "0x692C380", VA = "0x692D380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001026")]
		[Address(RVA = "0x692D430", Offset = "0x692C430", VA = "0x692D430")]
		set
		{
		}
	}

	[Token(Token = "0x170002B3")]
	public Matrix4x4 worldToLocalMatrix
	{
		[Token(Token = "0x600102A")]
		[Address(RVA = "0x692D610", Offset = "0x692C610", VA = "0x692D610")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002B4")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x692B9D0", Offset = "0x692A9D0", VA = "0x692B9D0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170002B5")]
	public Transform root
	{
		[Token(Token = "0x600103C")]
		[Address(RVA = "0x692E990", Offset = "0x692D990", VA = "0x692E990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B6")]
	public int childCount
	{
		[Token(Token = "0x600103E")]
		[Address(RVA = "0x692EA60", Offset = "0x692DA60", VA = "0x692EA60")]
		[UnityEngine.Bindings.NativeMethod("GetChildrenCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B7")]
	public Vector3 lossyScale
	{
		[Token(Token = "0x6001045")]
		[Address(RVA = "0x692F060", Offset = "0x692E060", VA = "0x692F060")]
		[UnityEngine.Bindings.NativeMethod("GetWorldScaleLossy")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170002B8")]
	[UnityEngine.Bindings.NativeProperty("HasChangedDeprecated")]
	public bool hasChanged
	{
		[Token(Token = "0x6001047")]
		[Address(RVA = "0x692F2C0", Offset = "0x692E2C0", VA = "0x692F2C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001048")]
		[Address(RVA = "0x692F360", Offset = "0x692E360", VA = "0x692F360")]
		set
		{
		}
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x692C400", Offset = "0x692B400", VA = "0x692C400")]
	protected Transform()
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x692D440", Offset = "0x692C440", VA = "0x692D440")]
	private Transform GetParent()
	{
		return null;
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x692D4D0", Offset = "0x692C4D0", VA = "0x692D4D0")]
	public void SetParent(Transform p)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x692D510", Offset = "0x692C510", VA = "0x692D510")]
	[UnityEngine.Bindings.FreeFunction("SetParent", HasExplicitThis = true)]
	public void SetParent(Transform parent, bool worldPositionStays)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x692D750", Offset = "0x692C750", VA = "0x692D750")]
	public void SetPositionAndRotation(Vector3 position, Quaternion rotation)
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x692D820", Offset = "0x692C820", VA = "0x692D820")]
	public void Rotate(Vector3 eulers, [DefaultValue("Space.Self")] Space relativeTo)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x692DD80", Offset = "0x692CD80", VA = "0x692DD80")]
	public void Rotate(Vector3 eulers)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x692DD90", Offset = "0x692CD90", VA = "0x692DD90")]
	public void Rotate(float xAngle, float yAngle, float zAngle)
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x692DDA0", Offset = "0x692CDA0", VA = "0x692DDA0")]
	[UnityEngine.Bindings.NativeMethod("RotateAround")]
	internal void RotateAroundInternal(Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x692DE90", Offset = "0x692CE90", VA = "0x692DE90")]
	public void RotateAround(Vector3 point, Vector3 axis, float angle)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x692E060", Offset = "0x692D060", VA = "0x692E060")]
	public void LookAt(Transform target)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x692E210", Offset = "0x692D210", VA = "0x692E210")]
	public void LookAt(Vector3 worldPosition, [DefaultValue("Vector3.up")] Vector3 worldUp)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x692E330", Offset = "0x692D330", VA = "0x692E330")]
	public void LookAt(Vector3 worldPosition)
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x692E2A0", Offset = "0x692D2A0", VA = "0x692E2A0")]
	[UnityEngine.Bindings.FreeFunction("Internal_LookAt", HasExplicitThis = true)]
	private void Internal_LookAt(Vector3 worldPosition, Vector3 worldUp)
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x692E450", Offset = "0x692D450", VA = "0x692E450")]
	public Vector3 TransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x692E530", Offset = "0x692D530", VA = "0x692E530")]
	public Vector3 InverseTransformDirection(Vector3 direction)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x692E610", Offset = "0x692D610", VA = "0x692E610")]
	public Vector3 TransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x692E6F0", Offset = "0x692D6F0", VA = "0x692E6F0")]
	public Vector3 InverseTransformVector(Vector3 vector)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x692E7D0", Offset = "0x692D7D0", VA = "0x692E7D0")]
	public Vector3 TransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x692E8B0", Offset = "0x692D8B0", VA = "0x692E8B0")]
	public Vector3 InverseTransformPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x692E9A0", Offset = "0x692D9A0", VA = "0x692E9A0")]
	private Transform GetRoot()
	{
		return null;
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x692EB00", Offset = "0x692DB00", VA = "0x692EB00")]
	public void SetAsFirstSibling()
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x692EBA0", Offset = "0x692DBA0", VA = "0x692EBA0")]
	public void SetAsLastSibling()
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x692EC40", Offset = "0x692DC40", VA = "0x692EC40")]
	public void SetSiblingIndex(int index)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x692ECF0", Offset = "0x692DCF0", VA = "0x692ECF0")]
	public int GetSiblingIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x692ED90", Offset = "0x692DD90", VA = "0x692ED90")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	private Transform FindRelativeTransformWithPath(string path, [DefaultValue("false")] bool isActiveOnly)
	{
		return null;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x692F000", Offset = "0x692E000", VA = "0x692F000")]
	public Transform Find(string n)
	{
		return null;
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x692F130", Offset = "0x692E130", VA = "0x692F130")]
	[UnityEngine.Bindings.FreeFunction("Internal_IsChildOrSameAsOtherTransform", HasExplicitThis = true)]
	public bool IsChildOf([UnityEngine.Bindings.NotNull] Transform parent)
	{
		return default(bool);
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x692F410", Offset = "0x692E410", VA = "0x692F410", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x692F4C0", Offset = "0x692E4C0", VA = "0x692F4C0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("GetChild", HasExplicitThis = true)]
	public Transform GetChild(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104B")]
	[Address(RVA = "0x692C570", Offset = "0x692B570", VA = "0x692C570")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104C")]
	[Address(RVA = "0x692C630", Offset = "0x692B630", VA = "0x692C630")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104D")]
	[Address(RVA = "0x692C670", Offset = "0x692B670", VA = "0x692C670")]
	private static extern void get_localPosition_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104E")]
	[Address(RVA = "0x692C6B0", Offset = "0x692B6B0", VA = "0x692C6B0")]
	private static extern void set_localPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600104F")]
	[Address(RVA = "0x692D0F0", Offset = "0x692C0F0", VA = "0x692D0F0")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001050")]
	[Address(RVA = "0x692D130", Offset = "0x692C130", VA = "0x692D130")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001051")]
	[Address(RVA = "0x692D170", Offset = "0x692C170", VA = "0x692D170")]
	private static extern void get_localRotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x692D1B0", Offset = "0x692C1B0", VA = "0x692D1B0")]
	private static extern void set_localRotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x692D280", Offset = "0x692C280", VA = "0x692D280")]
	private static extern void get_localScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001054")]
	[Address(RVA = "0x692D340", Offset = "0x692C340", VA = "0x692D340")]
	private static extern void set_localScale_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x692D4E0", Offset = "0x692C4E0", VA = "0x692D4E0")]
	private static extern IntPtr GetParent_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001056")]
	[Address(RVA = "0x692D5D0", Offset = "0x692C5D0", VA = "0x692D5D0")]
	private static extern void SetParent_Injected(IntPtr _unity_self, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001057")]
	[Address(RVA = "0x692D6D0", Offset = "0x692C6D0", VA = "0x692D6D0")]
	private static extern void get_worldToLocalMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001058")]
	[Address(RVA = "0x692D710", Offset = "0x692C710", VA = "0x692D710")]
	private static extern void get_localToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001059")]
	[Address(RVA = "0x692D7E0", Offset = "0x692C7E0", VA = "0x692D7E0")]
	private static extern void SetPositionAndRotation_Injected(IntPtr _unity_self, [In] ref Vector3 position, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105A")]
	[Address(RVA = "0x692DE40", Offset = "0x692CE40", VA = "0x692DE40")]
	private static extern void RotateAroundInternal_Injected(IntPtr _unity_self, [In] ref Vector3 axis, float angle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105B")]
	[Address(RVA = "0x692E410", Offset = "0x692D410", VA = "0x692E410")]
	private static extern void Internal_LookAt_Injected(IntPtr _unity_self, [In] ref Vector3 worldPosition, [In] ref Vector3 worldUp);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105C")]
	[Address(RVA = "0x692E4F0", Offset = "0x692D4F0", VA = "0x692E4F0")]
	private static extern void TransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105D")]
	[Address(RVA = "0x692E5D0", Offset = "0x692D5D0", VA = "0x692E5D0")]
	private static extern void InverseTransformDirection_Injected(IntPtr _unity_self, [In] ref Vector3 direction, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105E")]
	[Address(RVA = "0x692E6B0", Offset = "0x692D6B0", VA = "0x692E6B0")]
	private static extern void TransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600105F")]
	[Address(RVA = "0x692E790", Offset = "0x692D790", VA = "0x692E790")]
	private static extern void InverseTransformVector_Injected(IntPtr _unity_self, [In] ref Vector3 vector, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x692E870", Offset = "0x692D870", VA = "0x692E870")]
	private static extern void TransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001061")]
	[Address(RVA = "0x692E950", Offset = "0x692D950", VA = "0x692E950")]
	private static extern void InverseTransformPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001062")]
	[Address(RVA = "0x692EA30", Offset = "0x692DA30", VA = "0x692EA30")]
	private static extern IntPtr GetRoot_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001063")]
	[Address(RVA = "0x692EAD0", Offset = "0x692DAD0", VA = "0x692EAD0")]
	private static extern int get_childCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001064")]
	[Address(RVA = "0x692EB70", Offset = "0x692DB70", VA = "0x692EB70")]
	private static extern void SetAsFirstSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001065")]
	[Address(RVA = "0x692EC10", Offset = "0x692DC10", VA = "0x692EC10")]
	private static extern void SetAsLastSibling_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001066")]
	[Address(RVA = "0x692ECB0", Offset = "0x692DCB0", VA = "0x692ECB0")]
	private static extern void SetSiblingIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001067")]
	[Address(RVA = "0x692ED60", Offset = "0x692DD60", VA = "0x692ED60")]
	private static extern int GetSiblingIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001068")]
	[Address(RVA = "0x692EFC0", Offset = "0x692DFC0", VA = "0x692EFC0")]
	private static extern IntPtr FindRelativeTransformWithPath_Injected(IntPtr _unity_self, ref ManagedSpanWrapper path, [DefaultValue("false")] bool isActiveOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001069")]
	[Address(RVA = "0x692F0F0", Offset = "0x692E0F0", VA = "0x692F0F0")]
	private static extern void get_lossyScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106A")]
	[Address(RVA = "0x692F280", Offset = "0x692E280", VA = "0x692F280")]
	private static extern bool IsChildOf_Injected(IntPtr _unity_self, IntPtr parent);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106B")]
	[Address(RVA = "0x692F330", Offset = "0x692E330", VA = "0x692F330")]
	private static extern bool get_hasChanged_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106C")]
	[Address(RVA = "0x692F3D0", Offset = "0x692E3D0", VA = "0x692F3D0")]
	private static extern void set_hasChanged_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600106D")]
	[Address(RVA = "0x692F550", Offset = "0x692E550", VA = "0x692F550")]
	private static extern IntPtr GetChild_Injected(IntPtr _unity_self, int index);
}
