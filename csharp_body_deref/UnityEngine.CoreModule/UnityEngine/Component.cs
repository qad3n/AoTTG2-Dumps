// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Component
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
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x2000160")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/Component.bindings.h")]
[UnityEngine.NativeClass("Unity::Component")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Component : Object
{
	[Token(Token = "0x170001C1")]
	public Transform transform
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x4DF6F50", Offset = "0x4DF6F50", VA = "0x4DF6F50")]
		[UnityEngine.Bindings.FreeFunction("GetTransform", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public GameObject gameObject
	{
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x4DF7010", Offset = "0x4DF7010", VA = "0x4DF7010")]
		[UnityEngine.Bindings.FreeFunction("GetGameObject", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public string tag
	{
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x4DF8290", Offset = "0x4DF8290", VA = "0x4DF8290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x4DF8440", Offset = "0x4DF8440", VA = "0x4DF8440")]
		set
		{
		}
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x4DF70D0", Offset = "0x4DF70D0", VA = "0x4DF70D0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x4DF7280", Offset = "0x4DF7280", VA = "0x4DF7280")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x60009E7")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x4DF7360", Offset = "0x4DF7360", VA = "0x4DF7360")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E9")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x4DF7590", Offset = "0x4DF7590", VA = "0x4DF7590")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x4DF7660", Offset = "0x4DF7660", VA = "0x4DF7660")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x4DF7830", Offset = "0x4DF7830", VA = "0x4DF7830")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009ED")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x60009EE")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x4DF7840", Offset = "0x4DF7840", VA = "0x4DF7840")]
	public Component[] GetComponentsInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x4DF7A00", Offset = "0x4DF7A00", VA = "0x4DF7A00")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009F1")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F2")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result)
	{
	}

	[Token(Token = "0x60009F3")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x60009F4")]
	public void GetComponentsInChildren<T>(List<T> results)
	{
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x4DF7AB0", Offset = "0x4DF7AB0", VA = "0x4DF7AB0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x4DF7C80", Offset = "0x4DF7C80", VA = "0x4DF7C80")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009F7")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x60009F8")]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x4DF7DA0", Offset = "0x4DF7DA0", VA = "0x4DF7DA0")]
	public Component[] GetComponentsInParent(Type t, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x4DF7F60", Offset = "0x4DF7F60", VA = "0x4DF7F60")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009FB")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009FC")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x60009FD")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x4DF7F70", Offset = "0x4DF7F70", VA = "0x4DF7F70")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x4DF8110", Offset = "0x4DF8110", VA = "0x4DF8110")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	private void GetComponentsForListInternal(Type searchType, object resultList)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x4DF81F0", Offset = "0x4DF81F0", VA = "0x4DF81F0")]
	public void GetComponents(Type type, List<Component> results)
	{
	}

	[Token(Token = "0x6000A01")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000A04")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x4DF85F0", Offset = "0x4DF85F0", VA = "0x4DF85F0")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x4DF87A0", Offset = "0x4DF87A0", VA = "0x4DF87A0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public void SendMessageUpwards(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4DF8890", Offset = "0x4DF8890", VA = "0x4DF8890")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName, object value)
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4DF8930", Offset = "0x4DF8930", VA = "0x4DF8930")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4DF89C0", Offset = "0x4DF89C0", VA = "0x4DF89C0")]
	public void SendMessageUpwards(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4DF8A60", Offset = "0x4DF8A60", VA = "0x4DF8A60")]
	public void SendMessage(string methodName, object value)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4DF8BA0", Offset = "0x4DF8BA0", VA = "0x4DF8BA0")]
	public void SendMessage(string methodName)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4DF8B00", Offset = "0x4DF8B00", VA = "0x4DF8B00")]
	[UnityEngine.Bindings.FreeFunction("SendMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4DF8C80", Offset = "0x4DF8C80", VA = "0x4DF8C80")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4DF8D20", Offset = "0x4DF8D20", VA = "0x4DF8D20")]
	[UnityEngine.Bindings.FreeFunction("BroadcastMessage", HasExplicitThis = true)]
	public void BroadcastMessage(string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x4DF8E10", Offset = "0x4DF8E10", VA = "0x4DF8E10")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName, object parameter)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x4DF8EB0", Offset = "0x4DF8EB0", VA = "0x4DF8EB0")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName)
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x4DF8F40", Offset = "0x4DF8F40", VA = "0x4DF8F40")]
	public void BroadcastMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x4DF6770", Offset = "0x4DF6770", VA = "0x4DF6770")]
	public Component()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x4DF6FE0", Offset = "0x4DF6FE0", VA = "0x4DF6FE0")]
	private static extern Transform get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x4DF70A0", Offset = "0x4DF70A0", VA = "0x4DF70A0")]
	private static extern GameObject get_gameObject_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x4DF7320", Offset = "0x4DF7320", VA = "0x4DF7320")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4DF7620", Offset = "0x4DF7620", VA = "0x4DF7620")]
	private static extern Component GetComponent_Injected(IntPtr _unity_self, string type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x4DF81B0", Offset = "0x4DF81B0", VA = "0x4DF81B0")]
	private static extern void GetComponentsForListInternal_Injected(IntPtr _unity_self, Type searchType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x4DF8840", Offset = "0x4DF8840", VA = "0x4DF8840")]
	private static extern void SendMessageUpwards_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x4DF8C30", Offset = "0x4DF8C30", VA = "0x4DF8C30")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, string methodName, object value, SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x4DF8DC0", Offset = "0x4DF8DC0", VA = "0x4DF8DC0")]
	private static extern void BroadcastMessage_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);
}
