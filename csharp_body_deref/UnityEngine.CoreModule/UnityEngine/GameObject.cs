// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GameObject
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001A1")]
[UnityEngine.Scripting.UsedByNativeCode]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/GameObject.bindings.h")]
public sealed class GameObject : Object
{
	[Token(Token = "0x17000233")]
	public Transform transform
	{
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x2F1B300", Offset = "0x2F19900", VA = "0x182F1B300")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTransform", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public int layer
	{
		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x2F1AF40", Offset = "0x2F19540", VA = "0x182F1AF40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x2F1B4C0", Offset = "0x2F19AC0", VA = "0x182F1B4C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000235")]
	public bool activeSelf
	{
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x2F1AE80", Offset = "0x2F19480", VA = "0x182F1AE80")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsSelfActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000236")]
	public bool activeInHierarchy
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x2F1ADC0", Offset = "0x2F193C0", VA = "0x182F1ADC0")]
		[UnityEngine.Bindings.NativeMethod(Name = "IsActive")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000237")]
	public bool isStatic
	{
		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x2F1B3F0", Offset = "0x2F199F0", VA = "0x182F1B3F0")]
		[UnityEngine.Bindings.NativeMethod(Name = "SetIsStaticDeprecated")]
		set
		{
		}
	}

	[Token(Token = "0x17000238")]
	public string tag
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x2F1B1B0", Offset = "0x2F197B0", VA = "0x182F1B1B0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetTag", HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x2F1B5A0", Offset = "0x2F19BA0", VA = "0x182F1B5A0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::SetTag", HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000239")]
	public Scene scene
	{
		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x2F1B0D0", Offset = "0x2F196D0", VA = "0x182F1B0D0")]
		[UnityEngine.Bindings.FreeFunction("GameObjectBindings::GetScene", HasExplicitThis = true)]
		get
		{
			return default(Scene);
		}
	}

	[Token(Token = "0x1700023A")]
	public ulong sceneCullingMask
	{
		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x2F1B000", Offset = "0x2F19600", VA = "0x182F1B000")]
		[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetSceneCullingMask", HasExplicitThis = true)]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700023B")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000DB6")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x2F193E0", Offset = "0x2F179E0", VA = "0x182F193E0")]
	[UnityEngine.Bindings.FreeFunction("GameObjectBindings::CreatePrimitive")]
	public static GameObject CreatePrimitive(PrimitiveType type)
	{
		return null;
	}

	[Token(Token = "0x6000D7E")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x2F19DD0", Offset = "0x2F183D0", VA = "0x182F19DD0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x2F19930", Offset = "0x2F17F30", VA = "0x182F19930")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x2F196B0", Offset = "0x2F17CB0", VA = "0x182F196B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::GetScriptingWrapperOfComponentOfGameObject", HasExplicitThis = true)]
	internal Component GetComponentByName(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x2F19DC0", Offset = "0x2F183C0", VA = "0x182F19DC0")]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x2F19AE0", Offset = "0x2F180E0", VA = "0x182F19AE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInChildren", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x2F19A30", Offset = "0x2F18030", VA = "0x182F19A30")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D85")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D86")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x2F19C00", Offset = "0x2F18200", VA = "0x182F19C00")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentInParent", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x2F19CC0", Offset = "0x2F182C0", VA = "0x182F19CC0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[ExcludeFromDocs]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D8A")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x2F1A100", Offset = "0x2F18700", VA = "0x182F1A100")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::GetComponentsInternal", HasExplicitThis = true, ThrowsException = true)]
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList)
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x2F1A1C0", Offset = "0x2F187C0", VA = "0x182F1A1C0")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D8D")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D8E")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x2F19F70", Offset = "0x2F18570", VA = "0x182F19F70")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x2F19E70", Offset = "0x2F18470", VA = "0x182F19E70")]
	public Component[] GetComponentsInChildren(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000D93")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x2F19F80", Offset = "0x2F18580", VA = "0x182F19F80")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x2F19F90", Offset = "0x2F18590", VA = "0x182F19F90")]
	public Component[] GetComponentsInParent(Type type, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D96")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000D97")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D98")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D99")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x2F1A9F0", Offset = "0x2F18FF0", VA = "0x182F1A9F0")]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x2F1A950", Offset = "0x2F18F50", VA = "0x182F1A950")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFromType", HasExplicitThis = true, ThrowsException = true)]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	internal Component TryGetComponentInternal(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x2F1A860", Offset = "0x2F18E60", VA = "0x182F1A860")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::TryGetComponentFastPath", HasExplicitThis = true, ThrowsException = true)]
	internal void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x2F1A700", Offset = "0x2F18D00", VA = "0x182F1A700")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x2F18F80", Offset = "0x2F17580", VA = "0x182F18F80")]
	[UnityEngine.Bindings.FreeFunction(Name = "MonoAddComponentWithType", HasExplicitThis = true)]
	private Component Internal_AddComponentWithType(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x2F18F80", Offset = "0x2F17580", VA = "0x182F18F80")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component AddComponent(Type componentType)
	{
		return null;
	}

	[Token(Token = "0x6000DA0")]
	public T AddComponent<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x2F1A770", Offset = "0x2F18D70", VA = "0x182F1A770")]
	[UnityEngine.Bindings.NativeMethod(Name = "SetSelfActive")]
	public void SetActive(bool value)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x2F19310", Offset = "0x2F17910", VA = "0x182F19310")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x2F19320", Offset = "0x2F17920", VA = "0x182F19320")]
	public bool CompareTag(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x2F19140", Offset = "0x2F17740", VA = "0x182F19140")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTag", HasExplicitThis = true)]
	private bool CompareTag_Internal(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x2F19070", Offset = "0x2F17670", VA = "0x182F19070")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::CompareTagHandle", HasExplicitThis = true)]
	private bool CompareTagHandle_Internal(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x2F1A530", Offset = "0x2F18B30", VA = "0x182F1A530")]
	[UnityEngine.Bindings.FreeFunction(Name = "Scripting::SendScriptingMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x2F1AB70", Offset = "0x2F19170", VA = "0x182F1AB70")]
	public GameObject(string name)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x2F1AD20", Offset = "0x2F19320", VA = "0x182F1AD20")]
	public GameObject()
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x2F1ABE0", Offset = "0x2F191E0", VA = "0x182F1ABE0")]
	public GameObject(string name, params Type[] components)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x2F1A350", Offset = "0x2F18950", VA = "0x182F1A350")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Internal_CreateGameObject")]
	private static void Internal_CreateGameObject([UnityEngine.Writable] GameObject self, string name)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x2F19480", Offset = "0x2F17A80", VA = "0x182F19480")]
	[UnityEngine.Bindings.FreeFunction(Name = "GameObjectBindings::Find")]
	public static GameObject Find(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x2F193A0", Offset = "0x2F179A0", VA = "0x182F193A0")]
	private static extern IntPtr CreatePrimitive_Injected(PrimitiveType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x2F19D70", Offset = "0x2F18370", VA = "0x182F19D70")]
	private static extern IntPtr GetComponent_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x2F198D0", Offset = "0x2F17ED0", VA = "0x182F198D0")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x2F19660", Offset = "0x2F17C60", VA = "0x182F19660")]
	private static extern IntPtr GetComponentByName_Injected(IntPtr _unity_self, ref ManagedSpanWrapper type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x2F199D0", Offset = "0x2F17FD0", VA = "0x182F199D0")]
	private static extern IntPtr GetComponentInChildren_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x2F19BA0", Offset = "0x2F181A0", VA = "0x182F19BA0")]
	private static extern IntPtr GetComponentInParent_Injected(IntPtr _unity_self, Type type, bool includeInactive);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x2F1A090", Offset = "0x2F18690", VA = "0x182F1A090")]
	private static extern Array GetComponentsInternal_Injected(IntPtr _unity_self, Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x2F1A900", Offset = "0x2F18F00", VA = "0x182F1A900")]
	private static extern IntPtr TryGetComponentInternal_Injected(IntPtr _unity_self, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x2F1A800", Offset = "0x2F18E00", VA = "0x182F1A800")]
	private static extern void TryGetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x2F1A2B0", Offset = "0x2F188B0", VA = "0x182F1A2B0")]
	private static extern IntPtr Internal_AddComponentWithType_Injected(IntPtr _unity_self, Type componentType);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x2F1B2C0", Offset = "0x2F198C0", VA = "0x182F1B2C0")]
	private static extern IntPtr get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x2F1AF00", Offset = "0x2F19500", VA = "0x182F1AF00")]
	private static extern int get_layer_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x2F1B480", Offset = "0x2F19A80", VA = "0x182F1B480")]
	private static extern void set_layer_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x2F1A720", Offset = "0x2F18D20", VA = "0x182F1A720")]
	private static extern void SetActive_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x2F1AE40", Offset = "0x2F19440", VA = "0x182F1AE40")]
	private static extern bool get_activeSelf_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x2F1AD80", Offset = "0x2F19380", VA = "0x182F1AD80")]
	private static extern bool get_activeInHierarchy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x2F1B3A0", Offset = "0x2F199A0", VA = "0x182F1B3A0")]
	private static extern void set_isStatic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x2F1B160", Offset = "0x2F19760", VA = "0x182F1B160")]
	private static extern void get_tag_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x2F1B550", Offset = "0x2F19B50", VA = "0x182F1B550")]
	private static extern void set_tag_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x2F190F0", Offset = "0x2F176F0", VA = "0x182F190F0")]
	private static extern bool CompareTag_Internal_Injected(IntPtr _unity_self, ref ManagedSpanWrapper tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x2F19020", Offset = "0x2F17620", VA = "0x182F19020")]
	private static extern bool CompareTagHandle_Internal_Injected(IntPtr _unity_self, [In] ref TagHandle tag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x2F1A4E0", Offset = "0x2F18AE0", VA = "0x182F1A4E0")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x2F1A300", Offset = "0x2F18900", VA = "0x182F1A300")]
	private static extern void Internal_CreateGameObject_Injected([UnityEngine.Writable] GameObject self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x2F19440", Offset = "0x2F17A40", VA = "0x182F19440")]
	private static extern IntPtr Find_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x2F1B080", Offset = "0x2F19680", VA = "0x182F1B080")]
	private static extern void get_scene_Injected(IntPtr _unity_self, out Scene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x2F1AFC0", Offset = "0x2F195C0", VA = "0x182F1AFC0")]
	private static extern ulong get_sceneCullingMask_Injected(IntPtr _unity_self);
}
