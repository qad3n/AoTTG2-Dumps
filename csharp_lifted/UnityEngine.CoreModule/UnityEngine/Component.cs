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

[Token(Token = "0x2000194")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/Component.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.NativeClass("Unity::Component")]
public class Component : Object
{
	[Token(Token = "0x17000232")]
	public Transform transform
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x6915190", Offset = "0x6914190", VA = "0x6915190")]
		[UnityEngine.Bindings.FreeFunction("GetTransform", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000233")]
	public TransformHandle transformHandle
	{
		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x6915260", Offset = "0x6914260", VA = "0x6915260")]
		[UnityEngine.Bindings.FreeFunction("GetTransformHandle", HasExplicitThis = true, ThrowsException = true)]
		get
		{
			return default(TransformHandle);
		}
	}

	[Token(Token = "0x17000234")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x6915330", Offset = "0x6914330", VA = "0x6915330")]
		[UnityEngine.Bindings.FreeFunction("GetGameObject", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public string tag
	{
		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x69161D0", Offset = "0x69151D0", VA = "0x69161D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x6916300", Offset = "0x6915300", VA = "0x6916300")]
		set
		{
		}
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x6915400", Offset = "0x6914400", VA = "0x6915400")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x69154C0", Offset = "0x69144C0", VA = "0x69154C0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue)
	{
	}

	[Token(Token = "0x6000D3A")]
	public T GetComponent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x6915590", Offset = "0x6914590", VA = "0x6915590")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public bool TryGetComponent(Type type, out Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3C")]
	public bool TryGetComponent<T>(out T component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x69156C0", Offset = "0x69146C0", VA = "0x69156C0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public Component GetComponent(string type)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x6915940", Offset = "0x6914940", VA = "0x6915940")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x6915A20", Offset = "0x6914A20", VA = "0x6915A20")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	public T GetComponentInChildren<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D41")]
	[ExcludeFromDocs]
	public T GetComponentInChildren<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x6915AE0", Offset = "0x6914AE0", VA = "0x6915AE0")]
	public Component[] GetComponentsInChildren(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x6915C40", Offset = "0x6914C40", VA = "0x6915C40")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInChildren(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	public T[] GetComponentsInChildren<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result)
	{
	}

	[Token(Token = "0x6000D46")]
	public T[] GetComponentsInChildren<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D47")]
	public void GetComponentsInChildren<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x6915C70", Offset = "0x6914C70", VA = "0x6915C70")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t, bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x6915D50", Offset = "0x6914D50", VA = "0x6915D50")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	public Component GetComponentInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	public T GetComponentInParent<T>([DefaultValue("false")] bool includeInactive)
	{
		return (T)null;
	}

	[Token(Token = "0x6000D4B")]
	public T GetComponentInParent<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x6915D80", Offset = "0x6914D80", VA = "0x6915D80")]
	public Component[] GetComponentsInParent(Type t, [DefaultValue("false")] bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x6915EF0", Offset = "0x6914EF0", VA = "0x6915EF0")]
	[ExcludeFromDocs]
	public Component[] GetComponentsInParent(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000D4E")]
	public T[] GetComponentsInParent<T>(bool includeInactive)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results)
	{
	}

	[Token(Token = "0x6000D50")]
	public T[] GetComponentsInParent<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x6915F20", Offset = "0x6914F20", VA = "0x6915F20")]
	public Component[] GetComponents(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x6916070", Offset = "0x6915070", VA = "0x6916070")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true, ThrowsException = true)]
	private void GetComponentsForListInternal(Type searchType, object resultList)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x6916140", Offset = "0x6915140", VA = "0x6916140")]
	public void GetComponents(Type type, List<Component> results)
	{
	}

	[Token(Token = "0x6000D54")]
	public void GetComponents<T>(List<T> results)
	{
	}

	[Token(Token = "0x6000D57")]
	public T[] GetComponents<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x69164D0", Offset = "0x69154D0", VA = "0x69164D0")]
	public int GetComponentIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x6916580", Offset = "0x6915580", VA = "0x6916580")]
	public bool CompareTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x69165B0", Offset = "0x69155B0", VA = "0x69165B0")]
	public bool CompareTag(TagHandle tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x69166E0", Offset = "0x69156E0", VA = "0x69166E0")]
	[UnityEngine.Bindings.FreeFunction(HasExplicitThis = true)]
	public void SendMessageUpwards(string methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x69168F0", Offset = "0x69158F0", VA = "0x69168F0")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName, object value)
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x6916900", Offset = "0x6915900", VA = "0x6916900")]
	[ExcludeFromDocs]
	public void SendMessageUpwards(string methodName)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x6916910", Offset = "0x6915910", VA = "0x6916910")]
	public void SendMessageUpwards(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x6916920", Offset = "0x6915920", VA = "0x6916920")]
	public void SendMessage(string methodName, object value)
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x6916AF0", Offset = "0x6915AF0", VA = "0x6916AF0")]
	public void SendMessage(string methodName)
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x6916930", Offset = "0x6915930", VA = "0x6916930")]
	[UnityEngine.Bindings.FreeFunction("SendMessage", HasExplicitThis = true)]
	public void SendMessage(string methodName, object value, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x6916B50", Offset = "0x6915B50", VA = "0x6916B50")]
	public void SendMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x6916B60", Offset = "0x6915B60", VA = "0x6916B60")]
	[UnityEngine.Bindings.FreeFunction("BroadcastMessage", HasExplicitThis = true)]
	public void BroadcastMessage(string methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x6916D70", Offset = "0x6915D70", VA = "0x6916D70")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName, object parameter)
	{
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x6916D80", Offset = "0x6915D80", VA = "0x6916D80")]
	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x6916D90", Offset = "0x6915D90", VA = "0x6916D90")]
	public void BroadcastMessage(string methodName, SendMessageOptions options)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x6914AE0", Offset = "0x6913AE0", VA = "0x6914AE0")]
	public Component()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x6915230", Offset = "0x6914230", VA = "0x6915230")]
	private static extern IntPtr get_transform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x69152F0", Offset = "0x69142F0", VA = "0x69152F0")]
	private static extern void get_transformHandle_Injected(IntPtr _unity_self, out TransformHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x69153D0", Offset = "0x69143D0", VA = "0x69153D0")]
	private static extern IntPtr get_gameObject_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x6915550", Offset = "0x6914550", VA = "0x6915550")]
	private static extern void GetComponentFastPath_Injected(IntPtr _unity_self, Type type, IntPtr oneFurtherThanResultValue);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x6915900", Offset = "0x6914900", VA = "0x6915900")]
	private static extern IntPtr GetComponent_Injected(IntPtr _unity_self, ref ManagedSpanWrapper type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x6916100", Offset = "0x6915100", VA = "0x6916100")]
	private static extern void GetComponentsForListInternal_Injected(IntPtr _unity_self, Type searchType, object resultList);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x6916550", Offset = "0x6915550", VA = "0x6916550")]
	private static extern int GetComponentIndex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x69168A0", Offset = "0x69158A0", VA = "0x69168A0")]
	private static extern void SendMessageUpwards_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object value, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x6916B00", Offset = "0x6915B00", VA = "0x6916B00")]
	private static extern void SendMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, object value, SendMessageOptions options);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x6916D20", Offset = "0x6915D20", VA = "0x6916D20")]
	private static extern void BroadcastMessage_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, [DefaultValue("null")] object parameter, [DefaultValue("SendMessageOptions.RequireReceiver")] SendMessageOptions options);
}
