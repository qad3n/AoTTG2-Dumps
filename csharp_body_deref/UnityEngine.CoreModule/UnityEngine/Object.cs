using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000185")]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/CloneObject.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/UnityEngineObject.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class Object
{
	[Token(Token = "0x2000186")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static class MarshalledUnityObject
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B3E")]
		public static IntPtr Marshal<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B3F")]
		public static IntPtr MarshalNullCheck<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B40")]
		public static IntPtr MarshalNullCheck<T, TException>(T obj, string parameterName) where T : Object where TException : Exception
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000B41")]
		public static IntPtr MarshalAssumeNotNull<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000B42")]
		private static void ThrowException<TException>(string message) where TException : Exception
		{
		}

		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x4ADB4E0", Offset = "0x4ADB4E0", VA = "0x4ADB4E0")]
		public static void ThrowNullExceptionObjectImpl(object obj)
		{
		}
	}

	[Token(Token = "0x40005B5")]
	private const int kInstanceID_None = 0;

	[Token(Token = "0x40005B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_CachedPtr;

	[Token(Token = "0x40005B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static int OffsetOfInstanceIDInCPlusPlusObject;

	[Token(Token = "0x40005B8")]
	private const string objectIsNullMessage = "The Object you want to instantiate is null.";

	[Token(Token = "0x40005B9")]
	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";

	[Token(Token = "0x170001DA")]
	public string name
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x4AD9180", Offset = "0x4AD9180", VA = "0x4AD9180")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x4AD92A0", Offset = "0x4AD92A0", VA = "0x4AD92A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DB")]
	public HideFlags hideFlags
	{
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x4ADA7D0", Offset = "0x4ADA7D0", VA = "0x4ADA7D0")]
		get
		{
			return default(HideFlags);
		}
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x4ADA8C0", Offset = "0x4ADA8C0", VA = "0x4ADA8C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4AD8B90", Offset = "0x4AD8B90", VA = "0x4AD8B90")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x4AD8CF0", Offset = "0x4AD8CF0", VA = "0x4AD8CF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4AD8D00", Offset = "0x4AD8D00", VA = "0x4AD8D00", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4AD90A0", Offset = "0x4AD90A0", VA = "0x4AD90A0")]
	public static implicit operator bool(Object exists)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x4AD9010", Offset = "0x4AD9010", VA = "0x4AD9010")]
	private static bool CompareBaseObjects(Object lhs, Object rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x4AD9150", Offset = "0x4AD9150", VA = "0x4AD9150")]
	private static bool IsNativeObjectAlive(Object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4AD9170", Offset = "0x4AD9170", VA = "0x4AD9170")]
	private IntPtr GetCachedPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x4AD93B0", Offset = "0x4AD93B0", VA = "0x4AD93B0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x4AD9750", Offset = "0x4AD9750", VA = "0x4AD9750")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x4AD9B60", Offset = "0x4AD9B60", VA = "0x4AD9B60")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original)
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x4AD9DE0", Offset = "0x4AD9DE0", VA = "0x4AD9DE0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x4AD9E30", Offset = "0x4AD9E30", VA = "0x4AD9E30")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace)
	{
		return null;
	}

	[Token(Token = "0x6000AFB")]
	public static T Instantiate<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFE")]
	public static T Instantiate<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x4ADA1E0", Offset = "0x4ADA1E0", VA = "0x4ADA1E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScripting", IsFreeFunction = true, ThrowsException = true)]
	public static void Destroy(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x4ADA330", Offset = "0x4ADA330", VA = "0x4ADA330")]
	[ExcludeFromDocs]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4ADA3A0", Offset = "0x4ADA3A0", VA = "0x4ADA3A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScriptingImmediate", IsFreeFunction = true, ThrowsException = true)]
	public static void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x4ADA4D0", Offset = "0x4ADA4D0", VA = "0x4ADA4D0")]
	[ExcludeFromDocs]
	public static void DestroyImmediate(Object obj)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x4ADA540", Offset = "0x4ADA540", VA = "0x4ADA540")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID, but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x4ADA5D0", Offset = "0x4ADA5D0", VA = "0x4ADA5D0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static extern Object[] FindObjectsOfType(Type type, bool includeInactive);

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x4ADA610", Offset = "0x4ADA610", VA = "0x4ADA610")]
	public static Object[] FindObjectsByType(Type type, FindObjectsSortMode sortMode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x4ADA6A0", Offset = "0x4ADA6A0", VA = "0x4ADA6A0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsByType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsByType(Type type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode);

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4ADA6E0", Offset = "0x4ADA6E0", VA = "0x4ADA6E0")]
	[UnityEngine.Bindings.FreeFunction("GetSceneManager().DontDestroyOnLoad", ThrowsException = true)]
	public static void DontDestroyOnLoad([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object target)
	{
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x4ADA9C0", Offset = "0x4ADA9C0", VA = "0x4ADA9C0")]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x4ADAA50", Offset = "0x4ADAA50", VA = "0x4ADAA50")]
	[ExcludeFromDocs]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x4ADAAC0", Offset = "0x4ADAAC0", VA = "0x4ADAAC0")]
	[Obsolete("Object.FindSceneObjectsOfType has been deprecated, Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindSceneObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindSceneObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x4ADAB90", Offset = "0x4ADAB90", VA = "0x4ADAB90")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfTypeIncludingAssets")]
	[Obsolete("use Resources.FindObjectsOfTypeAll instead.")]
	public static extern Object[] FindObjectsOfTypeIncludingAssets(Type type);

	[Token(Token = "0x6000B0F")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B10")]
	public static T[] FindObjectsByType<T>(FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B11")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	public static T[] FindObjectsByType<T>(FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B14")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	public static T FindFirstObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	public static T FindAnyObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B17")]
	public static T FindFirstObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	public static T FindAnyObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4ADABC0", Offset = "0x4ADABC0", VA = "0x4ADABC0")]
	[Obsolete("Please use Resources.FindObjectsOfTypeAll instead")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4AD9620", Offset = "0x4AD9620", VA = "0x4AD9620")]
	private static void CheckNullArgument(object arg, string message)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4ADAC40", Offset = "0x4ADAC40", VA = "0x4ADAC40")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4ADACE0", Offset = "0x4ADACE0", VA = "0x4ADACE0")]
	public static Object FindFirstObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4ADAD90", Offset = "0x4ADAD90", VA = "0x4ADAD90")]
	public static Object FindAnyObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4ADAE40", Offset = "0x4ADAE40", VA = "0x4ADAE40")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4ADAEF0", Offset = "0x4ADAEF0", VA = "0x4ADAEF0")]
	public static Object FindFirstObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4ADAFB0", Offset = "0x4ADAFB0", VA = "0x4ADAFB0")]
	public static Object FindAnyObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4ADB070", Offset = "0x4ADB070", VA = "0x4ADB070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4AD8F20", Offset = "0x4AD8F20", VA = "0x4AD8F20")]
	public static bool operator ==(Object x, Object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4AD3F50", Offset = "0x4AD3F50", VA = "0x4AD3F50")]
	public static bool operator !=(Object x, Object y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4AD8CC0", Offset = "0x4AD8CC0", VA = "0x4AD8CC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Object::GetOffsetOfInstanceIdMember", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern int GetOffsetOfInstanceIDInCPlusPlusObject();

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4AD9D20", Offset = "0x4AD9D20", VA = "0x4AD9D20")]
	[UnityEngine.Bindings.NativeMethod(Name = "CloneObject", IsFreeFunction = true, ThrowsException = true)]
	private static Object Internal_CloneSingle([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4ADA0D0", Offset = "0x4ADA0D0", VA = "0x4ADA0D0")]
	[UnityEngine.Bindings.FreeFunction("CloneObject")]
	private static Object Internal_CloneSingleWithParent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform parent, bool worldPositionStays)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4AD9670", Offset = "0x4AD9670", VA = "0x4AD9670")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingle([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4AD9A30", Offset = "0x4AD9A30", VA = "0x4AD9A30")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingleWithParent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform parent, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4ADB0D0", Offset = "0x4ADB0D0", VA = "0x4ADB0D0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ToString")]
	private static string ToString(Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x4AD91E0", Offset = "0x4AD91E0", VA = "0x4AD91E0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::GetName")]
	private static string GetName([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4ADB310", Offset = "0x4ADB310", VA = "0x4ADB310")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::IsPersistent")]
	internal static bool IsPersistent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4AD92F0", Offset = "0x4AD92F0", VA = "0x4AD92F0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::SetName")]
	private static void SetName([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4ADB440", Offset = "0x4ADB440", VA = "0x4ADB440")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceID")]
	internal static extern Object FindObjectFromInstanceID(int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4ADB470", Offset = "0x4ADB470", VA = "0x4ADB470")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ForceLoadFromInstanceID")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static extern Object ForceLoadFromInstanceID(int instanceID);

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4AD16B0", Offset = "0x4AD16B0", VA = "0x4AD16B0")]
	public Object()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4ADA2E0", Offset = "0x4ADA2E0", VA = "0x4ADA2E0")]
	private static extern void Destroy_Injected(IntPtr obj, [DefaultValue("0.0F")] float t);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4ADA490", Offset = "0x4ADA490", VA = "0x4ADA490")]
	private static extern void DestroyImmediate_Injected(IntPtr obj, [DefaultValue("false")] bool allowDestroyingAssets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4ADA7A0", Offset = "0x4ADA7A0", VA = "0x4ADA7A0")]
	private static extern void DontDestroyOnLoad_Injected(IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4ADA890", Offset = "0x4ADA890", VA = "0x4ADA890")]
	private static extern HideFlags get_hideFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4ADA980", Offset = "0x4ADA980", VA = "0x4ADA980")]
	private static extern void set_hideFlags_Injected(IntPtr _unity_self, HideFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4ADB1B0", Offset = "0x4ADB1B0", VA = "0x4ADB1B0")]
	private static extern Object Internal_CloneSingle_Injected(IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4ADB1E0", Offset = "0x4ADB1E0", VA = "0x4ADB1E0")]
	private static extern Object Internal_CloneSingleWithParent_Injected(IntPtr data, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4ADB220", Offset = "0x4ADB220", VA = "0x4ADB220")]
	private static extern Object Internal_InstantiateSingle_Injected(IntPtr data, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4ADB260", Offset = "0x4ADB260", VA = "0x4ADB260")]
	private static extern Object Internal_InstantiateSingleWithParent_Injected(IntPtr data, IntPtr parent, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4ADB2B0", Offset = "0x4ADB2B0", VA = "0x4ADB2B0")]
	private static extern string ToString_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4ADB2E0", Offset = "0x4ADB2E0", VA = "0x4ADB2E0")]
	private static extern string GetName_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4ADB3D0", Offset = "0x4ADB3D0", VA = "0x4ADB3D0")]
	private static extern bool IsPersistent_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4ADB400", Offset = "0x4ADB400", VA = "0x4ADB400")]
	private static extern void SetName_Injected(IntPtr obj, string name);
}
