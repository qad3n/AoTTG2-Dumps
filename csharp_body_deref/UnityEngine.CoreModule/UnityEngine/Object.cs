// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Object
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
[Token(Token = "0x2000188")]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/CloneObject.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/UnityEngineObject.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class Object
{
	[Token(Token = "0x2000189")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static class MarshalledUnityObject
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B40")]
		public static IntPtr Marshal<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B41")]
		public static IntPtr MarshalNullCheck<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B42")]
		public static IntPtr MarshalNullCheck<T, TException>(T obj, string parameterName) where T : Object where TException : Exception
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000B43")]
		public static IntPtr MarshalAssumeNotNull<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000B44")]
		private static void ThrowException<TException>(string message) where TException : Exception
		{
		}

		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x4E02E10", Offset = "0x4E02E10", VA = "0x4E02E10")]
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

	[Token(Token = "0x170001DB")]
	public string name
	{
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x4E00AB0", Offset = "0x4E00AB0", VA = "0x4E00AB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x4E00BD0", Offset = "0x4E00BD0", VA = "0x4E00BD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DC")]
	public HideFlags hideFlags
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x4E02100", Offset = "0x4E02100", VA = "0x4E02100")]
		get
		{
			return default(HideFlags);
		}
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x4E021F0", Offset = "0x4E021F0", VA = "0x4E021F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4E004C0", Offset = "0x4E004C0", VA = "0x4E004C0")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4E00620", Offset = "0x4E00620", VA = "0x4E00620", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x4E00630", Offset = "0x4E00630", VA = "0x4E00630", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x4E009D0", Offset = "0x4E009D0", VA = "0x4E009D0")]
	public static implicit operator bool(Object exists)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4E00940", Offset = "0x4E00940", VA = "0x4E00940")]
	private static bool CompareBaseObjects(Object lhs, Object rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4E00A80", Offset = "0x4E00A80", VA = "0x4E00A80")]
	private static bool IsNativeObjectAlive(Object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x4E00AA0", Offset = "0x4E00AA0", VA = "0x4E00AA0")]
	private IntPtr GetCachedPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x4E00CE0", Offset = "0x4E00CE0", VA = "0x4E00CE0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x4E01080", Offset = "0x4E01080", VA = "0x4E01080")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x4E01490", Offset = "0x4E01490", VA = "0x4E01490")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original)
	{
		return null;
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x4E01710", Offset = "0x4E01710", VA = "0x4E01710")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x4E01760", Offset = "0x4E01760", VA = "0x4E01760")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace)
	{
		return null;
	}

	[Token(Token = "0x6000AFD")]
	public static T Instantiate<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFE")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	public static T Instantiate<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B01")]
	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4E01B10", Offset = "0x4E01B10", VA = "0x4E01B10")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScripting", IsFreeFunction = true, ThrowsException = true)]
	public static void Destroy(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x4E01C60", Offset = "0x4E01C60", VA = "0x4E01C60")]
	[ExcludeFromDocs]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x4E01CD0", Offset = "0x4E01CD0", VA = "0x4E01CD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScriptingImmediate", IsFreeFunction = true, ThrowsException = true)]
	public static void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets)
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x4E01E00", Offset = "0x4E01E00", VA = "0x4E01E00")]
	[ExcludeFromDocs]
	public static void DestroyImmediate(Object obj)
	{
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x4E01E70", Offset = "0x4E01E70", VA = "0x4E01E70")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID, but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x4E01F00", Offset = "0x4E01F00", VA = "0x4E01F00")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static extern Object[] FindObjectsOfType(Type type, bool includeInactive);

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x4E01F40", Offset = "0x4E01F40", VA = "0x4E01F40")]
	public static Object[] FindObjectsByType(Type type, FindObjectsSortMode sortMode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x4E01FD0", Offset = "0x4E01FD0", VA = "0x4E01FD0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsByType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsByType(Type type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode);

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x4E02010", Offset = "0x4E02010", VA = "0x4E02010")]
	[UnityEngine.Bindings.FreeFunction("GetSceneManager().DontDestroyOnLoad", ThrowsException = true)]
	public static void DontDestroyOnLoad([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object target)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x4E022F0", Offset = "0x4E022F0", VA = "0x4E022F0")]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x4E02380", Offset = "0x4E02380", VA = "0x4E02380")]
	[ExcludeFromDocs]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj)
	{
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x4E023F0", Offset = "0x4E023F0", VA = "0x4E023F0")]
	[Obsolete("Object.FindSceneObjectsOfType has been deprecated, Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindSceneObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindSceneObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x4E024C0", Offset = "0x4E024C0", VA = "0x4E024C0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfTypeIncludingAssets")]
	[Obsolete("use Resources.FindObjectsOfTypeAll instead.")]
	public static extern Object[] FindObjectsOfTypeIncludingAssets(Type type);

	[Token(Token = "0x6000B11")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	public static T[] FindObjectsByType<T>(FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B14")]
	public static T[] FindObjectsByType<T>(FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B16")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B17")]
	public static T FindFirstObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	public static T FindAnyObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	public static T FindFirstObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B1A")]
	public static T FindAnyObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4E024F0", Offset = "0x4E024F0", VA = "0x4E024F0")]
	[Obsolete("Please use Resources.FindObjectsOfTypeAll instead")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4E00F50", Offset = "0x4E00F50", VA = "0x4E00F50")]
	private static void CheckNullArgument(object arg, string message)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4E02570", Offset = "0x4E02570", VA = "0x4E02570")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4E02610", Offset = "0x4E02610", VA = "0x4E02610")]
	public static Object FindFirstObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4E026C0", Offset = "0x4E026C0", VA = "0x4E026C0")]
	public static Object FindAnyObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4E02770", Offset = "0x4E02770", VA = "0x4E02770")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4E02820", Offset = "0x4E02820", VA = "0x4E02820")]
	public static Object FindFirstObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4E028E0", Offset = "0x4E028E0", VA = "0x4E028E0")]
	public static Object FindAnyObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4E029A0", Offset = "0x4E029A0", VA = "0x4E029A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4E00850", Offset = "0x4E00850", VA = "0x4E00850")]
	public static bool operator ==(Object x, Object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4DFB880", Offset = "0x4DFB880", VA = "0x4DFB880")]
	public static bool operator !=(Object x, Object y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4E005F0", Offset = "0x4E005F0", VA = "0x4E005F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Object::GetOffsetOfInstanceIdMember", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern int GetOffsetOfInstanceIDInCPlusPlusObject();

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4E01650", Offset = "0x4E01650", VA = "0x4E01650")]
	[UnityEngine.Bindings.NativeMethod(Name = "CloneObject", IsFreeFunction = true, ThrowsException = true)]
	private static Object Internal_CloneSingle([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4E01A00", Offset = "0x4E01A00", VA = "0x4E01A00")]
	[UnityEngine.Bindings.FreeFunction("CloneObject")]
	private static Object Internal_CloneSingleWithParent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform parent, bool worldPositionStays)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4E00FA0", Offset = "0x4E00FA0", VA = "0x4E00FA0")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingle([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x4E01360", Offset = "0x4E01360", VA = "0x4E01360")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingleWithParent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object data, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Transform parent, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4E02A00", Offset = "0x4E02A00", VA = "0x4E02A00")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ToString")]
	private static string ToString(Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4E00B10", Offset = "0x4E00B10", VA = "0x4E00B10")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::GetName")]
	private static string GetName([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4E02C40", Offset = "0x4E02C40", VA = "0x4E02C40")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::IsPersistent")]
	internal static bool IsPersistent([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4E00C20", Offset = "0x4E00C20", VA = "0x4E00C20")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::SetName")]
	private static void SetName([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4E02D70", Offset = "0x4E02D70", VA = "0x4E02D70")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceID")]
	internal static extern Object FindObjectFromInstanceID(int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4E02DA0", Offset = "0x4E02DA0", VA = "0x4E02DA0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ForceLoadFromInstanceID")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static extern Object ForceLoadFromInstanceID(int instanceID);

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4DF8FE0", Offset = "0x4DF8FE0", VA = "0x4DF8FE0")]
	public Object()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4E01C10", Offset = "0x4E01C10", VA = "0x4E01C10")]
	private static extern void Destroy_Injected(IntPtr obj, [DefaultValue("0.0F")] float t);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4E01DC0", Offset = "0x4E01DC0", VA = "0x4E01DC0")]
	private static extern void DestroyImmediate_Injected(IntPtr obj, [DefaultValue("false")] bool allowDestroyingAssets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4E020D0", Offset = "0x4E020D0", VA = "0x4E020D0")]
	private static extern void DontDestroyOnLoad_Injected(IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4E021C0", Offset = "0x4E021C0", VA = "0x4E021C0")]
	private static extern HideFlags get_hideFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4E022B0", Offset = "0x4E022B0", VA = "0x4E022B0")]
	private static extern void set_hideFlags_Injected(IntPtr _unity_self, HideFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4E02AE0", Offset = "0x4E02AE0", VA = "0x4E02AE0")]
	private static extern Object Internal_CloneSingle_Injected(IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4E02B10", Offset = "0x4E02B10", VA = "0x4E02B10")]
	private static extern Object Internal_CloneSingleWithParent_Injected(IntPtr data, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4E02B50", Offset = "0x4E02B50", VA = "0x4E02B50")]
	private static extern Object Internal_InstantiateSingle_Injected(IntPtr data, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4E02B90", Offset = "0x4E02B90", VA = "0x4E02B90")]
	private static extern Object Internal_InstantiateSingleWithParent_Injected(IntPtr data, IntPtr parent, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4E02BE0", Offset = "0x4E02BE0", VA = "0x4E02BE0")]
	private static extern string ToString_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4E02C10", Offset = "0x4E02C10", VA = "0x4E02C10")]
	private static extern string GetName_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x4E02D00", Offset = "0x4E02D00", VA = "0x4E02D00")]
	private static extern bool IsPersistent_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x4E02D30", Offset = "0x4E02D30", VA = "0x4E02D30")]
	private static extern void SetName_Injected(IntPtr obj, string name);
}
