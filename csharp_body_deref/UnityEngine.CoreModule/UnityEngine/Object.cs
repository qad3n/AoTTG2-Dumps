// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Object
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.SceneManagement;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20001C2")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/CloneObject.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/UnityEngineObject.bindings.h")]
public class Object
{
	[Token(Token = "0x20001C3")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static class MarshalledUnityObject
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ED2")]
		public static IntPtr Marshal<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000ED3")]
		public static IntPtr MarshalNotNull<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000ED4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public static void TryThrowEditorNullExceptionObject(Object unityObj, string paramterName)
		{
		}
	}

	[Token(Token = "0x4000651")]
	private const int kInstanceID_None = 0;

	[Token(Token = "0x4000652")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_CachedPtr;

	[Token(Token = "0x4000653")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int OffsetOfInstanceIDInCPlusPlusObject;

	[Token(Token = "0x4000654")]
	private const string objectIsNullMessage = "The Object you want to instantiate is null.";

	[Token(Token = "0x4000655")]
	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";

	[Token(Token = "0x1700024A")]
	public string name
	{
		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x2F22EB0", Offset = "0x2F214B0", VA = "0x182F22EB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x2F23240", Offset = "0x2F21840", VA = "0x182F23240")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public HideFlags hideFlags
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x2F22E10", Offset = "0x2F21410", VA = "0x182F22E10")]
		get
		{
			return default(HideFlags);
		}
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x2F23190", Offset = "0x2F21790", VA = "0x182F23190")]
		set
		{
		}
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x2F20C40", Offset = "0x2F1F240", VA = "0x182F20C40")]
	public EntityId GetEntityId()
	{
		return default(EntityId);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x2F20CD0", Offset = "0x2F1F2D0", VA = "0x182F20CD0")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x2F20CC0", Offset = "0x2F1F2C0", VA = "0x182F20CC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x2F20130", Offset = "0x2F1E730", VA = "0x182F20130", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x2F22FC0", Offset = "0x2F215C0", VA = "0x182F22FC0")]
	public static implicit operator bool([MaybeNullWhen(false)][NotNullWhen(true)] Object exists)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x2F1FA70", Offset = "0x2F1E070", VA = "0x182F1FA70")]
	private static bool CompareBaseObjects(Object lhs, Object rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x2F22790", Offset = "0x2F20D90", VA = "0x182F22790")]
	private static bool IsNativeObjectAlive(Object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
	private IntPtr GetCachedPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000E68")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E69")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6B")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Transform parent, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6C")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6D")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6E")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E6F")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E70")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E71")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, Vector3 position, Quaternion rotation, CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E72")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E73")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations, CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E74")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E75")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E76")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Vector3 position, Quaternion rotation, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E77")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Vector3 position, Quaternion rotation, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)768)]
	[Token(Token = "0x6000E78")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x2F214B0", Offset = "0x2F1FAB0", VA = "0x182F214B0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x2F20F60", Offset = "0x2F1F560", VA = "0x182F20F60")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x2F212A0", Offset = "0x2F1F8A0", VA = "0x182F212A0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original)
	{
		return null;
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x2F21AA0", Offset = "0x2F200A0", VA = "0x182F21AA0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000E7D")]
	public static T Instantiate<T>(T original, InstantiateParameters parameters) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7E")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, InstantiateParameters parameters) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x2F20F00", Offset = "0x2F1F500", VA = "0x182F20F00")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	[Address(RVA = "0x2F21790", Offset = "0x2F1FD90", VA = "0x182F21790")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	public static T Instantiate<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E82")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E83")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	public static T Instantiate<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x2F1FED0", Offset = "0x2F1E4D0", VA = "0x182F1FED0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScripting", IsFreeFunction = true, ThrowsException = true)]
	public static void Destroy(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x2F1FF70", Offset = "0x2F1E570", VA = "0x182F1FF70")]
	[ExcludeFromDocs]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x2F1FC50", Offset = "0x2F1E250", VA = "0x182F1FC50")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScriptingImmediate", IsFreeFunction = true, ThrowsException = true)]
	public static void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets)
	{
	}

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x2F1FB90", Offset = "0x2F1E190", VA = "0x182F1FB90")]
	[ExcludeFromDocs]
	public static void DestroyImmediate(Object obj)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x2F20A20", Offset = "0x2F1F020", VA = "0x182F20A20")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID, but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x2F20A90", Offset = "0x2F1F090", VA = "0x182F20A90")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsOfType(Type type, bool includeInactive);

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x2F208F0", Offset = "0x2F1EEF0", VA = "0x182F208F0")]
	public static Object[] FindObjectsByType(Type type, FindObjectsSortMode sortMode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x2F208A0", Offset = "0x2F1EEA0", VA = "0x182F208A0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsByType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsByType(Type type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode);

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x2F20070", Offset = "0x2F1E670", VA = "0x182F20070")]
	[UnityEngine.Bindings.FreeFunction("GetSceneManager().DontDestroyOnLoad", ThrowsException = true)]
	public static void DontDestroyOnLoad([UnityEngine.Bindings.NotNull] Object target)
	{
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x2F1FCF0", Offset = "0x2F1E2F0", VA = "0x182F1FCF0")]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x2F1FDC0", Offset = "0x2F1E3C0", VA = "0x182F1FDC0")]
	[ExcludeFromDocs]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x2F20AE0", Offset = "0x2F1F0E0", VA = "0x182F20AE0")]
	[Obsolete("Object.FindSceneObjectsOfType has been deprecated, Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindSceneObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindSceneObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x2F209E0", Offset = "0x2F1EFE0", VA = "0x182F209E0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfTypeIncludingAssets")]
	[Obsolete("use Resources.FindObjectsOfTypeAll instead.")]
	public static extern Object[] FindObjectsOfTypeIncludingAssets(Type type);

	[Token(Token = "0x6000E95")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	public static T[] FindObjectsByType<T>(FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	public static T[] FindObjectsByType<T>(FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E99")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9A")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9B")]
	public static T FindFirstObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9C")]
	public static T FindAnyObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9D")]
	public static T FindFirstObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9E")]
	public static T FindAnyObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x2F20970", Offset = "0x2F1EF70", VA = "0x182F20970")]
	[Obsolete("Please use Resources.FindObjectsOfTypeAll instead")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x2F1FA10", Offset = "0x2F1E010", VA = "0x182F1FA10")]
	private static void CheckNullArgument(object arg, string message)
	{
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x2F20810", Offset = "0x2F1EE10", VA = "0x182F20810")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x2F204B0", Offset = "0x2F1EAB0", VA = "0x182F204B0")]
	public static Object FindFirstObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x2F20360", Offset = "0x2F1E960", VA = "0x182F20360")]
	public static Object FindAnyObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x2F20770", Offset = "0x2F1ED70", VA = "0x182F20770")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x2F20550", Offset = "0x2F1EB50", VA = "0x182F20550")]
	public static Object FindFirstObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x2F20400", Offset = "0x2F1EA00", VA = "0x182F20400")]
	public static Object FindAnyObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x2F22C00", Offset = "0x2F21200", VA = "0x182F22C00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x2F22EC0", Offset = "0x2F214C0", VA = "0x182F22EC0")]
	public static bool operator ==(Object x, Object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x2F23050", Offset = "0x2F21650", VA = "0x182F23050")]
	public static bool operator !=(Object x, Object y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x2F20ED0", Offset = "0x2F1F4D0", VA = "0x182F20ED0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Object::GetOffsetOfInstanceIdMember", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern int GetOffsetOfInstanceIDInCPlusPlusObject();

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x2F22110", Offset = "0x2F20710", VA = "0x182F22110")]
	[UnityEngine.Bindings.NativeMethod(Name = "CloneObject", IsFreeFunction = true, ThrowsException = true)]
	private static Object Internal_CloneSingle([UnityEngine.Bindings.NotNull] Object data)
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x2F21FF0", Offset = "0x2F205F0", VA = "0x182F21FF0")]
	[UnityEngine.Bindings.FreeFunction("CloneObjectToScene")]
	private static Object Internal_CloneSingleWithScene([UnityEngine.Bindings.NotNull] Object data, Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x2F21D00", Offset = "0x2F20300", VA = "0x182F21D00")]
	[UnityEngine.Bindings.FreeFunction("CloneObjectWithParams")]
	private static Object Internal_CloneSingleWithParams([UnityEngine.Bindings.NotNull] Object data, InstantiateParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x2F22390", Offset = "0x2F20990", VA = "0x182F22390")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObjectWithParams")]
	private static Object Internal_InstantiateSingleWithParams([UnityEngine.Bindings.NotNull] Object data, Vector3 position, Quaternion rotation, InstantiateParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x2F21E50", Offset = "0x2F20450", VA = "0x182F21E50")]
	[UnityEngine.Bindings.FreeFunction("CloneObject")]
	private static Object Internal_CloneSingleWithParent([UnityEngine.Bindings.NotNull] Object data, [UnityEngine.Bindings.NotNull] Transform parent, bool worldPositionStays)
	{
		return null;
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x2F22240", Offset = "0x2F20840", VA = "0x182F22240")]
	[UnityEngine.Bindings.FreeFunction("InstantiateAsyncObjects")]
	private static IntPtr Internal_InstantiateAsyncWithParams([UnityEngine.Bindings.NotNull] Object original, int count, InstantiateParameters parameters, IntPtr positions, int positionsCount, IntPtr rotations, int rotationsCount)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x2F22690", Offset = "0x2F20C90", VA = "0x182F22690")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingle([UnityEngine.Bindings.NotNull] Object data, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x2F224E0", Offset = "0x2F20AE0", VA = "0x182F224E0")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingleWithParent([UnityEngine.Bindings.NotNull] Object data, [UnityEngine.Bindings.NotNull] Transform parent, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x2F22C50", Offset = "0x2F21250", VA = "0x182F22C50")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ToString")]
	private static string ToString(Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x2F20DA0", Offset = "0x2F1F3A0", VA = "0x182F20DA0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::GetName", HasExplicitThis = true)]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x2F227F0", Offset = "0x2F20DF0", VA = "0x182F227F0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::IsPersistent")]
	internal static bool IsPersistent([UnityEngine.Bindings.NotNull] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x2F229E0", Offset = "0x2F20FE0", VA = "0x182F229E0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::SetName", HasExplicitThis = true)]
	private void SetName(string name)
	{
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x2F206F0", Offset = "0x2F1ECF0", VA = "0x182F206F0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceID")]
	internal static Object FindObjectFromInstanceID(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x2F20640", Offset = "0x2F1EC40", VA = "0x182F20640")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceIDThreadSafe", IsThreadSafe = true)]
	internal static Object FindObjectFromInstanceIDThreadSafe(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x2F20BC0", Offset = "0x2F1F1C0", VA = "0x182F20BC0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ForceLoadFromInstanceID")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static Object ForceLoadFromInstanceID(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x2F228F0", Offset = "0x2F20EF0", VA = "0x182F228F0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::MarkObjectDirty", HasExplicitThis = true)]
	internal void MarkDirty()
	{
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Object()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x2F1FE80", Offset = "0x2F1E480", VA = "0x182F1FE80")]
	private static extern void Destroy_Injected(IntPtr obj, [DefaultValue("0.0F")] float t);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x2F1FB40", Offset = "0x2F1E140", VA = "0x182F1FB40")]
	private static extern void DestroyImmediate_Injected(IntPtr obj, [DefaultValue("false")] bool allowDestroyingAssets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x2F20030", Offset = "0x2F1E630", VA = "0x182F20030")]
	private static extern void DontDestroyOnLoad_Injected(IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x2F22DD0", Offset = "0x2F213D0", VA = "0x182F22DD0")]
	private static extern HideFlags get_hideFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x2F23150", Offset = "0x2F21750", VA = "0x182F23150")]
	private static extern void set_hideFlags_Injected(IntPtr _unity_self, HideFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x2F220D0", Offset = "0x2F206D0", VA = "0x182F220D0")]
	private static extern IntPtr Internal_CloneSingle_Injected(IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x2F21FA0", Offset = "0x2F205A0", VA = "0x182F21FA0")]
	private static extern IntPtr Internal_CloneSingleWithScene_Injected(IntPtr data, [In] ref Scene scene);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x2F21CB0", Offset = "0x2F202B0", VA = "0x182F21CB0")]
	private static extern IntPtr Internal_CloneSingleWithParams_Injected(IntPtr data, [In] ref InstantiateParameters parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x2F22340", Offset = "0x2F20940", VA = "0x182F22340")]
	private static extern IntPtr Internal_InstantiateSingleWithParams_Injected(IntPtr data, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref InstantiateParameters parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x2F21DF0", Offset = "0x2F203F0", VA = "0x182F21DF0")]
	private static extern IntPtr Internal_CloneSingleWithParent_Injected(IntPtr data, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x2F221F0", Offset = "0x2F207F0", VA = "0x182F221F0")]
	private static extern IntPtr Internal_InstantiateAsyncWithParams_Injected(IntPtr original, int count, [In] ref InstantiateParameters parameters, IntPtr positions, int positionsCount, IntPtr rotations, int rotationsCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x2F22630", Offset = "0x2F20C30", VA = "0x182F22630")]
	private static extern IntPtr Internal_InstantiateSingle_Injected(IntPtr data, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x2F22490", Offset = "0x2F20A90", VA = "0x182F22490")]
	private static extern IntPtr Internal_InstantiateSingleWithParent_Injected(IntPtr data, IntPtr parent, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x2F22BB0", Offset = "0x2F211B0", VA = "0x182F22BB0")]
	private static extern void ToString_Injected(IntPtr obj, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x2F20D50", Offset = "0x2F1F350", VA = "0x182F20D50")]
	private static extern void GetName_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x2F227B0", Offset = "0x2F20DB0", VA = "0x182F227B0")]
	private static extern bool IsPersistent_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x2F22990", Offset = "0x2F20F90", VA = "0x182F22990")]
	private static extern void SetName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x2F206B0", Offset = "0x2F1ECB0", VA = "0x182F206B0")]
	private static extern IntPtr FindObjectFromInstanceID_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x2F20600", Offset = "0x2F1EC00", VA = "0x182F20600")]
	private static extern Object FindObjectFromInstanceIDThreadSafe_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x2F20B80", Offset = "0x2F1F180", VA = "0x182F20B80")]
	private static extern IntPtr ForceLoadFromInstanceID_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x2F228B0", Offset = "0x2F20EB0", VA = "0x182F228B0")]
	private static extern void MarkDirty_Injected(IntPtr _unity_self);
}
