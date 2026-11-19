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

[Token(Token = "0x20001A9")]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/DelayedCallUtility.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class MonoBehaviour : Behaviour
{
	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource m_CancellationTokenSource;

	[Token(Token = "0x17000246")]
	public CancellationToken destroyCancellationToken
	{
		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x691B430", Offset = "0x691A430", VA = "0x691B430")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x17000247")]
	public bool useGUILayout
	{
		[Token(Token = "0x6000E03")]
		[Address(RVA = "0x691CB30", Offset = "0x691BB30", VA = "0x691CB30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E04")]
		[Address(RVA = "0x691CBE0", Offset = "0x691BBE0", VA = "0x691CBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000248")]
	public bool didStart
	{
		[Token(Token = "0x6000E05")]
		[Address(RVA = "0x691CCA0", Offset = "0x691BCA0", VA = "0x691CCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000249")]
	public bool didAwake
	{
		[Token(Token = "0x6000E06")]
		[Address(RVA = "0x691CD50", Offset = "0x691BD50", VA = "0x691CD50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x691B810", Offset = "0x691A810", VA = "0x691B810")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void RaiseCancellation()
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x691B830", Offset = "0x691A830", VA = "0x691B830")]
	public bool IsInvoking()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x691B8F0", Offset = "0x691A8F0", VA = "0x691B8F0")]
	public void CancelInvoke()
	{
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x691B9B0", Offset = "0x691A9B0", VA = "0x691B9B0")]
	public void Invoke(string methodName, float time)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x691BBB0", Offset = "0x691ABB0", VA = "0x691BBB0")]
	public void InvokeRepeating(string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x691BC80", Offset = "0x691AC80", VA = "0x691BC80")]
	public void CancelInvoke(string methodName)
	{
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x691BE60", Offset = "0x691AE60", VA = "0x691BE60")]
	public bool IsInvoking(string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x691C050", Offset = "0x691B050", VA = "0x691C050")]
	[ExcludeFromDocs]
	public Coroutine StartCoroutine(string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x691C060", Offset = "0x691B060", VA = "0x691C060")]
	public Coroutine StartCoroutine(string methodName, [DefaultValue("null")] object value)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x691C390", Offset = "0x691B390", VA = "0x691C390")]
	public Coroutine StartCoroutine(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x691C530", Offset = "0x691B530", VA = "0x691C530")]
	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
	public Coroutine StartCoroutine_Auto(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x691C540", Offset = "0x691B540", VA = "0x691C540")]
	public void StopCoroutine(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x691C6E0", Offset = "0x691B6E0", VA = "0x691C6E0")]
	public void StopCoroutine(Coroutine routine)
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x691C890", Offset = "0x691B890", VA = "0x691C890")]
	public void StopCoroutine(string methodName)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x691CA80", Offset = "0x691BA80", VA = "0x691CA80")]
	public void StopAllCoroutines()
	{
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x691CE00", Offset = "0x691BE00", VA = "0x691CE00")]
	public static void print(object message)
	{
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x691B900", Offset = "0x691A900", VA = "0x691B900")]
	[UnityEngine.Bindings.FreeFunction("CancelInvoke")]
	private static void Internal_CancelInvokeAll([UnityEngine.Bindings.NotNull] MonoBehaviour self)
	{
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x691B840", Offset = "0x691A840", VA = "0x691B840")]
	[UnityEngine.Bindings.FreeFunction("IsInvoking")]
	private static bool Internal_IsInvokingAll([UnityEngine.Bindings.NotNull] MonoBehaviour self)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x691B9C0", Offset = "0x691A9C0", VA = "0x691B9C0")]
	[UnityEngine.Bindings.FreeFunction]
	private static void InvokeDelayed([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x691BC90", Offset = "0x691AC90", VA = "0x691BC90")]
	[UnityEngine.Bindings.FreeFunction]
	private static void CancelInvoke([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName)
	{
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x691BE70", Offset = "0x691AE70", VA = "0x691BE70")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsInvoking([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x691C120", Offset = "0x691B120", VA = "0x691C120")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsObjectMonoBehaviour([UnityEngine.Bindings.NotNull] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x691C1D0", Offset = "0x691B1D0", VA = "0x691C1D0")]
	private Coroutine StartCoroutineManaged(string methodName, object value)
	{
		return null;
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x691C4B0", Offset = "0x691B4B0", VA = "0x691C4B0")]
	private Coroutine StartCoroutineManaged2(IEnumerator enumerator)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x691C800", Offset = "0x691B800", VA = "0x691C800")]
	private void StopCoroutineManaged(Coroutine routine)
	{
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x691C660", Offset = "0x691B660", VA = "0x691C660")]
	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x691D0D0", Offset = "0x691C0D0", VA = "0x691D0D0")]
	internal string GetScriptClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x691B790", Offset = "0x691A790", VA = "0x691B790")]
	private void OnCancellationTokenCreated()
	{
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x691D250", Offset = "0x691C250", VA = "0x691D250")]
	public MonoBehaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x691CA40", Offset = "0x691BA40", VA = "0x691CA40")]
	private static extern void StopCoroutine_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x691CB00", Offset = "0x691BB00", VA = "0x691CB00")]
	private static extern void StopAllCoroutines_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x691CBB0", Offset = "0x691BBB0", VA = "0x691CBB0")]
	private static extern bool get_useGUILayout_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x691CC60", Offset = "0x691BC60", VA = "0x691CC60")]
	private static extern void set_useGUILayout_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x691CD20", Offset = "0x691BD20", VA = "0x691CD20")]
	private static extern bool get_didStart_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x691CDD0", Offset = "0x691BDD0", VA = "0x691CDD0")]
	private static extern bool get_didAwake_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x691CE70", Offset = "0x691BE70", VA = "0x691CE70")]
	private static extern void Internal_CancelInvokeAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x691CEA0", Offset = "0x691BEA0", VA = "0x691CEA0")]
	private static extern bool Internal_IsInvokingAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x691CED0", Offset = "0x691BED0", VA = "0x691CED0")]
	private static extern void InvokeDelayed_Injected(IntPtr self, ref ManagedSpanWrapper methodName, float time, float repeatRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x691CF20", Offset = "0x691BF20", VA = "0x691CF20")]
	private static extern void CancelInvoke_Injected(IntPtr self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x691CF60", Offset = "0x691BF60", VA = "0x691CF60")]
	private static extern bool IsInvoking_Injected(IntPtr self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x691CFA0", Offset = "0x691BFA0", VA = "0x691CFA0")]
	private static extern bool IsObjectMonoBehaviour_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x691CFD0", Offset = "0x691BFD0", VA = "0x691CFD0")]
	private static extern Coroutine StartCoroutineManaged_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, object value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x691D010", Offset = "0x691C010", VA = "0x691D010")]
	private static extern Coroutine StartCoroutineManaged2_Injected(IntPtr _unity_self, IEnumerator enumerator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x691D050", Offset = "0x691C050", VA = "0x691D050")]
	private static extern void StopCoroutineManaged_Injected(IntPtr _unity_self, IntPtr routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x691D090", Offset = "0x691C090", VA = "0x691D090")]
	private static extern void StopCoroutineFromEnumeratorManaged_Injected(IntPtr _unity_self, IEnumerator routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x691D1E0", Offset = "0x691C1E0", VA = "0x691D1E0")]
	private static extern void GetScriptClassName_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x691D220", Offset = "0x691C220", VA = "0x691D220")]
	private static extern void OnCancellationTokenCreated_Injected(IntPtr _unity_self);
}
