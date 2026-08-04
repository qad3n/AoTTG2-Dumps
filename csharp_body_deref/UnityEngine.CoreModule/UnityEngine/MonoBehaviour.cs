// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MonoBehaviour
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000174")]
[UnityEngine.Scripting.RequiredByNativeCode]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/DelayedCallUtility.h")]
public class MonoBehaviour : Behaviour
{
	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource m_CancellationTokenSource;

	[Token(Token = "0x170001D3")]
	public CancellationToken destroyCancellationToken
	{
		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x4DFCA80", Offset = "0x4DFCA80", VA = "0x4DFCA80")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001D4")]
	public bool useGUILayout
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x4DFDE80", Offset = "0x4DFDE80", VA = "0x4DFDE80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x4DFDF40", Offset = "0x4DFDF40", VA = "0x4DFDF40")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	public bool didStart
	{
		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x4DFE010", Offset = "0x4DFE010", VA = "0x4DFE010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	public bool didAwake
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x4DFE0D0", Offset = "0x4DFE0D0", VA = "0x4DFE0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4DFCC10", Offset = "0x4DFCC10", VA = "0x4DFCC10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void RaiseCancellation()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4DFCC30", Offset = "0x4DFCC30", VA = "0x4DFCC30")]
	public bool IsInvoking()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4DFCD50", Offset = "0x4DFCD50", VA = "0x4DFCD50")]
	public void CancelInvoke()
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4DFCE70", Offset = "0x4DFCE70", VA = "0x4DFCE70")]
	public void Invoke(string methodName, float time)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4DFCFD0", Offset = "0x4DFCFD0", VA = "0x4DFCFD0")]
	public void InvokeRepeating(string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4DFD150", Offset = "0x4DFD150", VA = "0x4DFD150")]
	public void CancelInvoke(string methodName)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4DFD270", Offset = "0x4DFD270", VA = "0x4DFD270")]
	public bool IsInvoking(string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4DFD390", Offset = "0x4DFD390", VA = "0x4DFD390")]
	[ExcludeFromDocs]
	public Coroutine StartCoroutine(string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4DFD3A0", Offset = "0x4DFD3A0", VA = "0x4DFD3A0")]
	public Coroutine StartCoroutine(string methodName, [DefaultValue("null")] object value)
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4DFD680", Offset = "0x4DFD680", VA = "0x4DFD680")]
	public Coroutine StartCoroutine(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4DFD8A0", Offset = "0x4DFD8A0", VA = "0x4DFD8A0")]
	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
	public Coroutine StartCoroutine_Auto(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4DFD8B0", Offset = "0x4DFD8B0", VA = "0x4DFD8B0")]
	public void StopCoroutine(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4DFDAD0", Offset = "0x4DFDAD0", VA = "0x4DFDAD0")]
	public void StopCoroutine(Coroutine routine)
	{
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x4DFDCF0", Offset = "0x4DFDCF0", VA = "0x4DFDCF0")]
	public void StopCoroutine(string methodName)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x4DFDDC0", Offset = "0x4DFDDC0", VA = "0x4DFDDC0")]
	public void StopAllCoroutines()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x4DFE190", Offset = "0x4DFE190", VA = "0x4DFE190")]
	public static void print(object message)
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x4DFCDE0", Offset = "0x4DFCDE0", VA = "0x4DFCDE0")]
	[UnityEngine.Bindings.FreeFunction("CancelInvoke")]
	private static void Internal_CancelInvokeAll([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self)
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x4DFCCC0", Offset = "0x4DFCCC0", VA = "0x4DFCCC0")]
	[UnityEngine.Bindings.FreeFunction("IsInvoking")]
	private static bool Internal_IsInvokingAll([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4DFCF20", Offset = "0x4DFCF20", VA = "0x4DFCF20")]
	[UnityEngine.Bindings.FreeFunction]
	private static void InvokeDelayed([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x4DFD1E0", Offset = "0x4DFD1E0", VA = "0x4DFD1E0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void CancelInvoke([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x4DFD300", Offset = "0x4DFD300", VA = "0x4DFD300")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsInvoking([UnityEngine.Bindings.NotNull("NullExceptionObject")] MonoBehaviour self, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x4DFD550", Offset = "0x4DFD550", VA = "0x4DFD550")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsObjectMonoBehaviour([UnityEngine.Bindings.NotNull("NullExceptionObject")] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4DFD5E0", Offset = "0x4DFD5E0", VA = "0x4DFD5E0")]
	private Coroutine StartCoroutineManaged(string methodName, object value)
	{
		return null;
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x4DFD810", Offset = "0x4DFD810", VA = "0x4DFD810")]
	private Coroutine StartCoroutineManaged2(IEnumerator enumerator)
	{
		return null;
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4DFDC60", Offset = "0x4DFDC60", VA = "0x4DFDC60")]
	private void StopCoroutineManaged(Coroutine routine)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4DFDA40", Offset = "0x4DFDA40", VA = "0x4DFDA40")]
	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4DFE460", Offset = "0x4DFE460", VA = "0x4DFE460")]
	internal string GetScriptClassName()
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x4DFCB80", Offset = "0x4DFCB80", VA = "0x4DFCB80")]
	private void OnCancellationTokenCreated()
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x4DFE550", Offset = "0x4DFE550", VA = "0x4DFE550")]
	public MonoBehaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x4DFDD80", Offset = "0x4DFDD80", VA = "0x4DFDD80")]
	private static extern void StopCoroutine_Injected(IntPtr _unity_self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x4DFDE50", Offset = "0x4DFDE50", VA = "0x4DFDE50")]
	private static extern void StopAllCoroutines_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x4DFDF10", Offset = "0x4DFDF10", VA = "0x4DFDF10")]
	private static extern bool get_useGUILayout_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x4DFDFD0", Offset = "0x4DFDFD0", VA = "0x4DFDFD0")]
	private static extern void set_useGUILayout_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x4DFE0A0", Offset = "0x4DFE0A0", VA = "0x4DFE0A0")]
	private static extern bool get_didStart_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x4DFE160", Offset = "0x4DFE160", VA = "0x4DFE160")]
	private static extern bool get_didAwake_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x4DFE200", Offset = "0x4DFE200", VA = "0x4DFE200")]
	private static extern void Internal_CancelInvokeAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x4DFE230", Offset = "0x4DFE230", VA = "0x4DFE230")]
	private static extern bool Internal_IsInvokingAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x4DFE260", Offset = "0x4DFE260", VA = "0x4DFE260")]
	private static extern void InvokeDelayed_Injected(IntPtr self, string methodName, float time, float repeatRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x4DFE2B0", Offset = "0x4DFE2B0", VA = "0x4DFE2B0")]
	private static extern void CancelInvoke_Injected(IntPtr self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x4DFE2F0", Offset = "0x4DFE2F0", VA = "0x4DFE2F0")]
	private static extern bool IsInvoking_Injected(IntPtr self, string methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x4DFE330", Offset = "0x4DFE330", VA = "0x4DFE330")]
	private static extern bool IsObjectMonoBehaviour_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x4DFE360", Offset = "0x4DFE360", VA = "0x4DFE360")]
	private static extern Coroutine StartCoroutineManaged_Injected(IntPtr _unity_self, string methodName, object value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x4DFE3A0", Offset = "0x4DFE3A0", VA = "0x4DFE3A0")]
	private static extern Coroutine StartCoroutineManaged2_Injected(IntPtr _unity_self, IEnumerator enumerator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x4DFE3E0", Offset = "0x4DFE3E0", VA = "0x4DFE3E0")]
	private static extern void StopCoroutineManaged_Injected(IntPtr _unity_self, Coroutine routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x4DFE420", Offset = "0x4DFE420", VA = "0x4DFE420")]
	private static extern void StopCoroutineFromEnumeratorManaged_Injected(IntPtr _unity_self, IEnumerator routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x4DFE4F0", Offset = "0x4DFE4F0", VA = "0x4DFE4F0")]
	private static extern string GetScriptClassName_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x4DFE520", Offset = "0x4DFE520", VA = "0x4DFE520")]
	private static extern void OnCancellationTokenCreated_Injected(IntPtr _unity_self);
}
