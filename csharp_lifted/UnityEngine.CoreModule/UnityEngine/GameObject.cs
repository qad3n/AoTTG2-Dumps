// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GameObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.SceneManagement;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x20001A2")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/GameObject.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class GameObject : Object
{
	[Token(Token = "0x17000238")]
	public Transform transform
	{
		[Token(Token = "0x6000DB3")]
		[Address(RVA = "0x6919F90", Offset = "0x6918F90", VA = "0x6919F90")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTransform", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public int layer
	{
		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x691A060", Offset = "0x6919060", VA = "0x691A060")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x691A110", Offset = "0x6919110", VA = "0x691A110")]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	public bool activeSelf
	{
		[Token(Token = "0x6000DB7")]
		[Address(RVA = "0x691A290", Offset = "0x6919290", VA = "0x691A290")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsSelfActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023B")]
	public bool activeInHierarchy
	{
		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x691A340", Offset = "0x6919340", VA = "0x691A340")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023C")]
	public bool isStatic
	{
		[Token(Token = "0x6000DB9")]
		[Address(RVA = "0x691A3F0", Offset = "0x69193F0", VA = "0x691A3F0")]
		[UnityEngine.Bindings.NativeMethod(Name = "SetIsStaticDeprecated")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	public string tag
	{
		[Token(Token = "0x6000DBA")]
		[Address(RVA = "0x69161F0", Offset = "0x69151F0", VA = "0x69161F0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTag", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DBB")]
		[Address(RVA = "0x6916320", Offset = "0x6915320", VA = "0x6916320")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::SetTag", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public Scene scene
	{
		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x691AD80", Offset = "0x6919D80", VA = "0x691AD80")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetScene", HasExplicitThis = true)]
		get
		{
			return default(Scene);
		}
	}

	[Token(Token = "0x1700023F")]
	public ulong sceneCullingMask
	{
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x691AE50", Offset = "0x6919E50", VA = "0x691AE50")]
		[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetSceneCullingMask", HasExplicitThis = true)]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000240")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x691AF00", Offset = "0x6919F00", VA = "0x691AF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x6919430", Offset = "0x6918430", VA = "0x6919430")]
	[UnityEngine.Bindings.FreeFunction("GameObjectBindings::CreatePrimitive")]
	public static GameObject CreatePrimitive(PrimitiveType type)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x6915420", Offset = "0x6914420", VA = "0x6915420")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x6919500", Offset = "0x6918500", VA = "0x6919500")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x69195D0", Offset = "0x69185D0", VA = "0x69195D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::GetScriptingWrapperOfComponentOfGameObject", HasExplicitThis = true)]
	internal Component GetComponentByName(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x6919850", Offset = "0x6918850", VA = "0x6919850")]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x6915970", Offset = "0x6914970", VA = "0x6915970")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInChildren", HasExplicitThis = true, ThrowsException = true)]
	public Component GetComponentInChildren(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x69198A0", Offset = "0x69188A0", VA = "0x69198A0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D97")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D98")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x6915CA0", Offset = "0x6914CA0", VA = "0x6915CA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInParent", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x69198F0", Offset = "0x69188F0", VA = "0x69198F0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D9B")]
	[ExcludeFromDocs]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D9C")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x6919900", Offset = "0x6918900", VA = "0x6919900")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentsInternal", HasExplicitThis = true, ThrowsException = true)]
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList)
	{
		return null;
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x6915F40", Offset = "0x6914F40", VA = "0x6915F40")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D9F")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000DA0")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x6919A10", Offset = "0x6918A10", VA = "0x6919A10")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x6915B10", Offset = "0x6914B10", VA = "0x6915B10")]
	public Component[] GetComponentsInChildren(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000DA3")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000DA4")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000DA5")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x6919A20", Offset = "0x6918A20", VA = "0x6919A20")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x6915DB0", Offset = "0x6914DB0", VA = "0x6915DB0")]
	public Component[] GetComponentsInParent(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000DA8")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000DA9")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000DAA")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000DAB")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x69155C0", Offset = "0x69145C0", VA = "0x69155C0")]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x6919A30", Offset = "0x6918A30", VA = "0x6919A30")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	internal Component TryGetComponentInternal(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x6919C00", Offset = "0x6918C00", VA = "0x6919C00")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x6919CD0", Offset = "0x6918CD0", VA = "0x6919CD0")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x6919EA0", Offset = "0x6918EA0", VA = "0x6919EA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MonoAddComponentWithType", HasExplicitThis = true)]
	private Component Internal_AddComponentWithType(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x6919F80", Offset = "0x6918F80", VA = "0x6919F80")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component AddComponent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	public T AddComponent<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x691A1D0", Offset = "0x69191D0", VA = "0x691A1D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "SetSelfActive")]
	public void SetActive(bool value)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x69165A0", Offset = "0x69155A0", VA = "0x69165A0")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x6916650", Offset = "0x6915650", VA = "0x6916650")]
	public bool CompareTag(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x691A530", Offset = "0x6919530", VA = "0x691A530")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTag", HasExplicitThis = true)]
	private bool CompareTag_Internal(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x691A6E0", Offset = "0x69196E0", VA = "0x691A6E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTagHandle", HasExplicitThis = true)]
	private bool CompareTagHandle_Internal(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x6919CE0", Offset = "0x6918CE0", VA = "0x6919CE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::SendScriptingMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x691A840", Offset = "0x6919840", VA = "0x691A840")]
	public GameObject(string name)
	{
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x691AA10", Offset = "0x6919A10", VA = "0x691AA10")]
	public GameObject()
	{
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x691AA60", Offset = "0x6919A60", VA = "0x691AA60")]
	public GameObject(string name, params Type[] components)
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x691A8A0", Offset = "0x69198A0", VA = "0x691A8A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Internal_CreateGameObject")]
	private static void Internal_CreateGameObject([UnityEngine.Writable] GameObject self, string name)
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x691AB50", Offset = "0x6919B50", VA = "0x691AB50")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Find")]
	public static GameObject Find(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x6919490", Offset = "0x6918490", VA = "0x6919490")]
	private static extern IntPtr CreatePrimitive_Injected(PrimitiveType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x69194C0", Offset = "0x69184C0", VA = "0x69194C0")]
	private static extern IntPtr GetComponent_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x6919590", Offset = "0x6918590", VA = "0x6919590")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x6919810", Offset = "0x6918810", VA = "0x6919810")]
	private static extern IntPtr GetComponentByName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x6919860", Offset = "0x6918860", VA = "0x6919860")]
	private static extern IntPtr GetComponentInChildren_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x69198B0", Offset = "0x69188B0", VA = "0x69198B0")]
	private static extern IntPtr GetComponentInParent_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x69199B0", Offset = "0x69189B0", VA = "0x69199B0")]
	private static extern Array GetComponentsInternal_Injected(IntPtr _unity_self, Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x6919BC0", Offset = "0x6918BC0", VA = "0x6919BC0")]
	private static extern IntPtr TryGetComponentInternal_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x6919C90", Offset = "0x6918C90", VA = "0x6919C90")]
	private static extern void TryGetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x6919F40", Offset = "0x6918F40", VA = "0x6919F40")]
	private static extern IntPtr Internal_AddComponentWithType_Injected(IntPtr _unity_self, Type componentType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x691A030", Offset = "0x6919030", VA = "0x691A030")]
	private static extern IntPtr get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x691A0E0", Offset = "0x69190E0", VA = "0x691A0E0")]
	private static extern int get_layer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x691A190", Offset = "0x6919190", VA = "0x691A190")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x691A250", Offset = "0x6919250", VA = "0x691A250")]
	private static extern void SetActive_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x691A310", Offset = "0x6919310", VA = "0x691A310")]
	private static extern bool get_activeSelf_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x691A3C0", Offset = "0x69193C0", VA = "0x691A3C0")]
	private static extern bool get_activeInHierarchy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x691A470", Offset = "0x6919470", VA = "0x691A470")]
	private static extern void set_isStatic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x691A4B0", Offset = "0x69194B0", VA = "0x691A4B0")]
	private static extern void get_tag_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x691A4F0", Offset = "0x69194F0", VA = "0x691A4F0")]
	private static extern void set_tag_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x691A770", Offset = "0x6919770", VA = "0x691A770")]
	private static extern bool CompareTag_Internal_Injected(IntPtr _unity_self, ref ManagedSpanWrapper tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x691A7B0", Offset = "0x69197B0", VA = "0x691A7B0")]
	private static extern bool CompareTagHandle_Internal_Injected(IntPtr _unity_self, [In] ref TagHandle tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x691A7F0", Offset = "0x69197F0", VA = "0x691A7F0")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x691AB10", Offset = "0x6919B10", VA = "0x691AB10")]
	private static extern void Internal_CreateGameObject_Injected([UnityEngine.Writable] GameObject self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x691AD50", Offset = "0x6919D50", VA = "0x691AD50")]
	private static extern IntPtr Find_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x691AE10", Offset = "0x6919E10", VA = "0x691AE10")]
	private static extern void get_scene_Injected(IntPtr _unity_self, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x691AED0", Offset = "0x6919ED0", VA = "0x691AED0")]
	private static extern ulong get_sceneCullingMask_Injected(IntPtr _unity_self);
}
