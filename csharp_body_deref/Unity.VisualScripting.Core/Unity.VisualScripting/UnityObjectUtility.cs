// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnityObjectUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001C6")]
public static class UnityObjectUtility
{
	[Token(Token = "0x20001C8")]
	[CompilerGenerated]
	private sealed class _003CFindObjectsOfTypeIncludingInactive_003Ed__7<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000931")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000932")]
		[FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x4000933")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000934")]
		[FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x4000935")]
		[FieldOffset(Offset = "0x0")]
		private GameObject[] _003C_003E7__wrap2;

		[Token(Token = "0x4000936")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap3;

		[Token(Token = "0x4000937")]
		[FieldOffset(Offset = "0x0")]
		private T[] _003C_003E7__wrap4;

		[Token(Token = "0x4000938")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E7__wrap5;

		[Token(Token = "0x170001D9")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x60010E4")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170001DA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010E6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010E1")]
		[DebuggerHidden]
		public _003CFindObjectsOfTypeIncludingInactive_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010E2")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010E3")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010E5")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60010E7")]
		[DebuggerHidden]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60010E8")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x4D63740", Offset = "0x4D63740", VA = "0x4D63740")]
	public static bool IsDestroyed(this UnityEngine.Object target)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x4D63790", Offset = "0x4D63790", VA = "0x4D63790")]
	public static bool IsUnityNull(this object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x4D63850", Offset = "0x4D63850", VA = "0x4D63850")]
	public static string ToSafeString(this UnityEngine.Object uo)
	{
		return null;
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x4D63AF0", Offset = "0x4D63AF0", VA = "0x4D63AF0")]
	public static string ToSafeString(this object obj)
	{
		return null;
	}

	[Token(Token = "0x60010DA")]
	public static T AsUnityNull<T>(this T obj) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x4D63D20", Offset = "0x4D63D20", VA = "0x4D63D20")]
	public static bool TrulyEqual(UnityEngine.Object a, UnityEngine.Object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DC")]
	public static IEnumerable<T> NotUnityNull<T>(this IEnumerable<T> enumerable) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[IteratorStateMachine(typeof(_003CFindObjectsOfTypeIncludingInactive_003Ed__7<>))]
	public static IEnumerable<T> FindObjectsOfTypeIncludingInactive<T>()
	{
		return null;
	}
}
