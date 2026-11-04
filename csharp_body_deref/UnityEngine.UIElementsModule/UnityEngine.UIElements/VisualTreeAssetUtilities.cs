// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeAssetUtilities
// Update status: NEW in this game update
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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200052A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class VisualTreeAssetUtilities
{
	[Token(Token = "0x200052B")]
	[CompilerGenerated]
	private sealed class _003CEnumerateEnclosingNamespaces_003Ed__0 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001176")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001177")]
		[FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4001178")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001179")]
		[FieldOffset(Offset = "0x28")]
		private string fullTypeName;

		[Token(Token = "0x400117A")]
		[FieldOffset(Offset = "0x30")]
		public string _003C_003E3__fullTypeName;

		[Token(Token = "0x400117B")]
		[FieldOffset(Offset = "0x38")]
		private int _003CstartIndex_003E5__1;

		[Token(Token = "0x400117C")]
		[FieldOffset(Offset = "0x3C")]
		private int _003ClastDot_003E5__2;

		[Token(Token = "0x17000A27")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60027AB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A28")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60027AD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60027A8")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CEnumerateEnclosingNamespaces_003Ed__0(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60027A9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60027AA")]
		[Address(RVA = "0x315E990", Offset = "0x315CF90", VA = "0x18315E990", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60027AC")]
		[Address(RVA = "0x315EB00", Offset = "0x315D100", VA = "0x18315EB00", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60027AE")]
		[Address(RVA = "0x315EA60", Offset = "0x315D060", VA = "0x18315EA60", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60027AF")]
		[Address(RVA = "0x315EA60", Offset = "0x315D060", VA = "0x18315EA60", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x60027A6")]
	[Address(RVA = "0x316A670", Offset = "0x3168C70", VA = "0x18316A670")]
	[IteratorStateMachine(typeof(_003CEnumerateEnclosingNamespaces_003Ed__0))]
	public static IEnumerable<string> EnumerateEnclosingNamespaces(string fullTypeName)
	{
		return null;
	}

	[Token(Token = "0x60027A7")]
	[Address(RVA = "0x316A6F0", Offset = "0x3168CF0", VA = "0x18316A6F0")]
	public static UxmlNamespaceDefinition FindUxmlNamespaceDefinitionForTypeName(this VisualTreeAsset vta, UxmlAsset asset, string fullTypeName)
	{
		return default(UxmlNamespaceDefinition);
	}
}
