// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Component
// Update status: CHANGED in this game update
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
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x2000193")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.NativeClass("Unity::Component")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/Component.bindings.h")]
public class Component : Object
{
	[Token(Token = "0x1700022D")]
	public Transform transform
	{
		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x2F14A90", Offset = "0x2F13090", VA = "0x182F14A90")]
		[UnityEngine.Bindings.FreeFunction("GetTransform", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public TransformHandle transformHandle
	{
		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x2F149C0", Offset = "0x2F12FC0", VA = "0x182F149C0")]
		[UnityEngine.Bindings.FreeFunction("GetTransformHandle", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return default(TransformHandle);
		}
	}

	[Token(Token = "0x1700022F")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x2F14830", Offset = "0x2F12E30", VA = "0x182F14830")]
		[UnityEngine.Bindings.FreeFunction("GetGameObject", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public string tag
	{
		[Token(Token = "0x6000D43")]
		[Address(RVA = "0x2F148D0", Offset = "0x2F12ED0", VA = "0x182F148D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x2F14B30", Offset = "0x2F13130", VA = "0x182F14B30")]
		set
		{
		}
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x2F13A50", Offset = "0x2F12050", VA = "0x182F13A50")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x2F131C0", Offset = "0x2F117C0", VA = "0x182F131C0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000D28")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x2F14600", Offset = "0x2F12C00", VA = "0x182F14600")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2A")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x2F13830", Offset = "0x2F11E30", VA = "0x182F13830")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x2F13390", Offset = "0x2F11990", VA = "0x182F13390")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x2F13260", Offset = "0x2F11860", VA = "0x182F13260")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D2F")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x2F13C70", Offset = "0x2F12270", VA = "0x182F13C70")]
	public Component[] GetComponentsInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x2F13D40", Offset = "0x2F12340", VA = "0x182F13D40")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D32")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D33")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result)
	{
	}

	[Token(Token = "0x6000D34")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	public void GetComponentsInChildren<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x2F135F0", Offset = "0x2F11BF0", VA = "0x182F135F0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x2F134C0", Offset = "0x2F11AC0", VA = "0x182F134C0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D38")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D39")]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x2F13E00", Offset = "0x2F12400", VA = "0x182F13E00")]
	public Component[] GetComponentsInParent(Type t, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x2F13ED0", Offset = "0x2F124D0", VA = "0x182F13ED0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000D3E")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x2F13F90", Offset = "0x2F12590", VA = "0x182F13F90")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x2F13BD0", Offset = "0x2F121D0", VA = "0x182F13BD0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	private void GetComponentsForListInternal(Type searchType, object resultList)
	{
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x2F13BD0", Offset = "0x2F121D0", VA = "0x182F13BD0")]
	public void GetComponents(Type type, List<Component> results)
	{
	}

	[Token(Token = "0x6000D42")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000D45")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x2F13760", Offset = "0x2F11D60", VA = "0x182F13760")]
	public int GetComponentIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x2F12FA0", Offset = "0x2F115A0", VA = "0x182F12FA0")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x2F13050", Offset = "0x2F11650", VA = "0x182F13050")]
	public bool CompareTag(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x2F14150", Offset = "0x2F12750", VA = "0x182F14150")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public void SendMessageUpwards(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x2F14360", Offset = "0x2F12960", VA = "0x182F14360")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName, object value)
	{
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x2F14320", Offset = "0x2F12920", VA = "0x182F14320")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName)
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x2F14340", Offset = "0x2F12940", VA = "0x182F14340")]
	public void SendMessageUpwards(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x2F145A0", Offset = "0x2F12BA0", VA = "0x182F145A0")]
	public void SendMessage(string methodName, object value)
	{
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x2F145C0", Offset = "0x2F12BC0", VA = "0x182F145C0")]
	public void SendMessage(string methodName)
	{
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x2F143D0", Offset = "0x2F129D0", VA = "0x182F143D0")]
	[UnityEngine.Bindings.FreeFunction("SendMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x2F145E0", Offset = "0x2F12BE0", VA = "0x182F145E0")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x2F12DB0", Offset = "0x2F113B0", VA = "0x182F12DB0")]
	[UnityEngine.Bindings.FreeFunction("BroadcastMessage", HasExplicitThis = true)]
	public void BroadcastMessage(string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x2F12D70", Offset = "0x2F11370", VA = "0x182F12D70")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName, object parameter)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x2F12F80", Offset = "0x2F11580", VA = "0x182F12F80")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName)
	{
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x2F12D90", Offset = "0x2F11390", VA = "0x182F12D90")]
	public void BroadcastMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x2F12960", Offset = "0x2F10F60", VA = "0x182F12960")]
	public Component()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x2F14A50", Offset = "0x2F13050", VA = "0x182F14A50")]
	private static extern IntPtr get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x2F14970", Offset = "0x2F12F70", VA = "0x182F14970")]
	private static extern void get_transformHandle_Injected(IntPtr _unity_self, out TransformHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x2F147F0", Offset = "0x2F12DF0", VA = "0x182F147F0")]
	private static extern IntPtr get_gameObject_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x2F13160", Offset = "0x2F11760", VA = "0x182F13160")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x2F137E0", Offset = "0x2F11DE0", VA = "0x182F137E0")]
	private static extern IntPtr GetComponent_Injected(IntPtr _unity_self, ref ManagedSpanWrapper type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x2F13B70", Offset = "0x2F12170", VA = "0x182F13B70")]
	private static extern void GetComponentsForListInternal_Injected(IntPtr _unity_self, Type searchType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x2F13720", Offset = "0x2F11D20", VA = "0x182F13720")]
	private static extern int GetComponentIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x2F14100", Offset = "0x2F12700", VA = "0x182F14100")]
	private static extern void SendMessageUpwards_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x2F14380", Offset = "0x2F12980", VA = "0x182F14380")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, object value, SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x2F12D20", Offset = "0x2F11320", VA = "0x182F12D20")]
	private static extern void BroadcastMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);
}
