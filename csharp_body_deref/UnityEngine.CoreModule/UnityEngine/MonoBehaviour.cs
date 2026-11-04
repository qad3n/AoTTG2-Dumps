// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MonoBehaviour
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001A8")]
[ExtensionOfNativeClass]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/DelayedCallUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/MonoBehaviour.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class MonoBehaviour : Behaviour
{
	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x18")]
	private CancellationTokenSource m_CancellationTokenSource;

	[Token(Token = "0x17000241")]
	public CancellationToken destroyCancellationToken
	{
		[Token(Token = "0x6000DE1")]
		[Address(RVA = "0x2F1DB80", Offset = "0x2F1C180", VA = "0x182F1DB80")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x17000242")]
	public bool useGUILayout
	{
		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x2F1DEF0", Offset = "0x2F1C4F0", VA = "0x182F1DEF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DF2")]
		[Address(RVA = "0x2F1E010", Offset = "0x2F1C610", VA = "0x182F1E010")]
		set
		{
		}
	}

	[Token(Token = "0x17000243")]
	public bool didStart
	{
		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x2F1DE30", Offset = "0x2F1C430", VA = "0x182F1DE30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000244")]
	public bool didAwake
	{
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x2F1DD70", Offset = "0x2F1C370", VA = "0x182F1DD70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x2F1CBB0", Offset = "0x2F1B1B0", VA = "0x182F1CBB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void RaiseCancellation()
	{
	}

	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x2F1C3F0", Offset = "0x2F1A9F0", VA = "0x182F1C3F0")]
	public bool IsInvoking()
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x2F1BF80", Offset = "0x2F1A580", VA = "0x182F1BF80")]
	public void CancelInvoke()
	{
	}

	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x2F1C790", Offset = "0x2F1AD90", VA = "0x182F1C790")]
	public void Invoke(string methodName, float time)
	{
	}

	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x2F1C710", Offset = "0x2F1AD10", VA = "0x182F1C710")]
	public void InvokeRepeating(string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x2F1C020", Offset = "0x2F1A620", VA = "0x182F1C020")]
	public void CancelInvoke(string methodName)
	{
	}

	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x2F1CA00", Offset = "0x2F1B000", VA = "0x182F1CA00")]
	public bool IsInvoking(string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x2F1D0A0", Offset = "0x2F1B6A0", VA = "0x182F1D0A0")]
	[ExcludeFromDocs]
	public Coroutine StartCoroutine(string methodName)
	{
		return null;
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x2F1D210", Offset = "0x2F1B810", VA = "0x182F1D210")]
	public Coroutine StartCoroutine(string methodName, [DefaultValue("null")] object value)
	{
		return null;
	}

	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x2F1CEF0", Offset = "0x2F1B4F0", VA = "0x182F1CEF0")]
	public Coroutine StartCoroutine(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x2F1CEF0", Offset = "0x2F1B4F0", VA = "0x182F1CEF0")]
	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
	public Coroutine StartCoroutine_Auto(IEnumerator routine)
	{
		return null;
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x2F1D9D0", Offset = "0x2F1BFD0", VA = "0x182F1D9D0")]
	public void StopCoroutine(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x2F1D820", Offset = "0x2F1BE20", VA = "0x182F1D820")]
	public void StopCoroutine(Coroutine routine)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x2F1D670", Offset = "0x2F1BC70", VA = "0x182F1D670")]
	public void StopCoroutine(string methodName)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x2F1D3D0", Offset = "0x2F1B9D0", VA = "0x182F1D3D0")]
	public void StopAllCoroutines()
	{
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x2F1DF70", Offset = "0x2F1C570", VA = "0x182F1DF70")]
	public static void print(object message)
	{
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x2F1BF80", Offset = "0x2F1A580", VA = "0x182F1BF80")]
	[UnityEngine.Bindings.FreeFunction("CancelInvoke")]
	private static void Internal_CancelInvokeAll([UnityEngine.Bindings.NotNull] MonoBehaviour self)
	{
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x2F1C3F0", Offset = "0x2F1A9F0", VA = "0x182F1C3F0")]
	[UnityEngine.Bindings.FreeFunction("IsInvoking")]
	private static bool Internal_IsInvokingAll([UnityEngine.Bindings.NotNull] MonoBehaviour self)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x2F1C500", Offset = "0x2F1AB00", VA = "0x182F1C500")]
	[UnityEngine.Bindings.FreeFunction]
	private static void InvokeDelayed([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName, float time, float repeatRate)
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x2F1C030", Offset = "0x2F1A630", VA = "0x182F1C030")]
	[UnityEngine.Bindings.FreeFunction]
	private static void CancelInvoke([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName)
	{
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x2F1C800", Offset = "0x2F1AE00", VA = "0x182F1C800")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsInvoking([UnityEngine.Bindings.NotNull] MonoBehaviour self, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x2F1CA50", Offset = "0x2F1B050", VA = "0x182F1CA50")]
	[UnityEngine.Bindings.FreeFunction]
	private static bool IsObjectMonoBehaviour([UnityEngine.Bindings.NotNull] Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x2F1CD10", Offset = "0x2F1B310", VA = "0x182F1CD10")]
	private Coroutine StartCoroutineManaged(string methodName, object value)
	{
		return null;
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x2F1CC20", Offset = "0x2F1B220", VA = "0x182F1CC20")]
	private Coroutine StartCoroutineManaged2(IEnumerator enumerator)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x2F1D580", Offset = "0x2F1BB80", VA = "0x182F1D580")]
	private void StopCoroutineManaged(Coroutine routine)
	{
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x2F1D4A0", Offset = "0x2F1BAA0", VA = "0x182F1D4A0")]
	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x2F1C260", Offset = "0x2F1A860", VA = "0x182F1C260")]
	internal string GetScriptClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x2F1CB30", Offset = "0x2F1B130", VA = "0x182F1CB30")]
	private void OnCancellationTokenCreated()
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x2F12960", Offset = "0x2F10F60", VA = "0x182F12960")]
	public MonoBehaviour()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x2F1D620", Offset = "0x2F1BC20", VA = "0x182F1D620")]
	private static extern void StopCoroutine_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x2F1D390", Offset = "0x2F1B990", VA = "0x182F1D390")]
	private static extern void StopAllCoroutines_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x2F1DEB0", Offset = "0x2F1C4B0", VA = "0x182F1DEB0")]
	private static extern bool get_useGUILayout_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x2F1DFC0", Offset = "0x2F1C5C0", VA = "0x182F1DFC0")]
	private static extern void set_useGUILayout_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x2F1DDF0", Offset = "0x2F1C3F0", VA = "0x182F1DDF0")]
	private static extern bool get_didStart_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x2F1DD30", Offset = "0x2F1C330", VA = "0x182F1DD30")]
	private static extern bool get_didAwake_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x2F1C370", Offset = "0x2F1A970", VA = "0x182F1C370")]
	private static extern void Internal_CancelInvokeAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x2F1C3B0", Offset = "0x2F1A9B0", VA = "0x182F1C3B0")]
	private static extern bool Internal_IsInvokingAll_Injected(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x2F1C490", Offset = "0x2F1AA90", VA = "0x182F1C490")]
	private static extern void InvokeDelayed_Injected(IntPtr self, ref ManagedSpanWrapper methodName, float time, float repeatRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x2F1BF30", Offset = "0x2F1A530", VA = "0x182F1BF30")]
	private static extern void CancelInvoke_Injected(IntPtr self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x2F1C7B0", Offset = "0x2F1ADB0", VA = "0x182F1C7B0")]
	private static extern bool IsInvoking_Injected(IntPtr self, ref ManagedSpanWrapper methodName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x2F1CA10", Offset = "0x2F1B010", VA = "0x182F1CA10")]
	private static extern bool IsObjectMonoBehaviour_Injected(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x2F1CCB0", Offset = "0x2F1B2B0", VA = "0x182F1CCB0")]
	private static extern Coroutine StartCoroutineManaged_Injected(IntPtr _unity_self, ref ManagedSpanWrapper methodName, object value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x2F1CBD0", Offset = "0x2F1B1D0", VA = "0x182F1CBD0")]
	private static extern Coroutine StartCoroutineManaged2_Injected(IntPtr _unity_self, IEnumerator enumerator);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x2F1D530", Offset = "0x2F1BB30", VA = "0x182F1D530")]
	private static extern void StopCoroutineManaged_Injected(IntPtr _unity_self, IntPtr routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x2F1D450", Offset = "0x2F1BA50", VA = "0x182F1D450")]
	private static extern void StopCoroutineFromEnumeratorManaged_Injected(IntPtr _unity_self, IEnumerator routine);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x2F1C210", Offset = "0x2F1A810", VA = "0x182F1C210")]
	private static extern void GetScriptClassName_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x2F1CAF0", Offset = "0x2F1B0F0", VA = "0x182F1CAF0")]
	private static extern void OnCancellationTokenCreated_Injected(IntPtr _unity_self);
}
