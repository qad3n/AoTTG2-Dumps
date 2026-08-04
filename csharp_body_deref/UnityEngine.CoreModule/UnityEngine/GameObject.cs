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
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.SceneManagement;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x200016D")]
[ExcludeFromPreset]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/GameObject.bindings.h")]
public sealed class GameObject : Object
{
	[Token(Token = "0x170001C6")]
	public Transform transform
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x4DFBC90", Offset = "0x4DFBC90", VA = "0x4DFBC90")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTransform", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	public int layer
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x4DFBD50", Offset = "0x4DFBD50", VA = "0x4DFBD50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x4DFBE10", Offset = "0x4DFBE10", VA = "0x4DFBE10")]
		set
		{
		}
	}

	[Token(Token = "0x170001C8")]
	public bool activeSelf
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x4DFBFB0", Offset = "0x4DFBFB0", VA = "0x4DFBFB0")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsSelfActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool activeInHierarchy
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x4DFC070", Offset = "0x4DFC070", VA = "0x4DFC070")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CA")]
	public bool isStatic
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x4DFC130", Offset = "0x4DFC130", VA = "0x4DFC130")]
		[UnityEngine.Bindings.NativeMethod(Name = "SetIsStaticDeprecated")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public string tag
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x4DF83B0", Offset = "0x4DF83B0", VA = "0x4DF83B0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTag", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x4DF8560", Offset = "0x4DF8560", VA = "0x4DF8560")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::SetTag", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	public Scene scene
	{
		[Token(Token = "0x6000A69")]
		[Address(RVA = "0x4DFC5D0", Offset = "0x4DFC5D0", VA = "0x4DFC5D0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetScene", HasExplicitThis = true)]
		get
		{
			return default(Scene);
		}
	}

	[Token(Token = "0x170001CD")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x4DFC6B0", Offset = "0x4DFC6B0", VA = "0x4DFC6B0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4DFB460", Offset = "0x4DFB460", VA = "0x4DFB460")]
	[UnityEngine.Bindings.FreeFunction("GameObjectBindings::CreatePrimitive")]
	public static extern GameObject CreatePrimitive(PrimitiveType type);

	[Token(Token = "0x6000A38")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x4DF71F0", Offset = "0x4DF71F0", VA = "0x4DF71F0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x4DFB4D0", Offset = "0x4DFB4D0", VA = "0x4DFB4D0")]
	[UnityEngine.Bindings.NativeWritableSelf]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal extern void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue);

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x4DF7790", Offset = "0x4DF7790", VA = "0x4DF7790")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInChildren", HasExplicitThis = true, ThrowsException = true)]
	public Component GetComponentInChildren(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x4DFB550", Offset = "0x4DFB550", VA = "0x4DFB550")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A3D")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A3E")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x4DF7BE0", Offset = "0x4DF7BE0", VA = "0x4DF7BE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInParent", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x4DFB620", Offset = "0x4DFB620", VA = "0x4DFB620")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A41")]
	[ExcludeFromDocs]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A42")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x4DFB6B0", Offset = "0x4DFB6B0", VA = "0x4DFB6B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentsInternal", HasExplicitThis = true, ThrowsException = true)]
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList)
	{
		return null;
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x4DF8010", Offset = "0x4DF8010", VA = "0x4DF8010")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A45")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A46")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x4DFB7D0", Offset = "0x4DFB7D0", VA = "0x4DFB7D0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x4DF78F0", Offset = "0x4DF78F0", VA = "0x4DF78F0")]
	public Component[] GetComponentsInChildren(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A49")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000A4B")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4DFB7E0", Offset = "0x4DFB7E0", VA = "0x4DFB7E0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4DF7E50", Offset = "0x4DF7E50", VA = "0x4DF7E50")]
	public Component[] GetComponentsInParent(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A4E")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000A4F")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A50")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x4DF7410", Offset = "0x4DF7410", VA = "0x4DF7410")]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x4DFB7F0", Offset = "0x4DFB7F0", VA = "0x4DFB7F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	internal Component TryGetComponentInternal(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4DFB9B0", Offset = "0x4DFB9B0", VA = "0x4DFB9B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	[UnityEngine.Bindings.NativeWritableSelf]
	internal extern void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue);

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x4DFB9F0", Offset = "0x4DFB9F0", VA = "0x4DFB9F0")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x4DFBB30", Offset = "0x4DFBB30", VA = "0x4DFBB30")]
	[UnityEngine.Bindings.FreeFunction(Name = "MonoAddComponentWithType", HasExplicitThis = true)]
	private Component Internal_AddComponentWithType(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x4DFBC00", Offset = "0x4DFBC00", VA = "0x4DFBC00")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component AddComponent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	public T AddComponent<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x4DFBEE0", Offset = "0x4DFBEE0", VA = "0x4DFBEE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "SetSelfActive")]
	public void SetActive(bool value)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x4DF8710", Offset = "0x4DF8710", VA = "0x4DF8710")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTag", HasExplicitThis = true)]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4DFBA90", Offset = "0x4DFBA90", VA = "0x4DFBA90")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::SendScriptingMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x4DFC300", Offset = "0x4DFC300", VA = "0x4DFC300")]
	public GameObject(string name)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x4DFC3C0", Offset = "0x4DFC3C0", VA = "0x4DFC3C0")]
	public GameObject()
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x4DFC440", Offset = "0x4DFC440", VA = "0x4DFC440")]
	public GameObject(string name, params Type[] components)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x4DFC380", Offset = "0x4DFC380", VA = "0x4DFC380")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Internal_CreateGameObject")]
	private static extern void Internal_CreateGameObject([UnityEngine.Writable] GameObject self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x4DFC5A0", Offset = "0x4DFC5A0", VA = "0x4DFC5A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Find")]
	public static extern GameObject Find(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4DFB490", Offset = "0x4DFB490", VA = "0x4DFB490")]
	private static extern Component GetComponent_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4DFB510", Offset = "0x4DFB510", VA = "0x4DFB510")]
	private static extern Component GetComponentInChildren_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4DFB5E0", Offset = "0x4DFB5E0", VA = "0x4DFB5E0")]
	private static extern Component GetComponentInParent_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x4DFB770", Offset = "0x4DFB770", VA = "0x4DFB770")]
	private static extern Array GetComponentsInternal_Injected(IntPtr _unity_self, Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4DFB970", Offset = "0x4DFB970", VA = "0x4DFB970")]
	private static extern Component TryGetComponentInternal_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4DFBBC0", Offset = "0x4DFBBC0", VA = "0x4DFBBC0")]
	private static extern Component Internal_AddComponentWithType_Injected(IntPtr _unity_self, Type componentType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4DFBD20", Offset = "0x4DFBD20", VA = "0x4DFBD20")]
	private static extern Transform get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4DFBDE0", Offset = "0x4DFBDE0", VA = "0x4DFBDE0")]
	private static extern int get_layer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x4DFBEA0", Offset = "0x4DFBEA0", VA = "0x4DFBEA0")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x4DFBF70", Offset = "0x4DFBF70", VA = "0x4DFBF70")]
	private static extern void SetActive_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4DFC040", Offset = "0x4DFC040", VA = "0x4DFC040")]
	private static extern bool get_activeSelf_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x4DFC100", Offset = "0x4DFC100", VA = "0x4DFC100")]
	private static extern bool get_activeInHierarchy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x4DFC1C0", Offset = "0x4DFC1C0", VA = "0x4DFC1C0")]
	private static extern void set_isStatic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4DFC200", Offset = "0x4DFC200", VA = "0x4DFC200")]
	private static extern string get_tag_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4DFC230", Offset = "0x4DFC230", VA = "0x4DFC230")]
	private static extern void set_tag_Injected(IntPtr _unity_self, string value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x4DFC270", Offset = "0x4DFC270", VA = "0x4DFC270")]
	private static extern bool CompareTag_Injected(IntPtr _unity_self, string tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x4DFC2B0", Offset = "0x4DFC2B0", VA = "0x4DFC2B0")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x4DFC670", Offset = "0x4DFC670", VA = "0x4DFC670")]
	private static extern void get_scene_Injected(IntPtr _unity_self, out Scene ret);
}
