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

[Token(Token = "0x200016A")]
[ExcludeFromPreset]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/GameObject.bindings.h")]
public sealed class GameObject : Object
{
	[Token(Token = "0x170001C5")]
	public Transform transform
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x4AD4360", Offset = "0x4AD4360", VA = "0x4AD4360")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTransform", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public int layer
	{
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x4AD4420", Offset = "0x4AD4420", VA = "0x4AD4420")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x4AD44E0", Offset = "0x4AD44E0", VA = "0x4AD44E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	public bool activeSelf
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x4AD4680", Offset = "0x4AD4680", VA = "0x4AD4680")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsSelfActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C8")]
	public bool activeInHierarchy
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x4AD4740", Offset = "0x4AD4740", VA = "0x4AD4740")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C9")]
	public bool isStatic
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x4AD4800", Offset = "0x4AD4800", VA = "0x4AD4800")]
		[UnityEngine.Bindings.NativeMethod(Name = "SetIsStaticDeprecated")]
		set
		{
		}
	}

	[Token(Token = "0x170001CA")]
	public string tag
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x4AD0A80", Offset = "0x4AD0A80", VA = "0x4AD0A80")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTag", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x4AD0C30", Offset = "0x4AD0C30", VA = "0x4AD0C30")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::SetTag", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public Scene scene
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x4AD4CA0", Offset = "0x4AD4CA0", VA = "0x4AD4CA0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetScene", HasExplicitThis = true)]
		get
		{
			return default(Scene);
		}
	}

	[Token(Token = "0x170001CC")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x4AD4D80", Offset = "0x4AD4D80", VA = "0x4AD4D80")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x4AD3B30", Offset = "0x4AD3B30", VA = "0x4AD3B30")]
	[UnityEngine.Bindings.FreeFunction("GameObjectBindings::CreatePrimitive")]
	public static extern GameObject CreatePrimitive(PrimitiveType type);

	[Token(Token = "0x6000A36")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4ACF8C0", Offset = "0x4ACF8C0", VA = "0x4ACF8C0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x4AD3BA0", Offset = "0x4AD3BA0", VA = "0x4AD3BA0")]
	[UnityEngine.Bindings.NativeWritableSelf]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal extern void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue);

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x4ACFE60", Offset = "0x4ACFE60", VA = "0x4ACFE60")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInChildren", HasExplicitThis = true, ThrowsException = true)]
	public Component GetComponentInChildren(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x4AD3C20", Offset = "0x4AD3C20", VA = "0x4AD3C20")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A3B")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A3C")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4AD02B0", Offset = "0x4AD02B0", VA = "0x4AD02B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInParent", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4AD3CF0", Offset = "0x4AD3CF0", VA = "0x4AD3CF0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A3F")]
	[ExcludeFromDocs]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A40")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x4AD3D80", Offset = "0x4AD3D80", VA = "0x4AD3D80")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentsInternal", HasExplicitThis = true, ThrowsException = true)]
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList)
	{
		return null;
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x4AD06E0", Offset = "0x4AD06E0", VA = "0x4AD06E0")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A43")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A44")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x4AD3EA0", Offset = "0x4AD3EA0", VA = "0x4AD3EA0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x4ACFFC0", Offset = "0x4ACFFC0", VA = "0x4ACFFC0")]
	public Component[] GetComponentsInChildren(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000A49")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x4AD3EB0", Offset = "0x4AD3EB0", VA = "0x4AD3EB0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4AD0520", Offset = "0x4AD0520", VA = "0x4AD0520")]
	public Component[] GetComponentsInParent(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A4C")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000A4D")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000A4E")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A4F")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x4ACFAE0", Offset = "0x4ACFAE0", VA = "0x4ACFAE0")]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x4AD3EC0", Offset = "0x4AD3EC0", VA = "0x4AD3EC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	internal Component TryGetComponentInternal(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x4AD4080", Offset = "0x4AD4080", VA = "0x4AD4080")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	[UnityEngine.Bindings.NativeWritableSelf]
	internal extern void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue);

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x4AD40C0", Offset = "0x4AD40C0", VA = "0x4AD40C0")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4AD4200", Offset = "0x4AD4200", VA = "0x4AD4200")]
	[UnityEngine.Bindings.FreeFunction(Name = "MonoAddComponentWithType", HasExplicitThis = true)]
	private Component Internal_AddComponentWithType(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x4AD42D0", Offset = "0x4AD42D0", VA = "0x4AD42D0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component AddComponent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	public T AddComponent<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x4AD45B0", Offset = "0x4AD45B0", VA = "0x4AD45B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "SetSelfActive")]
	public void SetActive(bool value)
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x4AD0DE0", Offset = "0x4AD0DE0", VA = "0x4AD0DE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTag", HasExplicitThis = true)]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x4AD4160", Offset = "0x4AD4160", VA = "0x4AD4160")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::SendScriptingMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x4AD49D0", Offset = "0x4AD49D0", VA = "0x4AD49D0")]
	public GameObject(string name)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4AD4A90", Offset = "0x4AD4A90", VA = "0x4AD4A90")]
	public GameObject()
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x4AD4B10", Offset = "0x4AD4B10", VA = "0x4AD4B10")]
	public GameObject(string name, params Type[] components)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x4AD4A50", Offset = "0x4AD4A50", VA = "0x4AD4A50")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Internal_CreateGameObject")]
	private static extern void Internal_CreateGameObject([UnityEngine.Writable] GameObject self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x4AD4C70", Offset = "0x4AD4C70", VA = "0x4AD4C70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Find")]
	public static extern GameObject Find(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x4AD3B60", Offset = "0x4AD3B60", VA = "0x4AD3B60")]
	private static extern Component GetComponent_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x4AD3BE0", Offset = "0x4AD3BE0", VA = "0x4AD3BE0")]
	private static extern Component GetComponentInChildren_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4AD3CB0", Offset = "0x4AD3CB0", VA = "0x4AD3CB0")]
	private static extern Component GetComponentInParent_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4AD3E40", Offset = "0x4AD3E40", VA = "0x4AD3E40")]
	private static extern Array GetComponentsInternal_Injected(IntPtr _unity_self, Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4AD4040", Offset = "0x4AD4040", VA = "0x4AD4040")]
	private static extern Component TryGetComponentInternal_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x4AD4290", Offset = "0x4AD4290", VA = "0x4AD4290")]
	private static extern Component Internal_AddComponentWithType_Injected(IntPtr _unity_self, Type componentType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4AD43F0", Offset = "0x4AD43F0", VA = "0x4AD43F0")]
	private static extern Transform get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4AD44B0", Offset = "0x4AD44B0", VA = "0x4AD44B0")]
	private static extern int get_layer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4AD4570", Offset = "0x4AD4570", VA = "0x4AD4570")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4AD4640", Offset = "0x4AD4640", VA = "0x4AD4640")]
	private static extern void SetActive_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x4AD4710", Offset = "0x4AD4710", VA = "0x4AD4710")]
	private static extern bool get_activeSelf_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x4AD47D0", Offset = "0x4AD47D0", VA = "0x4AD47D0")]
	private static extern bool get_activeInHierarchy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4AD4890", Offset = "0x4AD4890", VA = "0x4AD4890")]
	private static extern void set_isStatic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x4AD48D0", Offset = "0x4AD48D0", VA = "0x4AD48D0")]
	private static extern string get_tag_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x4AD4900", Offset = "0x4AD4900", VA = "0x4AD4900")]
	private static extern void set_tag_Injected(IntPtr _unity_self, string value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4AD4940", Offset = "0x4AD4940", VA = "0x4AD4940")]
	private static extern bool CompareTag_Injected(IntPtr _unity_self, string tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4AD4980", Offset = "0x4AD4980", VA = "0x4AD4980")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x4AD4D40", Offset = "0x4AD4D40", VA = "0x4AD4D40")]
	private static extern void get_scene_Injected(IntPtr _unity_self, out Scene ret);
}
