// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Object
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20001C3")]
[UnityEngine.Bindings.NativeHeader("Runtime/SceneManager/SceneManager.h")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/UnityEngineObject.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/GameCode/CloneObject.h")]
public class Object
{
	[Token(Token = "0x20001C4")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static class MarshalledUnityObject
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000EE4")]
		public static IntPtr Marshal<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000EE5")]
		public static IntPtr MarshalNotNull<T>(T obj) where T : Object
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x6923260", Offset = "0x6922260", VA = "0x6923260")]
		public static void TryThrowEditorNullExceptionObject(Object unityObj, string paramterName)
		{
		}
	}

	[Token(Token = "0x4000656")]
	private const int kInstanceID_None = 0;

	[Token(Token = "0x4000657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_CachedPtr;

	[Token(Token = "0x4000658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int OffsetOfInstanceIDInCPlusPlusObject;

	[Token(Token = "0x4000659")]
	private const string objectIsNullMessage = "The Object you want to instantiate is null.";

	[Token(Token = "0x400065A")]
	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";

	[Token(Token = "0x1700024F")]
	public string name
	{
		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x691FEB0", Offset = "0x691EEB0", VA = "0x691FEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x691FFF0", Offset = "0x691EFF0", VA = "0x691FFF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	public HideFlags hideFlags
	{
		[Token(Token = "0x6000EA1")]
		[Address(RVA = "0x6921B50", Offset = "0x6920B50", VA = "0x6921B50")]
		get
		{
			return default(HideFlags);
		}
		[Token(Token = "0x6000EA2")]
		[Address(RVA = "0x6921C30", Offset = "0x6920C30", VA = "0x6921C30")]
		set
		{
		}
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x691FA40", Offset = "0x691EA40", VA = "0x691FA40")]
	public EntityId GetEntityId()
	{
		return default(EntityId);
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x691FAB0", Offset = "0x691EAB0", VA = "0x691FAB0")]
	public int GetInstanceID()
	{
		return default(int);
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x691FB20", Offset = "0x691EB20", VA = "0x691FB20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x691FB30", Offset = "0x691EB30", VA = "0x691FB30", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x691FDD0", Offset = "0x691EDD0", VA = "0x691FDD0")]
	public static implicit operator bool([MaybeNullWhen(false)][NotNullWhen(true)] Object exists)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E75")]
	[Address(RVA = "0x691FD40", Offset = "0x691ED40", VA = "0x691FD40")]
	private static bool CompareBaseObjects(Object lhs, Object rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E76")]
	[Address(RVA = "0x691FE80", Offset = "0x691EE80", VA = "0x691FE80")]
	private static bool IsNativeObjectAlive(Object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x691FEA0", Offset = "0x691EEA0", VA = "0x691FEA0")]
	private IntPtr GetCachedPtr()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000E7A")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7B")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7C")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7D")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Transform parent, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7E")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E7F")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E82")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E83")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, Vector3 position, Quaternion rotation, CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E84")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E85")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Transform parent, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations, CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E86")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E87")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, Vector3 position, Quaternion rotation, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E89")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, Vector3 position, Quaternion rotation, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)768)]
	[Token(Token = "0x6000E8A")]
	public static AsyncInstantiateOperation<T> InstantiateAsync<T>(T original, int count, ReadOnlySpan<Vector3> positions, ReadOnlySpan<Quaternion> rotations, InstantiateParameters parameters, [Optional] CancellationToken cancellationToken) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x69201D0", Offset = "0x691F1D0", VA = "0x69201D0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation)
	{
		return null;
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x69205A0", Offset = "0x691F5A0", VA = "0x69205A0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x69209E0", Offset = "0x691F9E0", VA = "0x69209E0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original)
	{
		return null;
	}

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x6920C80", Offset = "0x691FC80", VA = "0x6920C80")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000E8F")]
	public static T Instantiate<T>(T original, InstantiateParameters parameters) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E90")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, InstantiateParameters parameters) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x6920F40", Offset = "0x691FF40", VA = "0x6920F40")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x6920FA0", Offset = "0x691FFA0", VA = "0x6920FA0")]
	[TypeInferenceRule(TypeInferenceRules.TypeOfFirstArgument)]
	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace)
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	public static T Instantiate<T>(T original) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E94")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E96")]
	public static T Instantiate<T>(T original, Transform parent) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x69213B0", Offset = "0x69203B0", VA = "0x69213B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScripting", IsFreeFunction = true, ThrowsException = true)]
	public static void Destroy(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x69214E0", Offset = "0x69204E0", VA = "0x69214E0")]
	[ExcludeFromDocs]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x6921630", Offset = "0x6920630", VA = "0x6921630")]
	[UnityEngine.Bindings.NativeMethod(Name = "Scripting::DestroyObjectFromScriptingImmediate", IsFreeFunction = true, ThrowsException = true)]
	public static void DestroyImmediate(Object obj, [DefaultValue("false")] bool allowDestroyingAssets)
	{
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x6921750", Offset = "0x6920750", VA = "0x6921750")]
	[ExcludeFromDocs]
	public static void DestroyImmediate(Object obj)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x69218A0", Offset = "0x69208A0", VA = "0x69218A0")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID, but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x6921930", Offset = "0x6920930", VA = "0x6921930")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static extern Object[] FindObjectsOfType(Type type, bool includeInactive);

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x6921970", Offset = "0x6920970", VA = "0x6921970")]
	public static Object[] FindObjectsByType(Type type, FindObjectsSortMode sortMode)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x6921A00", Offset = "0x6920A00", VA = "0x6921A00")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsByType")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsByType(Type type, FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode);

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x6921A40", Offset = "0x6920A40", VA = "0x6921A40")]
	[UnityEngine.Bindings.FreeFunction("GetSceneManager().DontDestroyOnLoad", ThrowsException = true)]
	public static void DontDestroyOnLoad([UnityEngine.Bindings.NotNull] Object target)
	{
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x6921D30", Offset = "0x6920D30", VA = "0x6921D30")]
	[Obsolete("use Object.Destroy instead.")]
	public static void DestroyObject(Object obj, [DefaultValue("0.0F")] float t)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x6921E80", Offset = "0x6920E80", VA = "0x6921E80")]
	[Obsolete("use Object.Destroy instead.")]
	[ExcludeFromDocs]
	public static void DestroyObject(Object obj)
	{
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x6921FD0", Offset = "0x6920FD0", VA = "0x6921FD0")]
	[Obsolete("Object.FindSceneObjectsOfType has been deprecated, Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindSceneObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static Object[] FindSceneObjectsOfType(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x69220A0", Offset = "0x69210A0", VA = "0x69220A0")]
	[Obsolete("use Resources.FindObjectsOfTypeAll instead.")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectsOfTypeIncludingAssets")]
	public static extern Object[] FindObjectsOfTypeIncludingAssets(Type type);

	[Token(Token = "0x6000EA7")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EA8")]
	public static T[] FindObjectsByType<T>(FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EA9")]
	[Obsolete("Object.FindObjectsOfType has been deprecated. Use Object.FindObjectsByType instead which lets you decide whether you need the results sorted or not.  FindObjectsOfType sorts the results by InstanceID but if you do not need this using FindObjectSortMode.None is considerably faster.", false)]
	public static T[] FindObjectsOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAA")]
	public static T[] FindObjectsByType<T>(FindObjectsInactive findObjectsInactive, FindObjectsSortMode sortMode) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAB")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAC")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static T FindObjectOfType<T>(bool includeInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAD")]
	public static T FindFirstObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAE")]
	public static T FindAnyObjectByType<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EAF")]
	public static T FindFirstObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EB0")]
	public static T FindAnyObjectByType<T>(FindObjectsInactive findObjectsInactive) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x69220D0", Offset = "0x69210D0", VA = "0x69220D0")]
	[Obsolete("Please use Resources.FindObjectsOfTypeAll instead")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x6920430", Offset = "0x691F430", VA = "0x6920430")]
	private static void CheckNullArgument(object arg, string message)
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x6922150", Offset = "0x6921150", VA = "0x6922150")]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public static Object FindObjectOfType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x69221F0", Offset = "0x69211F0", VA = "0x69221F0")]
	public static Object FindFirstObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x69222A0", Offset = "0x69212A0", VA = "0x69222A0")]
	public static Object FindAnyObjectByType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x6922350", Offset = "0x6921350", VA = "0x6922350")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[Obsolete("Object.FindObjectOfType has been deprecated. Use Object.FindFirstObjectByType instead or if finding any instance is acceptable the faster Object.FindAnyObjectByType", false)]
	public static Object FindObjectOfType(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x6922400", Offset = "0x6921400", VA = "0x6922400")]
	public static Object FindFirstObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x69224C0", Offset = "0x69214C0", VA = "0x69224C0")]
	public static Object FindAnyObjectByType(Type type, FindObjectsInactive findObjectsInactive)
	{
		return null;
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x6922580", Offset = "0x6921580", VA = "0x6922580", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x691B640", Offset = "0x691A640", VA = "0x691B640")]
	public static bool operator ==(Object x, Object y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x6919AD0", Offset = "0x6918AD0", VA = "0x6919AD0")]
	public static bool operator !=(Object x, Object y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x6922720", Offset = "0x6921720", VA = "0x6922720")]
	[UnityEngine.Bindings.NativeMethod(Name = "Object::GetOffsetOfInstanceIdMember", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern int GetOffsetOfInstanceIDInCPlusPlusObject();

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x6920B80", Offset = "0x691FB80", VA = "0x6920B80")]
	[UnityEngine.Bindings.NativeMethod(Name = "CloneObject", IsFreeFunction = true, ThrowsException = true)]
	private static Object Internal_CloneSingle([UnityEngine.Bindings.NotNull] Object data)
	{
		return null;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x6920E30", Offset = "0x691FE30", VA = "0x6920E30")]
	[UnityEngine.Bindings.FreeFunction("CloneObjectToScene")]
	private static Object Internal_CloneSingleWithScene([UnityEngine.Bindings.NotNull] Object data, Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x69227C0", Offset = "0x69217C0", VA = "0x69227C0")]
	[UnityEngine.Bindings.FreeFunction("CloneObjectWithParams")]
	private static Object Internal_CloneSingleWithParams([UnityEngine.Bindings.NotNull] Object data, InstantiateParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x6922920", Offset = "0x6921920", VA = "0x6922920")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObjectWithParams")]
	private static Object Internal_InstantiateSingleWithParams([UnityEngine.Bindings.NotNull] Object data, Vector3 position, Quaternion rotation, InstantiateParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x6921220", Offset = "0x6920220", VA = "0x6921220")]
	[UnityEngine.Bindings.FreeFunction("CloneObject")]
	private static Object Internal_CloneSingleWithParent([UnityEngine.Bindings.NotNull] Object data, [UnityEngine.Bindings.NotNull] Transform parent, bool worldPositionStays)
	{
		return null;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x6922AE0", Offset = "0x6921AE0", VA = "0x6922AE0")]
	[UnityEngine.Bindings.FreeFunction("InstantiateAsyncObjects")]
	private static IntPtr Internal_InstantiateAsyncWithParams([UnityEngine.Bindings.NotNull] Object original, int count, InstantiateParameters parameters, IntPtr positions, int positionsCount, IntPtr rotations, int rotationsCount)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x6920480", Offset = "0x691F480", VA = "0x6920480")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingle([UnityEngine.Bindings.NotNull] Object data, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x6920840", Offset = "0x691F840", VA = "0x6920840")]
	[UnityEngine.Bindings.FreeFunction("InstantiateObject")]
	private static Object Internal_InstantiateSingleWithParent([UnityEngine.Bindings.NotNull] Object data, [UnityEngine.Bindings.NotNull] Transform parent, Vector3 pos, Quaternion rot)
	{
		return null;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x69225E0", Offset = "0x69215E0", VA = "0x69225E0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ToString")]
	private static string ToString(Object obj)
	{
		return null;
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x691FEC0", Offset = "0x691EEC0", VA = "0x691FEC0")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::GetName", HasExplicitThis = true)]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x6922D70", Offset = "0x6921D70", VA = "0x6922D70")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::IsPersistent")]
	internal static bool IsPersistent([UnityEngine.Bindings.NotNull] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x6920000", Offset = "0x691F000", VA = "0x6920000")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::SetName", HasExplicitThis = true)]
	private void SetName(string name)
	{
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x6922EC0", Offset = "0x6921EC0", VA = "0x6922EC0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceID")]
	internal static Object FindObjectFromInstanceID(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x6922F90", Offset = "0x6921F90", VA = "0x6922F90")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::FindObjectFromInstanceIDThreadSafe", IsThreadSafe = true)]
	internal static Object FindObjectFromInstanceIDThreadSafe(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x6923050", Offset = "0x6922050", VA = "0x6923050")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::ForceLoadFromInstanceID")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal static Object ForceLoadFromInstanceID(EntityId instanceID)
	{
		return null;
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x6923120", Offset = "0x6922120", VA = "0x6923120")]
	[UnityEngine.Bindings.FreeFunction("UnityEngineObjectBindings::MarkObjectDirty", HasExplicitThis = true)]
	internal void MarkDirty()
	{
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x6916DA0", Offset = "0x6915DA0", VA = "0x6916DA0")]
	public Object()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x6921490", Offset = "0x6920490", VA = "0x6921490")]
	private static extern void Destroy_Injected(IntPtr obj, [DefaultValue("0.0F")] float t);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x6921710", Offset = "0x6920710", VA = "0x6921710")]
	private static extern void DestroyImmediate_Injected(IntPtr obj, [DefaultValue("false")] bool allowDestroyingAssets);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x6921B20", Offset = "0x6920B20", VA = "0x6921B20")]
	private static extern void DontDestroyOnLoad_Injected(IntPtr target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x6921C00", Offset = "0x6920C00", VA = "0x6921C00")]
	private static extern HideFlags get_hideFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x6921CF0", Offset = "0x6920CF0", VA = "0x6921CF0")]
	private static extern void set_hideFlags_Injected(IntPtr _unity_self, HideFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x6922750", Offset = "0x6921750", VA = "0x6922750")]
	private static extern IntPtr Internal_CloneSingle_Injected(IntPtr data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x6922780", Offset = "0x6921780", VA = "0x6922780")]
	private static extern IntPtr Internal_CloneSingleWithScene_Injected(IntPtr data, [In] ref Scene scene);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x69228E0", Offset = "0x69218E0", VA = "0x69228E0")]
	private static extern IntPtr Internal_CloneSingleWithParams_Injected(IntPtr data, [In] ref InstantiateParameters parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x6922A50", Offset = "0x6921A50", VA = "0x6922A50")]
	private static extern IntPtr Internal_InstantiateSingleWithParams_Injected(IntPtr data, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref InstantiateParameters parameters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x6922AA0", Offset = "0x6921AA0", VA = "0x6922AA0")]
	private static extern IntPtr Internal_CloneSingleWithParent_Injected(IntPtr data, IntPtr parent, bool worldPositionStays);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x6922C00", Offset = "0x6921C00", VA = "0x6922C00")]
	private static extern IntPtr Internal_InstantiateAsyncWithParams_Injected(IntPtr original, int count, [In] ref InstantiateParameters parameters, IntPtr positions, int positionsCount, IntPtr rotations, int rotationsCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x6922C60", Offset = "0x6921C60", VA = "0x6922C60")]
	private static extern IntPtr Internal_InstantiateSingle_Injected(IntPtr data, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x6922CA0", Offset = "0x6921CA0", VA = "0x6922CA0")]
	private static extern IntPtr Internal_InstantiateSingleWithParent_Injected(IntPtr data, IntPtr parent, [In] ref Vector3 pos, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x6922CF0", Offset = "0x6921CF0", VA = "0x6922CF0")]
	private static extern void ToString_Injected(IntPtr obj, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x6922D30", Offset = "0x6921D30", VA = "0x6922D30")]
	private static extern void GetName_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x6922E50", Offset = "0x6921E50", VA = "0x6922E50")]
	private static extern bool IsPersistent_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x6922E80", Offset = "0x6921E80", VA = "0x6922E80")]
	private static extern void SetName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x6922F60", Offset = "0x6921F60", VA = "0x6922F60")]
	private static extern IntPtr FindObjectFromInstanceID_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x6923020", Offset = "0x6922020", VA = "0x6923020")]
	private static extern Object FindObjectFromInstanceIDThreadSafe_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x69230F0", Offset = "0x69220F0", VA = "0x69230F0")]
	private static extern IntPtr ForceLoadFromInstanceID_Injected([In] ref EntityId instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x69231D0", Offset = "0x69221D0", VA = "0x69231D0")]
	private static extern void MarkDirty_Injected(IntPtr _unity_self);
}
