using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x200015D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/Component.bindings.h")]
[UnityEngine.NativeClass("Unity::Component")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Component : Object
{
	[Token(Token = "0x170001C0")]
	public Transform transform
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x4ACF620", Offset = "0x4ACF620", VA = "0x4ACF620")]
		[UnityEngine.Bindings.FreeFunction("GetTransform", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public GameObject gameObject
	{
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x4ACF6E0", Offset = "0x4ACF6E0", VA = "0x4ACF6E0")]
		[UnityEngine.Bindings.FreeFunction("GetGameObject", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public string tag
	{
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x4AD0960", Offset = "0x4AD0960", VA = "0x4AD0960")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x4AD0B10", Offset = "0x4AD0B10", VA = "0x4AD0B10")]
		set
		{
		}
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x4ACF7A0", Offset = "0x4ACF7A0", VA = "0x4ACF7A0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x4ACF950", Offset = "0x4ACF950", VA = "0x4ACF950")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x60009E5")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x4ACFA30", Offset = "0x4ACFA30", VA = "0x4ACFA30")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E7")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x4ACFC60", Offset = "0x4ACFC60", VA = "0x4ACFC60")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x4ACFD30", Offset = "0x4ACFD30", VA = "0x4ACFD30")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x4ACFF00", Offset = "0x4ACFF00", VA = "0x4ACFF00")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x60009EC")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x4ACFF10", Offset = "0x4ACFF10", VA = "0x4ACFF10")]
	public Component[] GetComponentsInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x4AD00D0", Offset = "0x4AD00D0", VA = "0x4AD00D0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009EF")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F0")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result)
	{
	}

	[Token(Token = "0x60009F1")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x60009F2")]
	public void GetComponentsInChildren<T>(List<T> results)
	{
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x4AD0180", Offset = "0x4AD0180", VA = "0x4AD0180")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x4AD0350", Offset = "0x4AD0350", VA = "0x4AD0350")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009F5")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x60009F6")]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x4AD0470", Offset = "0x4AD0470", VA = "0x4AD0470")]
	public Component[] GetComponentsInParent(Type t, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x4AD0630", Offset = "0x4AD0630", VA = "0x4AD0630")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x60009F9")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x60009FA")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x60009FB")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x4AD0640", Offset = "0x4AD0640", VA = "0x4AD0640")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x4AD07E0", Offset = "0x4AD07E0", VA = "0x4AD07E0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	private void GetComponentsForListInternal(Type searchType, object resultList)
	{
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x4AD08C0", Offset = "0x4AD08C0", VA = "0x4AD08C0")]
	public void GetComponents(Type type, List<Component> results)
	{
	}

	[Token(Token = "0x60009FF")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000A02")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x4AD0CC0", Offset = "0x4AD0CC0", VA = "0x4AD0CC0")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x4AD0E70", Offset = "0x4AD0E70", VA = "0x4AD0E70")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public void SendMessageUpwards(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x4AD0F60", Offset = "0x4AD0F60", VA = "0x4AD0F60")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName, object value)
	{
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x4AD1000", Offset = "0x4AD1000", VA = "0x4AD1000")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName)
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4AD1090", Offset = "0x4AD1090", VA = "0x4AD1090")]
	public void SendMessageUpwards(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4AD1130", Offset = "0x4AD1130", VA = "0x4AD1130")]
	public void SendMessage(string methodName, object value)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4AD1270", Offset = "0x4AD1270", VA = "0x4AD1270")]
	public void SendMessage(string methodName)
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4AD11D0", Offset = "0x4AD11D0", VA = "0x4AD11D0")]
	[UnityEngine.Bindings.FreeFunction("SendMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4AD1350", Offset = "0x4AD1350", VA = "0x4AD1350")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4AD13F0", Offset = "0x4AD13F0", VA = "0x4AD13F0")]
	[UnityEngine.Bindings.FreeFunction("BroadcastMessage", HasExplicitThis = true)]
	public void BroadcastMessage(string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4AD14E0", Offset = "0x4AD14E0", VA = "0x4AD14E0")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName, object parameter)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4AD1580", Offset = "0x4AD1580", VA = "0x4AD1580")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x4AD1610", Offset = "0x4AD1610", VA = "0x4AD1610")]
	public void BroadcastMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x4ACEE40", Offset = "0x4ACEE40", VA = "0x4ACEE40")]
	public Component()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x4ACF6B0", Offset = "0x4ACF6B0", VA = "0x4ACF6B0")]
	private static extern Transform get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x4ACF770", Offset = "0x4ACF770", VA = "0x4ACF770")]
	private static extern GameObject get_gameObject_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x4ACF9F0", Offset = "0x4ACF9F0", VA = "0x4ACF9F0")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x4ACFCF0", Offset = "0x4ACFCF0", VA = "0x4ACFCF0")]
	private static extern Component GetComponent_Injected(IntPtr _unity_self, string type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x4AD0880", Offset = "0x4AD0880", VA = "0x4AD0880")]
	private static extern void GetComponentsForListInternal_Injected(IntPtr _unity_self, Type searchType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4AD0F10", Offset = "0x4AD0F10", VA = "0x4AD0F10")]
	private static extern void SendMessageUpwards_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x4AD1300", Offset = "0x4AD1300", VA = "0x4AD1300")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, string methodName, object value, SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x4AD1490", Offset = "0x4AD1490", VA = "0x4AD1490")]
	private static extern void BroadcastMessage_Injected(IntPtr _unity_self, string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);
}
