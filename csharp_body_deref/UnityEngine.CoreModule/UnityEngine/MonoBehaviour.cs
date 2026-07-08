using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000171")]
[UnityEngine.Scripting.RequiredByNativeCode]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/DelayedCallUtility.h")]
public class MonoBehaviour : Behaviour
{
	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource m_CancellationTokenSource;

	[Token(Token = "0x170001D2")]
	public CancellationToken destroyCancellationToken
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x4AD5150", Offset = "0x4AD5150", VA = "0x4AD5150")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001D3")]
	public bool useGUILayout
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x4AD6550", Offset = "0x4AD6550", VA = "0x4AD6550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x4AD6610", Offset = "0x4AD6610", VA = "0x4AD6610")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public bool didStart
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x4AD66E0", Offset = "0x4AD66E0", VA = "0x4AD66E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D5")]
	public bool didAwake
	{
		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x4AD67A0", Offset = "0x4AD67A0", VA = "0x4AD67A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4AD52E0", Offset = "0x4AD52E0", VA = "0x4AD52E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void RaiseCancellation()
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x4AD5300", Offset = "0x4AD5300", VA = "0x4AD5300")]
	public bool IsInvoking()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4AD5420", Offset = "0x4AD5420", VA = "0x4AD5420")]
	public void CancelInvoke()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4AD5540", Offset = "0x4AD5540", VA = "0x4AD5540")]
	public void Invoke(string methodName, float time)
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4AD56A0", Offset = "0x4AD56A0", VA = "0x4AD56A0")]
	public void InvokeRepeating(string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4AD5820", Offset = "0x4AD5820", VA = "0x4AD5820")]
	public void CancelInvoke(string methodName)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4AD5940", Offset = "0x4AD5940", VA = "0x4AD5940")]
	public bool IsInvoking(string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4AD5A60", Offset = "0x4AD5A60", VA = "0x4AD5A60")]
	[ExcludeFromDocs]
	public Coroutine StartCoroutine(string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4AD5A70", Offset = "0x4AD5A70", VA = "0x4AD5A70")]
	public Coroutine StartCoroutine(string methodName, [DefaultValue("null")] object value)
	{
		return null;
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4AD5D50", Offset = "0x4AD5D50", VA = "0x4AD5D50")]
	public Coroutine StartCoroutine(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4AD5F70", Offset = "0x4AD5F70", VA = "0x4AD5F70")]
	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
	public Coroutine StartCoroutine_Auto(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4AD5F80", Offset = "0x4AD5F80", VA = "0x4AD5F80")]
	public void StopCoroutine(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4AD61A0", Offset = "0x4AD61A0", VA = "0x4AD61A0")]
	public void StopCoroutine(Coroutine routine)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4AD63C0", Offset = "0x4AD63C0", VA = "0x4AD63C0")]
	public void StopCoroutine(string methodName)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4AD6490", Offset = "0x4AD6490", VA = "0x4AD6490")]
	public void StopAllCoroutines()
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x4AD6860", Offset = "0x4AD6860", VA = "0x4AD6860")]
	public static void print(object message)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x4AD54B0", Offset = "0x4AD54B0", VA = "0x4AD54B0")]
	[UnityEngine.Bindings.FreeFunction("CancelInvoke")]
	private static void Internal_CancelInvokeAll([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self)
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x4AD5390", Offset = "0x4AD5390", VA = "0x4AD5390")]
	[UnityEngine.Bindings.FreeFunction("IsInvoking")]
	private static bool Internal_IsInvokingAll([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x4AD55F0", Offset = "0x4AD55F0", VA = "0x4AD55F0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void InvokeDelayed([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x4AD58B0", Offset = "0x4AD58B0", VA = "0x4AD58B0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void CancelInvoke([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName)
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4AD59D0", Offset = "0x4AD59D0", VA = "0x4AD59D0")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsInvoking([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x4AD5C20", Offset = "0x4AD5C20", VA = "0x4AD5C20")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsObjectMonoBehaviour([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x4AD5CB0", Offset = "0x4AD5CB0", VA = "0x4AD5CB0")]
	private Coroutine StartCoroutineManaged(string methodName, object value)
	{
		return null;
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x4AD5EE0", Offset = "0x4AD5EE0", VA = "0x4AD5EE0")]
	private Coroutine StartCoroutineManaged2(IEnumerator enumerator)
	{
		return null;
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4AD6330", Offset = "0x4AD6330", VA = "0x4AD6330")]
	private void StopCoroutineManaged(Coroutine routine)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x4AD6110", Offset = "0x4AD6110", VA = "0x4AD6110")]
	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4AD6B30", Offset = "0x4AD6B30", VA = "0x4AD6B30")]
	internal string GetScriptClassName()
	{
		return null;
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4AD5250", Offset = "0x4AD5250", VA = "0x4AD5250")]
	private void OnCancellationTokenCreated()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4AD6C20", Offset = "0x4AD6C20", VA = "0x4AD6C20")]
	public MonoBehaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x4AD6450", Offset = "0x4AD6450", VA = "0x4AD6450")]
	private static extern void StopCoroutine_Injected(IntPtr _unity_self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x4AD6520", Offset = "0x4AD6520", VA = "0x4AD6520")]
	private static extern void StopAllCoroutines_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x4AD65E0", Offset = "0x4AD65E0", VA = "0x4AD65E0")]
	private static extern bool get_useGUILayout_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x4AD66A0", Offset = "0x4AD66A0", VA = "0x4AD66A0")]
	private static extern void set_useGUILayout_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x4AD6770", Offset = "0x4AD6770", VA = "0x4AD6770")]
	private static extern bool get_didStart_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x4AD6830", Offset = "0x4AD6830", VA = "0x4AD6830")]
	private static extern bool get_didAwake_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x4AD68D0", Offset = "0x4AD68D0", VA = "0x4AD68D0")]
	private static extern void Internal_CancelInvokeAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x4AD6900", Offset = "0x4AD6900", VA = "0x4AD6900")]
	private static extern bool Internal_IsInvokingAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x4AD6930", Offset = "0x4AD6930", VA = "0x4AD6930")]
	private static extern void InvokeDelayed_Injected(IntPtr self, string methodName, float time, float repeatRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x4AD6980", Offset = "0x4AD6980", VA = "0x4AD6980")]
	private static extern void CancelInvoke_Injected(IntPtr self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x4AD69C0", Offset = "0x4AD69C0", VA = "0x4AD69C0")]
	private static extern bool IsInvoking_Injected(IntPtr self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x4AD6A00", Offset = "0x4AD6A00", VA = "0x4AD6A00")]
	private static extern bool IsObjectMonoBehaviour_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x4AD6A30", Offset = "0x4AD6A30", VA = "0x4AD6A30")]
	private static extern Coroutine StartCoroutineManaged_Injected(IntPtr _unity_self, string methodName, object value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x4AD6A70", Offset = "0x4AD6A70", VA = "0x4AD6A70")]
	private static extern Coroutine StartCoroutineManaged2_Injected(IntPtr _unity_self, IEnumerator enumerator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x4AD6AB0", Offset = "0x4AD6AB0", VA = "0x4AD6AB0")]
	private static extern void StopCoroutineManaged_Injected(IntPtr _unity_self, Coroutine routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x4AD6AF0", Offset = "0x4AD6AF0", VA = "0x4AD6AF0")]
	private static extern void StopCoroutineFromEnumeratorManaged_Injected(IntPtr _unity_self, IEnumerator routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x4AD6BC0", Offset = "0x4AD6BC0", VA = "0x4AD6BC0")]
	private static extern string GetScriptClassName_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x4AD6BF0", Offset = "0x4AD6BF0", VA = "0x4AD6BF0")]
	private static extern void OnCancellationTokenCreated_Injected(IntPtr _unity_self);
}
