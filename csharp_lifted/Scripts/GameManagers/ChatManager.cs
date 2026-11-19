// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.ChatManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/ChatManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/ChatManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using CustomLogic;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000378")]
internal class ChatManager : MonoBehaviour
{
	[Token(Token = "0x2000379")]
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
	private class CommandAttribute : Attribute
	{
		[Token(Token = "0x1700025E")]
		public string Name
		{
			[Token(Token = "0x6001607")]
			[Address(RVA = "0x583ADA0", Offset = "0x5839DA0", VA = "0x583ADA0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_Name): clean
				return this._Name_k__BackingField;
			}
			[Token(Token = "0x6001608")]
			[Address(RVA = "0x583ADB0", Offset = "0x5839DB0", VA = "0x583ADB0")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_Name): clean
				this._Name_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x1700025F")]
		public string Description
		{
			[Token(Token = "0x6001609")]
			[Address(RVA = "0x583ADC0", Offset = "0x5839DC0", VA = "0x583ADC0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_Description): clean
				return this._Description_k__BackingField;
			}
			[Token(Token = "0x600160A")]
			[Address(RVA = "0x583ADD0", Offset = "0x5839DD0", VA = "0x583ADD0")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_Description): clean
				this._Description_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000260")]
		public string Alias
		{
			[Token(Token = "0x600160B")]
			[Address(RVA = "0x583ADE0", Offset = "0x5839DE0", VA = "0x583ADE0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_Alias): clean
				return this._Alias_k__BackingField;
			}
			[Token(Token = "0x600160C")]
			[Address(RVA = "0x583ADF0", Offset = "0x5839DF0", VA = "0x583ADF0")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_Alias): clean
				this._Alias_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000261")]
		public MethodInfo Command
		{
			[Token(Token = "0x600160D")]
			[Address(RVA = "0x583AE00", Offset = "0x5839E00", VA = "0x583AE00")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_Command): clean
				return this._Command_k__BackingField;
			}
			[Token(Token = "0x600160E")]
			[Address(RVA = "0x583AE10", Offset = "0x5839E10", VA = "0x583AE10")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_Command): clean
				this._Command_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000262")]
		public bool IsAlias
		{
			[Token(Token = "0x600160F")]
			[Address(RVA = "0x583AE20", Offset = "0x5839E20", VA = "0x583AE20")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_IsAlias): clean
				return this._IsAlias_k__BackingField;
			}
			[Token(Token = "0x6001610")]
			[Address(RVA = "0x583AE30", Offset = "0x5839E30", VA = "0x583AE30")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_IsAlias): clean
				this._IsAlias_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000263")]
		public string[] Parameters
		{
			[Token(Token = "0x6001611")]
			[Address(RVA = "0x583AE40", Offset = "0x5839E40", VA = "0x583AE40")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_Parameters): clean
				return this._Parameters_k__BackingField;
			}
			[Token(Token = "0x6001612")]
			[Address(RVA = "0x583AE50", Offset = "0x5839E50", VA = "0x583AE50")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_Parameters): clean
				this._Parameters_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000264")]
		public AutofillType AutofillType
		{
			[Token(Token = "0x6001613")]
			[Address(RVA = "0x583AE60", Offset = "0x5839E60", VA = "0x583AE60")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_AutofillType): clean
				return this._AutofillType_k__BackingField;
			}
			[Token(Token = "0x6001614")]
			[Address(RVA = "0x583AE70", Offset = "0x5839E70", VA = "0x583AE70")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_AutofillType): clean
				this._AutofillType_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000265")]
		public bool ExcludeFromHelp
		{
			[Token(Token = "0x6001615")]
			[Address(RVA = "0x583AE80", Offset = "0x5839E80", VA = "0x583AE80")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$get_ExcludeFromHelp): clean
				return this._ExcludeFromHelp_k__BackingField;
			}
			[Token(Token = "0x6001616")]
			[Address(RVA = "0x583AE90", Offset = "0x5839E90", VA = "0x583AE90")]
			[CompilerGenerated]
			set
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$set_ExcludeFromHelp): clean
				this._ExcludeFromHelp_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x6001617")]
		[Address(RVA = "0x583AEA0", Offset = "0x5839EA0", VA = "0x583AEA0")]
		public CommandAttribute(CommandAttribute commandAttribute)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$.ctor): clean
			base();
			if (commandAttribute == null) {
				throw new NullReferenceException();
			}
			this._Name_k__BackingField = commandAttribute._Name_k__BackingField;
			this._Description_k__BackingField = commandAttribute._Description_k__BackingField;
			this._Alias_k__BackingField = commandAttribute._Alias_k__BackingField;
			this._Command_k__BackingField = commandAttribute._Command_k__BackingField;
			this._AutofillType_k__BackingField = commandAttribute._AutofillType_k__BackingField;
			this._ExcludeFromHelp_k__BackingField =commandAttribute._ExcludeFromHelp_k__BackingField;
			return;
		}

		[Token(Token = "0x6001618")]
		[Address(RVA = "0x583AF20", Offset = "0x5839F20", VA = "0x583AF20")]
		public CommandAttribute(string name, string description, AutofillType autofillType = AutofillType.None, bool excludeFromHelp = false)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CommandAttribute$$.ctor): 4 lines keep C-only constructs
			Regex __this_00;
			object @object;
			MatchCollection source;
			System_Collections_Generic_IEnumerable_TResult__o pSVar1;
			GameManagers_ChatManager_CommandAttribute___c_StaticFields pGVar2;
			Func<Match, string> __this_01;
			String[] pSVar3;

			base();
			this._Name_k__BackingField = name;
			this._Description_k__BackingField = description;
			this._AutofillType_k__BackingField = autofillType;
			__this_00 = ChatManager.ParamRegex;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			source = __this_00.Matches(description);
			pSVar1 = Enumerable.Cast<Match>((IEnumerable)source);
			if ((typeof(ChatManager.CommandAttribute.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(ChatManager.CommandAttribute.c).static_fields;
				__this_01 = pGVar2.__9__33_0;
			}
			else {
				pGVar2 = typeof(ChatManager.CommandAttribute.c).static_fields;
				__this_01 = pGVar2.__9__33_0;
			}
			if (__this_01 == null) {
				if (((typeof(ChatManager.CommandAttribute.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar2 = typeof(ChatManager.CommandAttribute.c).static_fields;
				}
				@object = (object)pGVar2.__9;
				__this_01 = new Func<Match, string>(@object, (intptr_t)MethodInfo_GameManagers_ChatManager_CommandAttribute_c_ctor_b__33_0);
				pGVar2 = typeof(ChatManager.CommandAttribute.c).static_fields;
				pGVar2.__9__33_0 = __this_01;
			}
			pSVar1 = Enumerable.Select<Match, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__TResult__o)__this_01);
			pSVar3 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1);
			this._Parameters_k__BackingField = pSVar3;
			this._ExcludeFromHelp_k__BackingField = excludeFromHelp;
			return;
		}
	}

	[Token(Token = "0x200037B")]
	private class CLCommandAttribute : CommandAttribute
	{
		[Token(Token = "0x17000266")]
		public UserMethod Callback
		{
			[Token(Token = "0x600161C")]
			[Address(RVA = "0x583B1E0", Offset = "0x583A1E0", VA = "0x583B1E0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CLCommandAttribute$$get_Callback): clean
				return this._Callback_k__BackingField;
			}
		}

		[Token(Token = "0x600161D")]
		[Address(RVA = "0x583B1F0", Offset = "0x583A1F0", VA = "0x583B1F0")]
		public CLCommandAttribute(string name, string description, UserMethod callback, AutofillType autofillType)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.CLCommandAttribute$$.ctor): clean
			base(name, description, autofillType, false) ;
			this._Callback_k__BackingField = callback;
			return;
		}
	}

	[Token(Token = "0x200037C")]
	private static class SuggestionState
	{
		[Token(Token = "0x4001191")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static string PartialText;

		[Token(Token = "0x4001192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static string OriginalText;

		[Token(Token = "0x4001193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static int OriginalStartPos;

		[Token(Token = "0x4001194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static int OriginalEndPos;

		[Token(Token = "0x4001195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static List<string> Suggestions;

		[Token(Token = "0x4001196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static int CurrentIndex;

		[Token(Token = "0x4001197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public static SuggestionType Type;

		[Token(Token = "0x4001198")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static bool IsTabCompleting;

		[Token(Token = "0x4001199")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static string OriginalPartialText;

		[Token(Token = "0x400119A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static bool IsProcessingClick;

		[Token(Token = "0x17000267")]
		public static bool HasSuggestions
		{
			[Token(Token = "0x6001620")]
			[Address(RVA = "0x583B400", Offset = "0x583A400", VA = "0x583B400")]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.SuggestionState$$get_HasSuggestions): clean
				uint uVar1;
				List<string> pSVar2;

				if (Il2CppMethodInitialized_07545802 == false) {
					Il2CppMethodInitialized_07545802 = true;
					uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					pSVar2 = ChatManager.SuggestionState.Suggestions;
				}
				else {
					pSVar2 = *(List<string>*)((long)(typeof(ChatManager.SuggestionState)).static_fields + 0x18) ;
				}
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				return 0 < pSVar2._size;
			}
		}

		[Token(Token = "0x17000268")]
		public static bool IsActive
		{
			[Token(Token = "0x6001621")]
			[Address(RVA = "0x583B490", Offset = "0x583A490", VA = "0x583B490")]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.SuggestionState$$get_IsActive): clean
				uint uVar1;
				int iVar2;
				List<string> pSVar3;

				if (Il2CppMethodInitialized_07545803 == false) {
					Il2CppMethodInitialized_07545803 = true;
					uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					iVar2 = ChatManager.SuggestionState.Type;
				}
				else {
					iVar2 = *(int)((long)(typeof(ChatManager.SuggestionState)).static_fields + 0x24);
				}
				if (iVar2 == 0) {
					return false;
				}
				if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0 ) {
				}
				if (Il2CppMethodInitialized_07545802 == false) {
					Il2CppMethodInitialized_07545802 = true;
					uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(ChatManager.SuggestionState))._2). cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					pSVar3 = ChatManager.SuggestionState.Suggestions;
				}
				else {
					pSVar3 = *(List<string>*)((long)(typeof(ChatManager.SuggestionState)).static_fields + 0x18) ;
				}
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				return 0 < pSVar3._size;
			}
		}

		[Token(Token = "0x600161E")]
		[Address(RVA = "0x583B220", Offset = "0x583A220", VA = "0x583B220")]
		public static void Clear()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.SuggestionState$$Clear): 12 lines keep C-only constructs
			int piVar1;
			int length;
			uint uVar2;
			List<string> pSVar3;
			IntPtr pvVar4;
			GameManagers_ChatManager_SuggestionState_StaticFields pGVar5;
			Il2CppClass klass;

			ChatManager.SuggestionState.PartialText = "";
			pGVar5 = typeof(ChatManager.SuggestionState).static_fields;
			pGVar5.OriginalText = "";
			klass = typeof(ChatManager.SuggestionState);
			pGVar5 = typeof(ChatManager.SuggestionState).static_fields;
			pGVar5.OriginalStartPos = -1;
			pGVar5.OriginalEndPos = -1;
			pSVar3 = pGVar5.Suggestions;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
				pGVar5 = typeof(ChatManager.SuggestionState).static_fields;
				klass = typeof(ChatManager.SuggestionState);
			}
			pGVar5.CurrentIndex = -1;
			pGVar5.Type = 0;
			if (pGVar5.IsProcessingClick == false) {
				if ((klass._2).cctor_finished_or_no_cctor == 0) {
					klass = typeof(ChatManager.SuggestionState);
					ChatManager.SuggestionState.IsTabCompleting = false;
					uVar2 = (((ChatManager.SuggestionState)klass)._2).cctor_finished_or_no_cctor;
				}
				else {
					pGVar5.IsTabCompleting = false;
					uVar2 = (klass._2).cctor_finished_or_no_cctor;
				}
			}
			else {
				uVar2 = (klass._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				klass = typeof(ChatManager.SuggestionState);
			}
			pvVar4 = klass.static_fields;
			*(String*)((long)pvVar4 + 0x30) = "";
			return;
		}

		[Token(Token = "0x600161F")]
		[Address(RVA = "0x583B380", Offset = "0x583A380", VA = "0x583B380")]
		public static void SetOriginalContext(string original, int startPos, int endPos)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.SuggestionState$$SetOriginalContext): clean
			GameManagers_ChatManager_SuggestionState_StaticFields pGVar1;

			pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
			pGVar1.OriginalText = original;
			pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
			pGVar1.OriginalStartPos = startPos;
			pGVar1.OriginalEndPos = endPos;
			return;
		}
	}

	[Token(Token = "0x200037D")]
	private enum SuggestionType
	{
		[Token(Token = "0x400119C")]
		None,
		[Token(Token = "0x400119D")]
		Command,
		[Token(Token = "0x400119E")]
		Mention,
		[Token(Token = "0x400119F")]
		PlayerID
	}

	[Token(Token = "0x200037E")]
	public struct ChatDisplayLine
	{
		[Token(Token = "0x40011A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string PlainText;

		[Token(Token = "0x40011A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool UsePlayerStyle;

		[Token(Token = "0x40011A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string TimeText;

		[Token(Token = "0x40011A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string IdText;

		[Token(Token = "0x40011A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string SenderName;

		[Token(Token = "0x40011A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string BodyText;

		[Token(Token = "0x40011A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int SenderID;

		[Token(Token = "0x40011A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public long LineID;

		[Token(Token = "0x6001623")]
		[Address(RVA = "0x583B6C0", Offset = "0x583A6C0", VA = "0x583B6C0")]
		public static ChatDisplayLine Plain(string text, long lineID = 0L)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.ChatDisplayLine$$Plain): 4 lines keep C-only constructs
			String local_50;
			ulong local_48;
			String pSStack_40;
			String local_38;
			String pSStack_30;
			String local_28;
			ulong uStack_20;

			local_28 = null;
			uStack_20 = 0;
			local_38 = null;
			pSStack_30 = null;
			local_48 = 0;
			pSStack_40 = null;
			if (text == null) {
				text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			local_50 = text;
			__return_storage_ptr__.SenderName = pSStack_30;
			__return_storage_ptr__.BodyText = local_28;
			__return_storage_ptr__.TimeText = pSStack_40;
			__return_storage_ptr__.IdText = local_38;
			__return_storage_ptr__.SenderID = -1;
			*(uint)&__return_storage_ptr__.field_0x34 = uStack_20._4_4_;
			__return_storage_ptr__.LineID = lineID;
			__return_storage_ptr__.PlainText = local_50;
			__return_storage_ptr__.UsePlayerStyle = false;
			*(uint)&__return_storage_ptr__.field_0x9 = local_48._1_4_;
			*(ushort)&__return_storage_ptr__.field_0xd = local_48._5_2_;
			__return_storage_ptr__.field_0xf = local_48._7_1_;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x200037F")]
	private struct ChatPlayerLineData
	{
		[Token(Token = "0x40011A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool Active;

		[Token(Token = "0x40011A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string SenderName;

		[Token(Token = "0x40011AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string BodyText;
	}

	[Token(Token = "0x2000383")]
	[CompilerGenerated]
	private sealed class _003CReactivateInputAfterClick_003Ed__143 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel chatPanel;

		[Token(Token = "0x40011BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CwasTabCompleting_003E5__2;

		[Token(Token = "0x40011BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private int _003CpreservedIndex_003E5__3;

		[Token(Token = "0x17000269")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001637")]
			[Address(RVA = "0x583C190", Offset = "0x583B190", VA = "0x583C190", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700026A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001639")]
			[Address(RVA = "0x583C1E0", Offset = "0x583B1E0", VA = "0x583C1E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001634")]
		[Address(RVA = "0x583BF40", Offset = "0x583AF40", VA = "0x583BF40")]
		[DebuggerHidden]
		public _003CReactivateInputAfterClick_003Ed__143(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001635")]
		[Address(RVA = "0x583BF60", Offset = "0x583AF60", VA = "0x583BF60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001636")]
		[Address(RVA = "0x583BF70", Offset = "0x583AF70", VA = "0x583BF70", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$MoveNext): clean
			int iVar1;
			ChatPanel pUVar2;
			bool bVar3;
			GameManagers_ChatManager_SuggestionState_StaticFields pGVar4;

			iVar1 = this.__1__state;
			if (iVar1 != 2) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
					this._wasTabCompleting_5__2 = pGVar4.IsTabCompleting;
					this._preservedIndex_5__3 = pGVar4.CurrentIndex;
					pUVar2 = this.chatPanel;
					if (pUVar2 == null) goto label_0593c182;
					pUVar2.Activate();
					if (this._wasTabCompleting_5__2 != false) {
						pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
						iVar1 = this._preservedIndex_5__3;
						if (pGVar4.CurrentIndex != iVar1) {
							if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
								pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
							}
							pGVar4.CurrentIndex = iVar1;
							pGVar4.IsTabCompleting = true;
							ChatManager.RefreshSuggestionDisplay();
						}
					}
					this.__2__current = null;
					this.__1__state = 2;
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					this.__2__current = null;
					this.__1__state = 1;
				}
				return true;
			}
			this.__1__state = -1;
			pUVar2 = this.chatPanel;
			if (pUVar2 == null) {
		label_0593c182: ;
				throw new NullReferenceException();
			}
			bVar3 = pUVar2.IsInputActive();
			if (!bVar3) {
				pUVar2 = this.chatPanel;
				if (pUVar2 == null) goto label_0593c182;
				pUVar2.Activate();
				if (this._wasTabCompleting_5__2 != false) {
					pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
					iVar1 = this._preservedIndex_5__3;
					if (pGVar4.CurrentIndex != iVar1) {
						if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
							pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
						}
						pGVar4.CurrentIndex = iVar1;
						pGVar4.IsTabCompleting = true;
						ChatManager.RefreshSuggestionDisplay();
					}
				}
			}
			ChatManager.SuggestionState.IsProcessingClick = false;
			return false;
		}

		[Token(Token = "0x6001638")]
		[Address(RVA = "0x583C1A0", Offset = "0x583B1A0", VA = "0x583C1A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<ReactivateInputAfterClick>d__143$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameManagers_ChatManager_ReactivateInputAfterClick_d__143_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000384")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLeave_003Ed__0 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700026B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600163D")]
			[Address(RVA = "0x583C4F0", Offset = "0x583B4F0", VA = "0x583C4F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700026C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600163F")]
			[Address(RVA = "0x583C540", Offset = "0x583B540", VA = "0x583C540", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600163A")]
		[Address(RVA = "0x583C1F0", Offset = "0x583B1F0", VA = "0x583C1F0")]
		[DebuggerHidden]
		public _003CWaitAndLeave_003Ed__0(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600163B")]
		[Address(RVA = "0x583C210", Offset = "0x583B210", VA = "0x583C210", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600163C")]
		[Address(RVA = "0x583C220", Offset = "0x583B220", VA = "0x583C220", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$MoveNext): clean
			int iVar1;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_00 = new WaitForSeconds(2.0);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				InGameManager.LeaveRoom();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x600163E")]
		[Address(RVA = "0x583C500", Offset = "0x583B500", VA = "0x583C500", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager.<WaitAndLeave>d__0$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_GameManagers_ChatManager_WaitAndLeave_d__0_System_Collections_IEnumerator_Reset) ;
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001160")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex CommandRegex;

	[Token(Token = "0x4001161")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex MentionRegex;

	[Token(Token = "0x4001162")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Regex ParamRegex;

	[Token(Token = "0x4001163")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Regex RichTextPattern;

	[Token(Token = "0x4001164")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static ChatManager _instance;

	[Token(Token = "0x4001165")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> RawMessages;

	[Token(Token = "0x4001166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> SenderIDs;

	[Token(Token = "0x4001167")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<ChatTextColor> Colors;

	[Token(Token = "0x4001168")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<bool> SystemFlags;

	[Token(Token = "0x4001169")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static List<DateTime> Timestamps;

	[Token(Token = "0x400116A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static List<bool> SuggestionFlags;

	[Token(Token = "0x400116B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static List<bool> NotificationFlags;

	[Token(Token = "0x400116C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static List<string> FeedLines;

	[Token(Token = "0x400116D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static Dictionary<ChatTextColor, string> ColorTags;

	[Token(Token = "0x400116E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<string, CommandAttribute> CommandsCache;

	[Token(Token = "0x400116F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static string LastException;

	[Token(Token = "0x4001170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static int LastExceptionCount;

	[Token(Token = "0x4001171")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private static int _lineBatchDepth;

	[Token(Token = "0x4001172")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static bool _pendingBatchSync;

	[Token(Token = "0x4001173")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly StringBuilder MessageBuilder;

	[Token(Token = "0x4001174")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static readonly StringBuilder TimeBuilder;

	[Token(Token = "0x4001175")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static readonly StringBuilder MentionBuilder;

	[Token(Token = "0x4001176")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static readonly HashSet<int> ActivePMNotifications;

	[Token(Token = "0x4001177")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static readonly HashSet<int> NotifiedPMs;

	[Token(Token = "0x4001178")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public static List<bool> PrivateFlags;

	[Token(Token = "0x4001179")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public static List<int> PMPartnerIDs;

	[Token(Token = "0x400117A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static readonly List<ChatPlayerLineData> PlayerLineData;

	[Token(Token = "0x400117B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static readonly List<ChatDisplayLine> DisplayLineCache;

	[Token(Token = "0x400117C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private static readonly List<long> LineIDs;

	[Token(Token = "0x400117D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private static long _nextLineID;

	[Token(Token = "0x400117E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private static bool _displayLineCacheShowsTimestamps;

	[Token(Token = "0x400117F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private static string _preservedInputText;

	[Token(Token = "0x4001180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private static int _preservedInputCaretPosition;

	[Token(Token = "0x4001181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	private static int _preservedPMTargetActorNumber;

	[Token(Token = "0x4001182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public static bool PreserveInputOnRestart;

	[Token(Token = "0x4001183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private static readonly Dictionary<string, string> _conversationTexts;

	[Token(Token = "0x4001184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private static readonly Dictionary<string, int> _conversationCarets;

	[Token(Token = "0x4001185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private static readonly HashSet<string> CustomCommandKeys;

	[Token(Token = "0x1700025D")]
	public static int MaxLines
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x582E280", Offset = "0x582D280", VA = "0x582E280")]
		get
		{
			// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$get_MaxLines): clean
			int iVar1;
			uint uVar2;
			UISettings pSVar3;
			IntSetting pSVar4;
			IntSetting pSVar5;
			int iVar6;
			int iVar7;
			float fVar8;

			pSVar3 = SettingsManager.UISettings;
			if (((pSVar3 == null) ||(pSVar4 = pSVar3.ChatHeight, pSVar4 == null)) ||(pSVar5 = pSVar3.ChatFontSize, pSVar5 == null)) {
				throw new NullReferenceException();
			}
			iVar7 = pSVar4._value;
			iVar1 = pSVar5._value;
			if (Il2CppMethodInitialized_0753e7f9 == false) {
				Il2CppMethodInitialized_0753e7f9 = true;
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			fVar8 = ceilf(((float)iVar7 * 5.0) / (((float)iVar1 / 18.0) * 30.0));
			iVar7 = 0x46;
			if ((int)fVar8 < 0x46) {
				iVar7 = (int)fVar8;
			}
			if (10 < iVar7) {
			}
			return iVar6;
		}
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x5828EC0", Offset = "0x5827EC0", VA = "0x5828EC0")]
	[IteratorStateMachine(typeof(_003CWaitAndLeave_003Ed__0))]
	private IEnumerator WaitAndLeave()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$WaitAndLeave): clean
		ChatManager.d__0<WaitAndLeave> __this_00;

		__this_00 = new ChatManager.d__0<WaitAndLeave>(0);
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600158F")]
	[Address(RVA = "0x5828F00", Offset = "0x5827F00", VA = "0x5828F00")]
	[Command("hood", "/hood: Toggles the hood of your equipped cloak.", AutofillType.None, false)]
	private static void HandleHoodToggle(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleHoodToggle): 3 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		Human __this;

		if (args == null) {
			throw new NullReferenceException();
		}
		if ((int)args.Length != 1) {
			ChatManager.AddLine("Usage: /hood", 0, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			return;
		}
		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) &&(__this = (*(ulong)((sbyte)pGVar2 + 0x80)), __this != null)) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					__this.ToggleHood();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x5829200", Offset = "0x5828200", VA = "0x5829200")]
	[Command("emote", "/emote [name|list]: Plays an emote on your current character, or lists available emotes.", AutofillType.None, false)]
	private static void Emote(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Emote): 13 lines keep C-only constructs
		byte bVar1;
		String[] pSVar2;
		BaseGameManager pGVar3;
		Object x;
		long plVar4;
		object @object;
		long lVar5;
		String str0;
		bool bVar6;
		ChatManager.c__DisplayClass2_0 __this;
		String* ppSVar7;
		System_Collections_Generic_IEnumerable_TSource__o source;
		GameManagers_ChatManager___c_StaticFields pGVar8;
		Func<string, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o values;
		String pSVar9;
		Func<string, bool> __this_01;
		int color;
		ChatManager.c__DisplayClass2_0 targetAddress;

		__this = new ChatManager.c__DisplayClass2_0();
		if (__this == null) {
	label_059296c2: ;
			throw new NullReferenceException();
		}
		targetAddress = &__this.fields;
		__this.args = args;
		pSVar2 = __this.args;
		if (pSVar2 == null) goto label_059296c2;
		if ((int)pSVar2.Length == 2) {
			pGVar3 = SceneLoader.CurrentGameManager;
			if (pGVar3 == null) {
	label_059293e4: ;
				ppSVar7 = &"You must have a character to use emotes.";
				goto label_05929424;
			}
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) goto label_059293e4;
			x = (*(ulong)((sbyte)pGVar3 + 0x80));
			bVar6 = (x == null);
			if (bVar6) goto label_059293e4;
			plVar4 = (*(ulong)((sbyte)pGVar3 + 0x80));
			if (plVar4 == null) goto label_059296c2;
			source = (System_Collections_Generic_IEnumerable_TSource__o)(**(code*)(*plVar4 + 0x4e8))(plVar4,*(ulong)(*plVar4 + 0x4f0));
			pSVar2 = targetAddress.args;
			if (pSVar2 == null) goto label_059296c2;
			if ((pSVar2.Length & 0xfffffffe) == 0) {
	label_059296c7: ;
				throw new IndexOutOfRangeException();
			}
			if (pSVar2[1] == null) goto label_059296c2;
			bVar6 = String.Equals(pSVar2[1], "list", 5);
			if (bVar6) {
				if (source == null) goto label_059296c2;
				if (*(int)&(*(ulong)((sbyte)source + 0x19)) == 0) {
					pSVar9 = "Your current character has no emotes.";
				}
				else {
					str0 = "Emotes: ";
					pSVar9 = ", ";
					pGVar8 = typeof(ChatManager.c).static_fields;
					__this_00 = pGVar8.__9__2_0;
					if (__this_00 == null) {
						if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar8 = typeof(ChatManager.c).static_fields;
						}
						@object = (object)pGVar8.__9;
						__this_00 = new Func<string, string>(@object, (intptr_t)MethodInfo_GameManagers_ChatManager_c_Emote_b__2_0);
						pGVar8 = typeof(ChatManager.c).static_fields;
						pGVar8.__9__2_0 = __this_00;
					}
					values = Enumerable.Select<string, string>(source, (System_Func_TSource__TResult__o)__this_00);
					pSVar9 = String.Join(pSVar9, (IEnumerable<string>)values);
					pSVar9 = String.Concat(str0, pSVar9);
				}
				color = 3;
				goto label_05929430;
			}
			__this_01 = new Func<string, bool>((object)__this, (intptr_t)MethodInfo_GameManagers_ChatManager_c__DisplayClass2_0_Emote_b__1);
			pSVar9 = Enumerable.FirstOrDefault<string>(source, (System_Func_TSource__bool__o)__this_01) ;
			if (pSVar9 != null) {
				lVar5 = *plVar4;
				(**(code*)(lVar5 + 0x638))(plVar4,pSVar9,*(ulong)(lVar5 + 0x640),lVar5,*(code*)(lVar5 + 0x638));
				return;
			}
			pSVar2 = targetAddress.args;
			if (pSVar2 == null) goto label_059296c2;
			if ((pSVar2.Length & 0xfffffffe) == 0) goto label_059296c7;
			pSVar9 = String.Concat("Emote ", pSVar2[1], " not found, try /emote list to see available emotes.");
		}
		else {
			ppSVar7 = &"Usage: /emote [name|list]";
	label_05929424: ;
			pSVar9 = *ppSVar7;
		}
		color = 4;
	label_05929430: ;
		ChatManager.AddLine(pSVar9, color, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x58296D0", Offset = "0x58286D0", VA = "0x58296D0")]
	[Command("clear", "/clear: Clears the chat window.", AutofillType.None, false, Alias = "c")]
	private static void Clear(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Clear): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754578c == false) {
			Il2CppMethodInitialized_0754578c = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			ChatManager.Clear();
			return;
		}
		ChatManager.Clear();
		return;
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x5829B10", Offset = "0x5828B10", VA = "0x5829B10")]
	[Command("reviveall", "/reviveall: Revive all players.", AutofillType.None, false, Alias = "rva")]
	private static void ReviveAll(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ReviveAll): 8 lines keep C-only constructs
		uint uVar1;
		PhotonView __this;
		bool bVar2;
		ulong in_RAX;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		ChatManager klass;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (Il2CppMethodInitialized_0754578d == false) {
			Il2CppMethodInitialized_0754578d = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CheckMC();
		}
		else {
			bVar2 = ChatManager.CheckMC();
		}
		if (!bVar2) {
			return;
		}
		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[1];
		uStack_28 = uStack_28 & 0xffffffffffffff;
		pIVar3 = (object)(((long)&uStack_28 + 7));
		if (parameters != null) {
			if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar3;
			if (__this != null) {
				__this.RPC("SpawnPlayerRPC", 0, parameters);
				if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				ChatManager.SendChatAll("All players have been revived by master client.", 3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x5829F00", Offset = "0x5828F00", VA = "0x5829F00")]
	[Command("revive", "/revive [ID]: Revives the player with ID", AutofillType.PlayerID, false, Alias = "rv")]
	private static void Revive(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Revive): 6 lines keep C-only constructs
		uint uVar1;
		PhotonView __this;
		bool bVar2;
		Player targetPlayer;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		String pSVar5;
		ChatManager klass;
		byte local_29;

		if (Il2CppMethodInitialized_0754578e == false) {
			Il2CppMethodInitialized_0754578e = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CheckMC();
		}
		else {
			bVar2 = ChatManager.CheckMC();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				targetPlayer = ChatManager.GetPlayer(args);
			}
			else {
				targetPlayer = ChatManager.GetPlayer(args);
			}
			if (targetPlayer != null) {
				__this = RPCManager.PhotonView;
				parameters = (Object[])new object[1];
				local_29 = 0;
				pIVar3 = (object)local_29;
				if (parameters != null) {
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar3;
					if (__this != null) {
						__this.RPC("SpawnPlayerRPC", targetPlayer, parameters);
						ChatManager.SendChat("You have been revived by master client.", targetPlayer, 3);
						pSVar5 = PhotonExtensions.GetStringProperty(targetPlayer, PlayerProperty.Name, "");
						pSVar5 = String.Concat(pSVar5, " has been revived.");
						ChatManager.AddLine(pSVar5, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x582A470", Offset = "0x5829470", VA = "0x582A470")]
	[Command("mute", "/mute [ID]: Mute player with ID.", AutofillType.PlayerID, false)]
	private static void Mute(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Mute): clean
		uint uVar1;
		Player player;

		if (Il2CppMethodInitialized_0754578f == false) {
			Il2CppMethodInitialized_0754578f = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			player = ChatManager.GetPlayer(args);
		}
		else {
			player = ChatManager.GetPlayer(args);
		}
		if (player == null) {
			return;
		}
		if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		ChatManager.MutePlayer(player, "Emote");
		ChatManager.MutePlayer(player, "Text");
		ChatManager.MutePlayer(player, "Voice");
		return;
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x582A830", Offset = "0x5829830", VA = "0x582A830")]
	[Command("unmute", "/unmute [ID]: Unmute player with ID.", AutofillType.PlayerID, false)]
	private static void Unmute(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Unmute): clean
		uint uVar1;
		Player player;

		if (Il2CppMethodInitialized_07545790 == false) {
			Il2CppMethodInitialized_07545790 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			player = ChatManager.GetPlayer(args);
		}
		else {
			player = ChatManager.GetPlayer(args);
		}
		if (player == null) {
			return;
		}
		if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		ChatManager.UnmutePlayer(player, "Emote");
		ChatManager.UnmutePlayer(player, "Text");
		ChatManager.UnmutePlayer(player, "Voice");
		return;
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x582ACE0", Offset = "0x5829CE0", VA = "0x582ACE0")]
	[Command("nextsong", "/nextsong: Play next song in playlist.", AutofillType.None, false)]
	private static void NextSong(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$NextSong): clean
		MusicManager.ChatNextSong();
		return;
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x582ACF0", Offset = "0x5829CF0", VA = "0x582ACF0")]
	[Command("pause", "/pause: Pause the multiplayer game.", AutofillType.None, false)]
	private static void Pause(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Pause): 5 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this;
		bool bVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545791 == false) {
			Il2CppMethodInitialized_07545791 = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar2 == 0) {
			bVar3 = ChatManager.CheckMC();
		}
		else {
			bVar3 = ChatManager.CheckMC();
		}
		if (!bVar3) {
			return;
		}
		__this = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameManager))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this.PauseGame();
		return;
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x582ADD0", Offset = "0x5829DD0", VA = "0x582ADD0")]
	[Command("unpause", "/unpause: Unpause the multiplayer game.", AutofillType.None, false)]
	private static void Unpause(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Unpause): 5 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this;
		bool bVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545792 == false) {
			Il2CppMethodInitialized_07545792 = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar2 == 0) {
			bVar3 = ChatManager.CheckMC();
		}
		else {
			bVar3 = ChatManager.CheckMC();
		}
		if (!bVar3) {
			return;
		}
		__this = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameManager))._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		__this.StartUnpauseGame();
		return;
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x582AEB0", Offset = "0x5829EB0", VA = "0x582AEB0")]
	[Command("resetkd", "/resetkd: Reset your own stats.", AutofillType.None, false)]
	private static void Resetkd(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Resetkd): clean
		Player player;

		player = PhotonNetwork.LocalPlayer;
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			InGameManager.ResetPlayerKD(player);
			return;
		}
		InGameManager.ResetPlayerKD(player);
		return;
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x582AF30", Offset = "0x5829F30", VA = "0x582AF30")]
	[Command("resetkdall", "/resetkdall: Reset all player stats.", AutofillType.None, false)]
	private static void Resetkdall(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Resetkdall): 8 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		PhotonView __this;
		MethodInfo pMVar3;
		Il2CppClass pIVar4;

		pMVar3 = MethodInfo_System_Array_Empty_object;
		__this = RPCManager.PhotonView;
		if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.RPC("ResetKDRPC", 0, *(Object[]*)pIVar4.static_fields);
		return;
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x582B040", Offset = "0x582A040", VA = "0x582B040")]
	[Command("help", "/help [page(optional)]: Displays command usage.", AutofillType.None, false)]
	private static void Help(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Help): 18 lines keep C-only constructs
		code cVar1;
		uint uVar2;
		Dictionary<string, ChatManager.CommandAttribute> source;
		double dVar3;
		bool bVar4;
		int iVar5;
		Func<T, TResult> pSVar6;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		GameManagers_ChatManager___c_StaticFields pGVar7;
		Func<T, TResult> __this;
		System_Collections_Generic_Dictionary_TKey__TElement__o __this_00;
		System_Collections_Generic_List_TValue__o __this_01;
		String pSVar8;
		String pSVar9;
		object pIVar10;
		object arg1;
		Math method_01;
		int iStack_68;
		int iStack_64;
		byte[] auStack_60 = new byte[16];
		MethodInfo pMStack_50;
		byte[] auStack_48 = new byte[8];
		MethodInfo pMStack_38;

		auStack_48 = (byte[])0x0;
		pMStack_38 = null;
		iStack_68 = 1;
		if (args == null) {
			throw new NullReferenceException();
		}
		if (((int)args.Length < 2) ||(Int32.TryParse(args[1], ref iStack_68), iStack_68 != 0)) {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			iStack_68 = 1;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		source = ChatManager.CommandsCache;
		if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar7 = typeof(ChatManager.c).static_fields;
			pSVar6 = (Func<T, TResult>)pGVar7.__9__13_0;
		}
		else {
			pGVar7 = typeof(ChatManager.c).static_fields;
			pSVar6 = (Func<T, TResult>)pGVar7.__9__13_0;
		}
		if (pSVar6 == null) {
			if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(ChatManager.c).static_fields;
			}
			pIVar10 = (object)pGVar7.__9;
			pSVar6 = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<KeyValuePair<string, ChatManager.CommandAttribute>, bool>));
			pSVar6 = new Func<KeyValuePair<object, object>, bool>(pIVar10, (intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_0);
			pGVar7 = typeof(ChatManager.c).static_fields;
			pGVar7.__9__13_0 = (Func<KeyValuePair<string, ChatManager.CommandAttribute>, bool>)pSVar6;
		}
		source_00 = Enumerable.Where<KeyValuePair<string, ChatManager.CommandAttribute>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)pSVar6);
		if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar7 = typeof(ChatManager.c).static_fields;
			pSVar6 = (Func<T, TResult>)pGVar7.__9__13_1;
		}
		else {
			pGVar7 = typeof(ChatManager.c).static_fields;
			pSVar6 = (Func<T, TResult>)pGVar7.__9__13_1;
		}
		if (pSVar6 == null) {
			if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(ChatManager.c).static_fields;
			}
			pIVar10 = (object)pGVar7.__9;
			pSVar6 = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<KeyValuePair<string, ChatManager.CommandAttribute>, string>));
			pSVar6 = new Func<KeyValuePair<object, object>, object>(pIVar10, (intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_1);
			pGVar7 = typeof(ChatManager.c).static_fields;
			pGVar7.__9__13_1 = (Func<KeyValuePair<string, ChatManager.CommandAttribute>, string>)pSVar6;
			uVar2 = (typeof(ChatManager.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar7 = typeof(ChatManager.c).static_fields;
			__this = (Func<T, TResult>)pGVar7.__9__13_2;
		}
		else {
			pGVar7 = (typeof(ChatManager.c)).static_fields;
			__this = (Func<T, TResult>)pGVar7.__9__13_2;
		}
		if (__this == null) {
			if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(ChatManager.c).static_fields;
			}
			pIVar10 = (object)pGVar7.__9;
			__this = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<KeyValuePair<string, ChatManager.CommandAttribute>, ChatManager.CommandAttribute>));
			__this = new Func<KeyValuePair<object, object>, object>(pIVar10, (intptr_t)MethodInfo_GameManagers_ChatManager_c_Help_b__13_2);
			pGVar7 = typeof(ChatManager.c).static_fields;
			pGVar7.__9__13_2 =(Func<KeyValuePair<string, ChatManager.CommandAttribute>, ChatManager.CommandAttribute>)__this;
		}
		__this_00 = Enumerable.ToDictionary<KeyValuePair<string, ChatManager.CommandAttribute>, string, ChatManager.CommandAttribute>(source_00, (System_Func_TSource__TKey__o)pSVar6, (System_Func_TSource__TElement__o)__this);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar5 = __this_00.Count;
		method_01 = typeof(Math);
		dVar3 = ceil((double)iVar5 / 7.0, (MethodInfo)method_01);
		iVar5 = iStack_68;
		if ((iStack_68 < 1) || ((int)dVar3 < iStack_68)) {
			auStack_60._0_4_ = iStack_68;
			pIVar10 = (object)auStack_60;
			pSVar8 = String.Format("Page {0} does not exist.", pIVar10);
			iVar5 = 4;
		}
		else {
			__this_01 = Util.PaginateDictionary<string, ChatManager.CommandAttribute>((Dictionary<TKey, TValue>)__this_00, iVar5, 7);
			pSVar8 = "----Command list----\n";
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			auStack_60.GetEnumerator((List<object>)__this_01);
			pMStack_38 = pMStack_50;
			auStack_48 = (byte[])auStack_60._0_8_;
			auStack_60._0_8_ = null;
			auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
			while (bVar4 = auStack_48.MoveNext()) {
				if (pMStack_38 == null) {
					throw new NullReferenceException();
				}
				if (*(sbyte)&pMStack_38.parameters == false) {
					cVar1 = (code)(typeof(ChatManager.CLCommandAttribute)._2).typeHierarchyDepth;
					if (((byte)pMStack_38.methodPointer[0x130] < (byte)cVar1) ||(*(ChatManager.CLCommandAttribute*)(*(long)(pMStack_38.methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) != typeof(ChatManager.CLCommandAttribute))) {
						pSVar9 = (String)pMStack_38.name;
					}
					else {
						pSVar9 = (String)pMStack_38.name;
						pSVar9 = ChatManager.GetColorString(pSVar9, 8, false);
					}
					pSVar8 = String.Concat(pSVar8, pSVar9, "\n");
				}
			}
			auStack_48.Dispose();
			auStack_60._0_4_ = iStack_68;
			pIVar10 = (object)auStack_60;
			iStack_64 = (int)dVar3;
			arg1 = (object)iStack_64;
			pSVar9 = String.Format("Page {0} / {1}", pIVar10, arg1);
			pSVar8 = String.Concat(pSVar8, pSVar9);
			iVar5 = 3;
		}
		ChatManager.AddLine(pSVar8, iVar5, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x582B910", Offset = "0x582A910", VA = "0x582B910")]
	[Command("savechat", "/savechat: Save chat history to Aottg2/Chat folder", AutofillType.None, false)]
	private static void SaveChatHistory(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SaveChatHistory): 6 lines keep C-only constructs
		List<string> source;
		bool bVar1;
		String pSVar2;
		DateTime SVar3;
		object pIVar4;
		String pSVar5;
		GameManagers_ChatManager___c_StaticFields pGVar6;
		Func<T1, T2, TResult> __this;
		System_Collections_Generic_IEnumerable_TResult__o values;
		DateTime SStack_40;
		String pSStack_38;

		if (Il2CppMethodInitialized_07545796 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__14_0) ;
			Il2CppMethodInitialized_07545796 = true;
		}
		pSVar2 = FolderPaths.Documents;
		pSVar2 = Path.Combine(pSVar2, "Chat");
		bVar1 = Directory.Exists(pSVar2);
		if (!bVar1) {
			Directory.CreateDirectory(pSVar2);
		}
		SVar3._dateData = (uint64_t)DateTime.UtcNow;
		SStack_40._dateData = SVar3._dateData;
		pIVar4 = (object)SStack_40;
		pSVar5 = String.Format("chat_history_{0:yyyy-MM-dd_HH-mm-ss}", pIVar4);
		bVar1 = Util.IsValidFileName(pSVar5);
		if (bVar1) {
			pSVar5 = String.Concat(pSVar5, ".txt");
			pSStack_38 = Path.Combine(pSVar2, pSVar5);
			source = ChatManager.RawMessages;
			if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(ChatManager.c).static_fields;
				__this = (Func<T1, T2, TResult>)pGVar6.__9__14_0;
			}
			else {
				pGVar6 = typeof(ChatManager.c).static_fields;
				__this = (Func<T1, T2, TResult>)pGVar6.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar6 = typeof(ChatManager.c).static_fields;
				}
				pIVar4 = (object)pGVar6.__9;
				__this = new Func<string, int, string>(pIVar4, (intptr_t)MethodInfo_GameManagers_ChatManager_c_SaveChatHistory_b__14_0);
				pGVar6 = typeof(ChatManager.c).static_fields;
				pGVar6.__9__14_0 = (Func<string, int, string>)__this;
			}
			values = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__int__TResult__o)__this);
			pSVar2 = String.Join("\n", (IEnumerable<string>)values);
			SStack_40._dateData = SVar3._dateData;
			pIVar4 = (object)SStack_40;
			pSVar2 = String.Format("[TIME:{0:yyyy-MM-dd HH:mm:ss UTC}]\n\n{1}", pIVar4, (object)pSVar2);
			File.WriteAllText(pSStack_38, pSVar2);
			pSVar2 = String.Concat("Chat history saved to Aottg2/Chat/", pSVar5);
			ChatManager.AddLine(pSVar2, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		else {
			ChatManager.AddLine("Invalid filename error.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		return;
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x582BE40", Offset = "0x582AE40", VA = "0x582BE40")]
	[Command("pm", "/pm [ID]: Send a private message to player with ID", AutofillType.PlayerID, false)]
	private static void PM(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$PM): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Player target;
		Player pPVar3;
		ChatPanel __this;
		System_Collections_Generic_IEnumerable_TSource__o values;
		String message;
		String* ppSVar4;

		if (args == null) {
	label_0592c03b: ;
			throw new NullReferenceException();
		}
		uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		if ((int)args.Length < 2) {
			if (uVar1 == 0) {
			}
			ppSVar4 = &"Usage: /pm [ID] [message]";
		}
		else {
			if (uVar1 == 0) {
				target = ChatManager.GetPlayer(args);
			}
			else {
				target = ChatManager.GetPlayer(args);
			}
			if (target == null) {
				return;
			}
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			pPVar3 = PhotonNetwork.LocalPlayer;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			if (target != pPVar3) {
				if (uVar1 == 0) {
				}
				__this = ChatManager.GetChatPanel();
				bVar2 = ((Object)__this != null);
				if (!bVar2) {
					return;
				}
				if (__this != null) {
					__this.EnterPMMode(target);
					if ((int)args.Length < 3) {
						return;
					}
					values = Enumerable.Skip<string>((System_Collections_Generic_IEnumerable_TSource__o)args, 2);
					message = String.Join(" ", (IEnumerable<string>)values);
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					ChatManager.SendPrivateMessage(target, message);
					return;
				}
				goto label_0592c03b;
			}
			if (uVar1 == 0) {
			}
			ppSVar4 = &"Cannot send private messages to yourself.";
		}
		ChatManager.AddLine(*ppSVar4, 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x582C580", Offset = "0x582B580", VA = "0x582C580")]
	[Command("restart", "/restart: Restarts the game.", AutofillType.None, false, Alias = "r")]
	private static void Restart(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Restart): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545798 == false) {
			Il2CppMethodInitialized_07545798 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CheckMC();
		}
		else {
			bVar2 = ChatManager.CheckMC();
		}
		if (bVar2) {
			if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
				InGameManager.RestartGame();
				return;
			}
			InGameManager.RestartGame();
			return;
		}
		return;
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x582C610", Offset = "0x582B610", VA = "0x582C610")]
	[Command("closelobby", "/closelobby: Kicks all players and ends the lobby.", AutofillType.None, false)]
	private static void CloseLobby(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$CloseLobby): 5 lines keep C-only constructs
		uint uVar1;
		Player player;
		ChatManager __this;
		bool bVar2;
		Player[] pPVar3;
		il2cpp_array_size_t iVar4;
		ChatManager.d__0<WaitAndLeave> __this_00;
		uint uVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545799 == false) {
			Il2CppMethodInitialized_07545799 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CheckMC();
		}
		else {
			bVar2 = ChatManager.CheckMC();
		}
		if (!bVar2) {
			return;
		}
		if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
		}
		pPVar3 = PhotonNetwork.PlayerList;
		if (pPVar3 != null) {
			iVar4 = pPVar3.Length;
			if (0 < (int)iVar4) {
				uVar5 = 0;
				do {
					if ((uint)iVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					player = pPVar3[(int)uVar5];
					if (player == null) goto label_0592c7b5;
					if (player.IsLocal == false) {
						ChatManager.KickPlayer(player, false, false, ".");
						iVar4 = pPVar3.Length;
					}
					uVar5 = uVar5 + 1;
				} while ((int)uVar5 < (int)iVar4);
			}
			__this = ChatManager._instance;
			if (__this != null) {
				__this_00 = new ChatManager.d__0<WaitAndLeave>(0);
				__this.StartCoroutine((IEnumerator)__this_00);
				return;
			}
		}
	label_0592c7b5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x582C9C0", Offset = "0x582B9C0", VA = "0x582C9C0")]
	[Command("kick", "/kick [ID]: Kick the player with ID", AutofillType.PlayerID, false)]
	private static void Kick(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Kick): 1 lines keep C-only constructs
		uint uVar1;
		PhotonView __this;
		bool bVar2;
		Player player;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		int local_1c;

		if (Il2CppMethodInitialized_0754579a == false) {
			Il2CppMethodInitialized_0754579a = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			player = ChatManager.GetPlayer(args);
		}
		else {
			player = ChatManager.GetPlayer(args);
		}
		if (player != null) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = PhotonNetwork.IsMasterClient;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			if (bVar2) {
				if (uVar1 == 0) {
				}
				ChatManager.KickPlayer(player, true, false, ".");
				return;
			}
			if (uVar1 == 0) {
				bVar2 = ChatManager.CanVoteKick(player);
			}
			else {
				bVar2 = ChatManager.CanVoteKick(player);
			}
			if (bVar2) {
				__this = RPCManager.PhotonView;
				parameters = (Object[])new object[1];
				local_1c = player.actorNumber;
				pIVar3 = (object)local_1c;
				if (parameters != null) {
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar3;
					if (__this != null) {
						__this.RPC("VoteKickRPC", 2, parameters);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x582CD50", Offset = "0x582BD50", VA = "0x582CD50")]
	[Command("ban", "/ban [ID]: Ban the player with ID", AutofillType.PlayerID, false)]
	private static void Ban(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Ban): 5 lines keep C-only constructs
		uint uVar1;
		int actorNumber;
		bool bVar2;
		Player pPVar3;
		String reason;
		Action<string> __this;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754579b == false) {
			Il2CppMethodInitialized_0754579b = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		else {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			else {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			if (pPVar3 != null) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 2);
				actorNumber = pPVar3.actorNumber;
				__this = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
				ModeratorManager.RoomBan(actorNumber, false, __this, reason);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x582D020", Offset = "0x582C020", VA = "0x582D020")]
	[Command("infoban", "/infoban [ID]: Ban the player with the legacy infoban method.", AutofillType.PlayerID, false)]
	private static void InfoBan(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$InfoBan): 7 lines keep C-only constructs
		uint uVar1;
		int actorNumber;
		bool bVar2;
		Player player;
		String reason;
		Action<string> __this;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754579c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&"Legacy infoban requires Master Client; using room session ban instead.");
			Il2CppMethodInitialized_0754579c = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		else {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				player = ChatManager.GetPlayer(args);
			}
			else {
				player = ChatManager.GetPlayer(args);
			}
			if (player != null) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 2);
				bVar2 = PhotonNetwork.IsMasterClient;
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				if (bVar2) {
					if (uVar1 == 0) {
					}
					ChatManager.KickPlayer(player, true, true, ".");
					return;
				}
				if (uVar1 == 0) {
				}
				ChatManager.AddLine("Legacy infoban requires Master Client; using room session ban instead.", 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
				actorNumber = player.actorNumber;
				__this = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
				ModeratorManager.RoomBan(actorNumber, false, __this, reason);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x582D240", Offset = "0x582C240", VA = "0x582D240")]
	[Command("ipban", "/ipban [ID]: Room IP-ban the player with ID.", AutofillType.PlayerID, false)]
	private static void IPBan(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$IPBan): 5 lines keep C-only constructs
		uint uVar1;
		int actorNumber;
		bool bVar2;
		Player pPVar3;
		String reason;
		Action<string> __this;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754579d == false) {
			Il2CppMethodInitialized_0754579d = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		else {
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			else {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			if (pPVar3 != null) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 2);
				actorNumber = pPVar3.actorNumber;
				__this = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
				ModeratorManager.RoomBan(actorNumber, true, __this, reason);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x582D390", Offset = "0x582C390", VA = "0x582D390")]
	[Command("regionban", "/regionban [ID]: Region-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionBan(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RegionBan): 5 lines keep C-only constructs
		uint uVar1;
		int actorNumber;
		bool bVar2;
		Player pPVar3;
		String reason;
		Action<string> __this;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754579e == false) {
			Il2CppMethodInitialized_0754579e = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CanUseRegionModerationCommand();
		}
		else {
			bVar2 = ChatManager.CanUseRegionModerationCommand();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			else {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			if (pPVar3 != null) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 2);
				actorNumber = pPVar3.actorNumber;
				__this = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
				ModeratorManager.RegionBan(actorNumber, false, __this, reason);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x582D5A0", Offset = "0x582C5A0", VA = "0x582D5A0")]
	[Command("regionipban", "/regionipban [ID]: Region IP-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionIPBan(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RegionIPBan): 5 lines keep C-only constructs
		uint uVar1;
		int actorNumber;
		bool bVar2;
		Player pPVar3;
		String reason;
		Action<string> __this;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754579f == false) {
			Il2CppMethodInitialized_0754579f = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.CanUseRegionModerationCommand();
		}
		else {
			bVar2 = ChatManager.CanUseRegionModerationCommand();
		}
		if (bVar2) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			else {
				pPVar3 = ChatManager.GetPlayer(args);
			}
			if (pPVar3 != null) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 2);
				actorNumber = pPVar3.actorNumber;
				__this = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
				ModeratorManager.RegionBan(actorNumber, true, __this, reason);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x582D6F0", Offset = "0x582C6F0", VA = "0x582D6F0")]
	[Command("unban", "/unban [session|ip] [target] [optional reason]: Room unban by session or ip target.", AutofillType.None, false)]
	private static void Unban(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Unban): 4 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		String a;
		String reason;
		RoomBanEntry __this;
		Action<string> __this_00;
		RoomBanEntry targetAddress;

		if (Il2CppMethodInitialized_075457a0 == false) {
			Il2CppMethodInitialized_075457a0 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_0592d8e8;
	label_0592d723: ;
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_0592d723;
	label_0592d8e8: ;
			bVar2 = ChatManager.CanUseRoomModerationCommand();
		}
		if (bVar2) {
			if (args == null) goto label_0592d977;
			if (2 < (int)args.Length) {
				if (args[1] == null) {
	label_0592d977: ;
					throw new NullReferenceException();
				}
				a = (args[1]).ToLower();
				if ((uint)args.Length < 3) {
					throw new IndexOutOfRangeException();
				}
				pSVar1 = args[2];
				if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				reason = ChatManager.GetOptionalReason(args, 3);
				__this = new RoomBanEntry();
				if (__this == null) goto label_0592d977;
				__this.CanUnban = true;
				bVar2 = (a == "session");
				if ((bVar2) || (bVar2 = (a == "sid"))) {
					__this.IsIPBan = false;
					targetAddress = &__this.fields;
	label_0592d7f4: ;
					targetAddress.SessionId = pSVar1;
					__this_00 = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
					ModeratorManager.RoomUnban(__this, __this_00, reason);
					return;
				}
				bVar2 = (a == "ip");
				if (bVar2) {
					__this.IsIPBan = true;
					targetAddress = (RoomBanEntry)&__this.IPAddress;
					goto label_0592d7f4;
				}
			}
			ChatManager.AddLine("Usage: /unban [session|ip] [target] [optional reason]", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		return;
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x582D990", Offset = "0x582C990", VA = "0x582D990")]
	[Command("regionunban", "/regionunban [targetId] [optional reason]: Region unban by target id.", AutofillType.None, true)]
	private static void RegionUnban(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RegionUnban): 6 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		bool bVar3;
		String reason;
		RegionBanEntry __this;
		Action<string> __this_00;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457a1 == false) {
			Il2CppMethodInitialized_075457a1 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar3 = ChatManager.CanUseRegionModerationCommand();
			if (bVar3) goto label_0592da33;
		}
		else {
			bVar3 = ChatManager.CanUseRegionModerationCommand();
			if (bVar3) {
	label_0592da33: ;
				if (args != null) {
					if ((int)args.Length < 2) {
						ChatManager.AddLine("Usage: /regionunban [targetId] [optional reason]", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
						return;
					}
					pSVar2 = args[1];
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					reason = ChatManager.GetOptionalReason(args, 2);
					__this = new RegionBanEntry();
					if (__this != null) {
						__this.TargetId = pSVar2;
						__this_00 = new Action<string>(null, (intptr_t)MethodInfo_GameManagers_ChatManager_PrintModerationStatus);
						ModeratorManager.RegionUnban(__this, __this_00, reason);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x582DB50", Offset = "0x582CB50", VA = "0x582DB50")]
	private static void PrintModerationStatus(string text)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$PrintModerationStatus): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		int iVar3;
		int iVar4;

		bVar2 = String.IsNullOrEmpty(text);
		if (bVar2) {
			return;
		}
		if (text == null) {
			throw new NullReferenceException();
		}
		iVar3 = text.IndexOf("timed out", 5);
		iVar4 = 4;
		if ((iVar3 < 0) &&(iVar3 = text.IndexOf("rate limited", 5), iVar3 < 0)) {
			iVar4 = text.IndexOf("error", 5);
			iVar4 = (iVar4 >> 0x1f) + 4;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ChatManager.AddLine(text, iVar4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x582DC70", Offset = "0x582CC70", VA = "0x582DC70")]
	private static bool IsAdminOrModerator()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$IsAdminOrModerator): 2 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		String[] source;

		source = AccountManager.Roles;
		if (source != null) {
			bVar1 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (Il2CppObject *)"admin");
			if (!bVar1) {
				bVar2 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (Il2CppObject *)"moderator");
				return bVar2;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x582CEA0", Offset = "0x582BEA0", VA = "0x582CEA0")]
	private static bool CanUseRoomModerationCommand()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$CanUseRoomModerationCommand): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;

		bVar1 = PhotonNetwork.IsMasterClient;
		if (!bVar1) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = ChatManager.IsAdminOrModerator();
				if (bVar1) {
					return true;
				}
			}
			else {
				bVar1 = ChatManager.IsAdminOrModerator();
				if (bVar1) {
					return true;
				}
			}
			ChatManager.AddLine("Must be Master Client, Admin, or Moderator to use that command.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		return bVar2;
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x582D4E0", Offset = "0x582C4E0", VA = "0x582D4E0")]
	private static bool CanUseRegionModerationCommand()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$CanUseRegionModerationCommand): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457a5 == false) {
			Il2CppMethodInitialized_075457a5 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar2 = ChatManager.IsAdminOrModerator();
			if (bVar2) {
				return true;
			}
		}
		else {
			bVar2 = ChatManager.IsAdminOrModerator();
			if (bVar2) {
				return true;
			}
		}
		ChatManager.AddLine("Must be Admin or Moderator to use that command.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return false;
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x582DD30", Offset = "0x582CD30", VA = "0x582DD30")]
	private static bool ShouldIncludeHiddenCommandInHelp(CommandAttribute command)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ShouldIncludeHiddenCommandInHelp): clean
		bool bVar1;
		String pSVar2;

		if (command != null) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = ChatManager.IsAdminOrModerator();
			}
			else {
				bVar1 = ChatManager.IsAdminOrModerator();
			}
			if (bVar1) {
				pSVar2 = command._Name_k__BackingField;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = pSVar2.ToLower();
				bVar1 = (pSVar2 == "regionban");
				if (bVar1) {
					return true;
				}
				bVar1 = (pSVar2 == "regionipban");
				if (bVar1) {
					return true;
				}
				bVar1 = (pSVar2 == "regionunban");
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x582CF80", Offset = "0x582BF80", VA = "0x582CF80")]
	private static string GetOptionalReason(string[] args, int startIndex)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetOptionalReason): 2 lines keep C-only constructs
		System_Collections_Generic_IEnumerable_TSource__o values;
		String pSVar1;

		if ((args == null) || ((int)args.Length <= startIndex)) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		values = Enumerable.Skip<string>((System_Collections_Generic_IEnumerable_TSource__o)args, startIndex);
		pSVar1 = String.Join(" ", (IEnumerable<string>)values);
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = pSVar1.Trim();
		return pSVar1;
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x582CBC0", Offset = "0x582BBC0", VA = "0x582CBC0")]
	private static bool CanVoteKick(Player player)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$CanVoteKick): 2 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		bool bVar5;
		Player pPVar6;
		String* ppSVar7;

		pSVar2 = SettingsManager.InGameCurrent;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Misc, pSVar3 == null)) ||(pSVar4 = pSVar3.AllowVoteKicking, pSVar4 == null)) {
	label_0592cd45: ;
			throw new NullReferenceException();
		}
		if (pSVar4._value == false) {
			ppSVar7 = &"Server does not allow vote kicking.";
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar6 = PhotonNetwork.LocalPlayer;
			}
			else {
				pPVar6 = PhotonNetwork.LocalPlayer;
			}
			if (pPVar6 == player) {
				ppSVar7 = &"Cannot vote to kick yourself.";
				uVar1 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
			}
			else {
				if (player == null) goto label_0592cd45;
				bVar5 = player.IsMasterClient;
				if (!bVar5) {
					return true;
				}
				ppSVar7 = &"Cannot vote to kick the Master Client.";
				uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			}
		}
		if (uVar1 == 0) {
		}
		ChatManager.AddLine(*ppSVar7, 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return false;
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x582DE20", Offset = "0x582CE20", VA = "0x582DE20")]
	[Command("maxplayers", "/maxplayers [num]: Sets room's max player count.", AutofillType.None, false)]
	private static void MaxPlayers(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$MaxPlayers): 6 lines keep C-only constructs
		bool bVar1;
		uint in_EAX;
		Room __this;
		String pSVar2;
		int color;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = ChatManager.CheckMC();
		}
		else {
			bVar1 = ChatManager.CheckMC();
		}
		if (!bVar1) {
			return;
		}
		if (args == null) {
	label_0592dfa2: ;
			throw new NullReferenceException();
		}
		if ((((int)args.Length < 2) ||(bVar1 = Int32.TryParse(args[1], (int)((long)&uStack_18 + 4)), !bVar1)) || ((long)uStack_18 < 0)) {
			color = 4;
			pSVar2 = "Max players must be >= 0.";
		}
		else {
			__this = PhotonNetwork.CurrentRoom;
			if (__this == null) goto label_0592dfa2;
			__this.MaxPlayers = uStack_18._4_4_;
			pSVar2 = (((long)&uStack_18 + 4)).ToString();
			pSVar2 = String.Concat("Max players set to ", pSVar2, ".");
			color = 3;
		}
		ChatManager.AddLine(pSVar2, color, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x582C7C0", Offset = "0x582B7C0", VA = "0x582C7C0")]
	public static void KickPlayer(Player player, bool print = true, bool ban = false, string reason = ".")
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$KickPlayer): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Player pPVar3;
		String pSVar4;
		String* ppSVar5;

		if (Il2CppMethodInitialized_075457aa == false) {
			Il2CppMethodInitialized_075457aa = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar2 = PhotonNetwork.IsMasterClient;
		}
		if (bVar2) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				pPVar3 = PhotonNetwork.LocalPlayer;
			}
			else {
				pPVar3 = PhotonNetwork.LocalPlayer;
			}
			if (pPVar3 != player) {
				if (((typeof(AnticheatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				AnticheatManager.KickPlayer(player, ban, "");
				if (print) {
					uVar1 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
					if (ban) {
						if (uVar1 == 0) {
						}
						pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
						ppSVar5 = &" has been banned";
					}
					else {
						if (uVar1 == 0) {
						}
						pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
						ppSVar5 = &" has been kicked";
					}
					pSVar4 = String.Concat(pSVar4, *ppSVar5, reason);
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					ChatManager.SendChatAll(pSVar4, 3);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x582DFB0", Offset = "0x582CFB0", VA = "0x582DFB0")]
	public static void VoteKickPlayer(Player voter, Player target)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$VoteKickPlayer): 2 lines keep C-only constructs
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		BoolSetting pSVar3;
		PhotonView __this;
		bool bVar4;
		String pSVar5;
		Object[] parameters;
		object pIVar6;
		BallotBox.Result local_68;
		BallotBox.Result local_48;

		if ((target != null) &&(bVar4 = target.IsMasterClient, !bVar4)) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar4 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar4 = PhotonNetwork.IsMasterClient;
			}
			if (bVar4) {
				pSVar1 = SettingsManager.InGameCurrent;
				if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.AllowVoteKicking, pSVar3 != null)) {
					if (pSVar3._value == false) {
						return;
					}
					if (((typeof(AnticheatManager))._2).cctor_finished_or_no_cctor == 0) {
					}
					local_48 = AnticheatManager.TryVoteKickPlayer(voter, target);
					local_68.target = local_48.target;
					local_68.cooldown._ticks = local_48.cooldown._ticks;
					local_68.type = local_48.type;
					local_68.progress.Item1 = local_48.progress.Item1;
					local_68.progress.Item2 = local_48.progress.Item2;
					local_68._12_4_ = local_48._12_4_;
					pSVar5 = local_68.ToString();
					__this = RPCManager.PhotonView;
					parameters = (Object[])new object[1];
					if (parameters != null) {
						if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
							pIVar6 = new ArrayTypeMismatchException();
							throw pIVar6;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pSVar5;
						if (__this != null) {
							__this.RPC("AnnounceRPC", voter, parameters);
							bVar4 = local_68.IsSuccess;
							if (!bVar4) {
								return;
							}
							pSVar5 = PhotonExtensions.GetStringProperty(target, PlayerProperty.Name, "");
							pSVar5 = String.Concat(pSVar5, " has been vote kicked.");
							if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							}
							ChatManager.SendChatAll(pSVar5, 3);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x582E390", Offset = "0x582D390", VA = "0x582E390")]
	public static void PreserveInputText(string text, int caretPosition)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$PreserveInputText): clean
		uint uVar1;

		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ChatManager._preservedInputText = text;
		ChatManager._preservedInputCaretPosition = caretPosition;
		return;
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x582E450", Offset = "0x582D450", VA = "0x582E450")]
	public static (string, int, int) GetPreservedInputWithCaret()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetPreservedInputWithCaret): 2 lines keep C-only constructs
		int item2;
		int item3;
		GameManagers_ChatManager_StaticFields pGVar1;
		String item1;
		System_ValueTuple_string__int__int__Fields SVar2;
		System_ValueTuple_object__int__int__o local_38;

		pGVar1 = typeof(ChatManager).static_fields;
		item1 = pGVar1._preservedInputText;
		item2 = pGVar1._preservedInputCaretPosition;
		item3 = pGVar1._preservedPMTargetActorNumber;
		pGVar1._preservedInputText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._preservedInputCaretPosition = 0;
		pGVar1._preservedPMTargetActorNumber = -1;
		pGVar1.PreserveInputOnRestart = false;
		local_38.Item1 = null;
		local_38.Item2 = 0;
		local_38.Item3 = 0;
		local_38 = new ValueTuple<object, int, int>((object)item1, item2, item3);
		SVar2.Item2 = local_38.Item2;
		SVar2.Item3 = local_38.Item3;
		SVar2.Item1 = (String)local_38.Item1;
		return (System_ValueTuple_string__int__int__o)SVar2;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x582E540", Offset = "0x582D540", VA = "0x582E540")]
	public static void PreservePMTargetActorNumber(int actorNumber)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$PreservePMTargetActorNumber): clean
		ChatManager._preservedPMTargetActorNumber = actorNumber;
		return;
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x582E5A0", Offset = "0x582D5A0", VA = "0x582E5A0")]
	public static void SaveConversation(string key, string text, int caretPos)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SaveConversation): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		Dictionary<object, int> pSVar3;
		bool bVar4;

		bVar4 = String.IsNullOrEmpty(text);
		uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		if (bVar4) {
			if (uVar1 == 0) {
			}
			pSVar2 = (Dictionary<object, object>)ChatManager._conversationTexts;
			if (pSVar2 != null) {
				pSVar2.Remove((object)key);
				pSVar3 = (Dictionary<object, int>)ChatManager._conversationCarets;
				if (pSVar3 != null) {
					pSVar3.Remove((object)key);
					return;
				}
			}
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = (Dictionary<object, object>)ChatManager._conversationTexts;
			if (pSVar2 != null) {
				pSVar2.set_Item((object)key, (object)text);
				pSVar3 = (Dictionary<object, int>)ChatManager._conversationCarets;
				if (pSVar3 != null) {
					pSVar3.set_Item((object)key, caretPos) ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x582E700", Offset = "0x582D700", VA = "0x582E700")]
	public static (string, int) GetConversation(string key)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetConversation): 6 lines keep C-only constructs
		Dictionary<object, object> __this;
		Dictionary<object, int> __this_00;
		String pSVar1;
		bool bVar2;
		int item2;
		String item1;
		System_ValueTuple_string__int__o SVar3;
		int local_44;
		String local_40;
		System_ValueTuple_object__int__o local_38;

		local_40 = null;
		local_44 = 0;
		__this = (Dictionary<object, object>)ChatManager._conversationTexts;
		if (__this != null) {
			bVar2 = __this.TryGetValue((object)key, (object*)&local_40);
			pSVar1 = local_40;
			item1 = "";
			__this_00 = (Dictionary<object, int>)ChatManager._conversationCarets;
			if (__this_00 != null) {
				if (bVar2) {
					item1 = pSVar1;
				}
				bVar2 = __this_00.TryGetValue((object)key, ref local_44);
				item2 = 0;
				if (bVar2) {
					item2 = local_44;
				}
				local_38.Item1 = null;
				local_38.Item2 = 0;
				local_38._12_4_ = 0;
				local_38 = new ValueTuple<object, int>((object)item1, item2);
				SVar3.Item2 = local_38.Item2;
				SVar3.Item1 = (String)local_38.Item1;
				SVar3._12_4_ = 0;
				return (System_ValueTuple_string__int__o)SVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x582E850", Offset = "0x582D850", VA = "0x582E850")]
	public static void ClearConversation(string key)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearConversation): clean
		uint uVar1;
		Dictionary<object, object> __this;
		Dictionary<object, int> __this_00;

		if (Il2CppMethodInitialized_075457b2 == false) {
			Il2CppMethodInitialized_075457b2 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)ChatManager._conversationTexts;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(ChatManager)).static_fields + 0x108);
		}
		if (__this != null) {
			__this.Remove((object)key);
			__this_00 = (Dictionary<object, int>)ChatManager._conversationCarets;
			if (__this_00 != null) {
				__this_00.Remove((object)key);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x582E930", Offset = "0x582D930", VA = "0x582E930")]
	public static void ResetNotifiedForPM(int pmId)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ResetNotifiedForPM): clean
		uint uVar1;
		HashSet<int> __this;

		if (Il2CppMethodInitialized_075457b3 == false) {
			Il2CppMethodInitialized_075457b3 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = ChatManager.NotifiedPMs;
		}
		else {
			__this = *(HashSet<int>*)((long)(typeof(ChatManager)).static_fields + 0xb0);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Remove(pmId);
		return;
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x582E9D0", Offset = "0x582D9D0", VA = "0x582E9D0")]
	public static bool RegisterCustomCommand(string name, UserMethod callback, string description, AutofillType autofillType = AutofillType.None)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RegisterCustomCommand): 3 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		HashSet<object> __this;
		bool bVar3;
		String pSVar4;
		String name_00;
		ChatManager.CLCommandAttribute __this_00;
		object pIStack_38;

		if (Il2CppMethodInitialized_075457b4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_set_Item) ;
			Il2CppMethodInitialized_075457b4 = true;
		}
		pIStack_38 = null;
		bVar3 = String.IsNullOrWhiteSpace(name);
		if (callback == null) {
			return false;
		}
		if (bVar3) {
			return false;
		}
		if ((name != null) &&(pSVar4 = name.Trim(), pSVar4 != null)) {
			pSVar4 = pSVar4.ToLower();
			pSVar2 = (Dictionary<object, object>)ChatManager.CommandsCache;
			if (pSVar2 != null) {
				bVar3 = pSVar2.TryGetValue((object)pSVar4, ref pIStack_38);
				if (bVar3) {
					if (pIStack_38 == null) {
						return false;
					}
					bVar1 = (typeof(ChatManager.CLCommandAttribute)._2).typeHierarchyDepth;
					if ((pIStack_38.klass._2).typeHierarchyDepth < bVar1) {
						return false;
					}
					if ((pIStack_38.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(ChatManager.CLCommandAttribute)) {
						return false;
					}
				}
				pSVar2 = (Dictionary<object, object>)ChatManager.CommandsCache;
				name_00 = name.Trim();
				if (description == null) {
					description = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				__this_00 = new ChatManager.CLCommandAttribute(name_00, description, callback, autofillType);
				if (pSVar2 != null) {
					pSVar2.set_Item((object)pSVar4, (object)__this_00);
					__this = (HashSet<object>)ChatManager.CustomCommandKeys;
					if (__this != null) {
						__this.Add((object)pSVar4);
						return true;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x582EC00", Offset = "0x582DC00", VA = "0x582EC00")]
	public static void ClearCustomCommands()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearCustomCommands): 2 lines keep C-only constructs
		HashSet<object> pSVar1;
		Dictionary<object, object> __this;
		object key;
		bool bVar2;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_30;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = (HashSet<object>)ChatManager.CustomCommandKeys;
		if (pSVar1 != null) {
			local_58 = pSVar1.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				key = local_58._current;
				if (!bVar2) break;
				__this = (Dictionary<object, object>)ChatManager.CommandsCache;
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Remove(key);
			}
			local_58.Dispose();
			pSVar1 = (HashSet<object>)ChatManager.CustomCommandKeys;
			if (pSVar1 != null) {
				pSVar1.Clear();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x582EE00", Offset = "0x582DE00", VA = "0x582EE00")]
	public static string[] ParseCommandArgs(string text)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ParseCommandArgs): 14 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		MethodInfo pMVar5;
		bool bVar6;
		bool bVar7;
		bool bVar8;
		ushort uVar9;
		Il2CppClass pIVar10;
		List<string> __this;
		StringBuilder __this_00;
		String pSVar11;
		String[] pSVar12;
		int index;
		int iVar13;
		ushort uVar14;
		bool bVar15;

		bVar6 = String.IsNullOrEmpty(text);
		pMVar5 = MethodInfo_System_Array_Empty_string;
		if (bVar6) {
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar10 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				pIVar10 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			return *(String[]*)pIVar10.static_fields;
		}
		__this = new List<string>();
		__this_00 = new StringBuilder();
		if (text == null) goto label_0592f325;
		if (__this_00 == null) {
			if (0 < text._stringLength) {
				iVar13 = 0;
				bVar6 = false;
				bVar15 = false;
				uVar14 = 0;
				do {
					uVar9 = text.get_Chars(iVar13);
					if (bVar15) {
						if (uVar9 != uVar14) goto label_0592f325;
						bVar7 = false;
						uVar9 = uVar14;
						bVar8 = bVar6;
					}
					else {
						bVar8 = true;
						if (uVar9 == 0x22) {
							bVar7 = true;
						}
						else {
							bVar7 = true;
							if (uVar9 != 0x27) {
								bVar7 = Char.IsWhiteSpace(uVar9);
								if ((!bVar7) || (bVar7 = bVar15, uVar9 = uVar14, bVar8 = bVar6, bVar6)) goto label_0592f325;
							}
						}
					}
					bVar6 = bVar8;
					bVar15 = bVar7;
					iVar13 = iVar13 + 1;
					uVar14 = uVar9;
				} while (iVar13 < text._stringLength);
				goto label_0592f271;
			}
		}
		else {
			iVar13 = text._stringLength;
			if (__this == null) {
				if (iVar13 < 1) goto label_0592f325;
				iVar13 = 0;
				bVar7 = false;
				bVar15 = false;
				uVar14 = 0;
				do {
					uVar9 = text.get_Chars(iVar13);
					bVar6 = bVar15;
					if (bVar7) {
						if (uVar9 == uVar14) {
							bVar8 = false;
							uVar9 = uVar14;
						}
						else {
	label_0592f24d: ;
							__this_00.Append(uVar9);
							bVar8 = bVar7;
							uVar9 = uVar14;
						}
					}
					else {
						bVar6 = true;
						if (uVar9 == 0x22) {
							bVar8 = true;
						}
						else {
							bVar8 = true;
							if (uVar9 != 0x27) {
								bVar8 = Char.IsWhiteSpace(uVar9);
								bVar6 = true;
								if (!bVar8) goto label_0592f24d;
								bVar8 = bVar7;
								bVar6 = bVar15;
								uVar9 = uVar14;
								if (bVar15) {
									__this_00.ToString();
									throw new NullReferenceException();
								}
							}
						}
					}
					bVar7 = bVar8;
					iVar13 = iVar13 + 1;
					bVar15 = bVar6;
					uVar14 = uVar9;
				} while (iVar13 < text._stringLength);
			}
			else {
				index = 0;
				if (iVar13 < 1) {
					bVar6 = false;
				}
				else {
					bVar6 = false;
					uVar14 = 0;
					bVar15 = false;
					do {
						uVar9 = text.get_Chars(index);
						if (bVar15) {
							if (uVar9 == uVar14) {
								bVar15 = false;
							}
							else {
								__this_00.Append(uVar9);
							}
						}
						else if ((uVar9 == 0x22) || (uVar9 == 0x27)) {
							bVar6 = true;
							bVar15 = true;
							uVar14 = uVar9;
						}
						else {
							bVar7 = Char.IsWhiteSpace(uVar9);
							if (bVar7) {
								if (bVar6) {
									pSVar11 = __this_00.ToString();
									pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pSVar12 = __this._items;
									if (pSVar12 == null) goto label_0592f325;
									uVar4 = __this._size;
									if (uVar4 < (uint)pSVar12.Length) {
										__this._size = uVar4 + 1;
										pSVar12[(int)uVar4] = pSVar11;
									}
									else {
										__this.AddWithResize((object)pSVar11);
									}
									bVar6 = false;
									__this_00.Clear();
								}
							}
							else {
								__this_00.Append(uVar9);
								bVar6 = true;
							}
						}
						index = index + 1;
					} while (index < text._stringLength);
				}
			}
	label_0592f271: ;
			if (bVar6) {
				if ((__this_00 != null) &&(pSVar11 = __this_00.ToString(), pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add, __this != null)) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar12 = __this._items;
					if (pSVar12 == null) goto label_0592f325;
					uVar4 = __this._size;
					if (uVar4 < (uint)pSVar12.Length) {
						__this._size = uVar4 + 1;
						pSVar12[(int)uVar4] = pSVar11;
					}
					else {
						__this.AddWithResize((object)pSVar11);
					}
					goto label_0592f305;
				}
				goto label_0592f325;
			}
		}
		if (__this != null) {
	label_0592f305: ;
			pSVar12 = (String[])__this.ToArray();
			return pSVar12;
		}
	label_0592f325: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x582F350", Offset = "0x582E350", VA = "0x582F350")]
	private static int GetAutofillTokenStart(string input, int firstSpaceIndex, AutofillType autofillType)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetAutofillTokenStart): clean
		int iVar1;

		if (autofillType == 2) {
			if (input == null) {
				throw new NullReferenceException();
			}
			iVar1 = input.LastIndexOf(0x20);
			if (firstSpaceIndex < iVar1) {
				return iVar1;
			}
		}
		return firstSpaceIndex;
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x582F380", Offset = "0x582E380", VA = "0x582F380")]
	public static void Init()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Init): 3 lines keep C-only constructs
		byte bVar1;
		MethodInfo pSVar3;
		ChatManager.CommandAttribute commandAttribute;
		Dictionary<object, object> pSVar4;
		Il2CppType handle;
		uint uVar5;
		ChatManager pGVar6;
		Type pSVar7;
		long lVar8;
		Object[] pSVar9;
		il2cpp_array_size_t iVar10;
		String pSVar11;
		ChatManager.CommandAttribute __this;
		uint uVar12;
		ulong uVar13;

		pGVar6 = SingletonFactory.CreateSingleton<ChatManager>((object)ChatManager._instance);
		ChatManager._instance = pGVar6;
		handle = TypeRef_GameManagers_ChatManager;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar7 != null) {
			lVar8 = pSVar7.unknown(0x3c);
			pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_GameManagers_ChatManager_CommandAttribute);
			if (lVar8 != 0) {
				uVar5 = *(uint)(lVar8 + 0x18);
				if (0 < (int)uVar5) {
					uVar12 = 0;
					do {
						if (uVar5 <= uVar12) {
	label_0592f6a6: ;
							throw new IndexOutOfRangeException();
						}
						pSVar3 = *(MethodInfo*)(lVar8 + 0x20 + (long)(int)uVar12 * 8);
						if (pSVar3 == null) goto label_0592f692;
						pSVar9 = pSVar3.GetCustomAttributes(pSVar7, false);
						if (((pSVar9 != null) && (iVar10 = pSVar9.Length, iVar10 != 0)) &&(0 < (int)iVar10)) {
							uVar13 = 0;
							do {
								if ((iVar10 & 0xffffffff) <= uVar13) goto label_0592f6a6;
								commandAttribute = (ChatManager.CommandAttribute)pSVar9[uVar13];
								if (commandAttribute != null) {
									bVar1 = (typeof(ChatManager.CommandAttribute)._2).typeHierarchyDepth;
									if ((bVar1 <= (commandAttribute.klass._2).typeHierarchyDepth) &&((commandAttribute.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ChatManager.CommandAttribute))) {
										commandAttribute._Command_k__BackingField = pSVar3;
										pSVar11 = commandAttribute._Name_k__BackingField;
										if (pSVar11 == null) goto label_0592f692;
										pSVar4 = (Dictionary<object, object>)ChatManager.CommandsCache;
										pSVar11 = pSVar11.ToLower();
										if (pSVar4 == null) goto label_0592f692;
										pSVar4.Add((object)pSVar11, (object)commandAttribute);
										if (commandAttribute._Alias_k__BackingField != null) {
											__this = new ChatManager.CommandAttribute(commandAttribute);
											if (__this == null) goto label_0592f692;
											__this._IsAlias_k__BackingField = true;
											pSVar11 = __this._Alias_k__BackingField;
											if (pSVar11 == null) goto label_0592f692;
											pSVar4 = (Dictionary<object, object>)ChatManager.CommandsCache;
											pSVar11 = pSVar11.ToLower();
											if (pSVar4 == null) goto label_0592f692;
											pSVar4.Add((object)pSVar11, (object)__this);
										}
									}
								}
								uVar13 = uVar13 + 1;
								uVar5 = (uint)pSVar9.Length;
								iVar10 = (il2cpp_array_size_t)uVar5;
							} while ((long)uVar13 < (long)(int)uVar5);
						}
						uVar12 = uVar12 + 1;
						uVar5 = *(uint)(lVar8 + 0x18);
					} while ((int)uVar12 < (int)uVar5);
				}
				return;
			}
		}
	label_0592f692: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x582F6B0", Offset = "0x582E6B0", VA = "0x582F6B0")]
	public static void Reset()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Reset): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457b8 == false) {
			Il2CppMethodInitialized_075457b8 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			ChatManager.Clear();
			ChatManager.LoadTheme();
			return;
		}
		ChatManager.Clear();
		ChatManager.LoadTheme();
		return;
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x5829730", Offset = "0x5828730", VA = "0x5829730")]
	public static void Clear()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Clear): 27 lines keep C-only constructs
		int piVar1;
		int iVar2;
		List<string> pSVar3;
		List<ChatTextColor> pSVar4;
		List<bool> pSVar5;
		List<DateTime> pSVar6;
		List<int> pSVar7;
		List<ChatManager.ChatPlayerLineData> pSVar8;
		List<ChatManager.ChatDisplayLine> pSVar9;
		List<long> pSVar10;
		HashSet<int> pSVar11;
		bool bVar12;
		ChatPanel __this;
		FeedPanel __this_00;
		GameManagers_ChatManager_StaticFields pGVar13;
		String[] method_00;

		if (Il2CppMethodInitialized_075457b9 == false) {
			Il2CppMethodInitialized_075457b9 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05929810;
	label_05929755: ;
			pGVar13 = typeof(ChatManager).static_fields;
			pSVar3 = pGVar13.RawMessages;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05929755;
	label_05929810: ;
			pGVar13 = typeof(ChatManager).static_fields;
			pSVar3 = pGVar13.RawMessages;
		}
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar3._size;
			pSVar3._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar3._items, 0, iVar2);
				pGVar13 = typeof(ChatManager).static_fields;
			}
			pSVar4 = pGVar13.Colors;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pSVar4._size = 0;
				pSVar5 = pGVar13.SystemFlags;
				if (pSVar5 != null) {
					piVar1 = &pSVar5._version;
					*piVar1 = *piVar1 + 1;
					pSVar5._size = 0;
					pSVar6 = pGVar13.Timestamps;
					if (pSVar6 != null) {
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar6._size = 0;
						pSVar7 = pGVar13.SenderIDs;
						if (pSVar7 != null) {
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pSVar7._size = 0;
							pSVar5 = pGVar13.SuggestionFlags;
							if (pSVar5 != null) {
								piVar1 = &pSVar5._version;
								*piVar1 = *piVar1 + 1;
								pSVar5._size = 0;
								pSVar5 = pGVar13.NotificationFlags;
								if (pSVar5 != null) {
									piVar1 = &pSVar5._version;
									*piVar1 = *piVar1 + 1;
									pSVar5._size = 0;
									pSVar5 = pGVar13.PrivateFlags;
									if (pSVar5 != null) {
										piVar1 = &pSVar5._version;
										*piVar1 = *piVar1 + 1;
										pSVar5._size = 0;
										pSVar7 = pGVar13.PMPartnerIDs;
										if (pSVar7 != null) {
											piVar1 = &pSVar7._version;
											*piVar1 = *piVar1 + 1;
											pSVar7._size = 0;
											pSVar8 = pGVar13.PlayerLineData;
											if (pSVar8 != null) {
												piVar1 = &pSVar8._version;
												*piVar1 = *piVar1 + 1;
												iVar2 = pSVar8._size;
												pSVar8._size = 0;
												if (0 < iVar2) {
													Array.Clear((Array)pSVar8._items, 0, iVar2);
													pGVar13 = typeof(ChatManager).static_fields;
												}
												pSVar9 = pGVar13.DisplayLineCache;
												if (pSVar9 != null) {
													piVar1 = &pSVar9._version;
													*piVar1 = *piVar1 + 1;
													iVar2 = pSVar9._size;
													pSVar9._size = 0;
													if (0 < iVar2) {
														Array.Clear((Array)pSVar9._items, 0, iVar2);
														pGVar13 = typeof(ChatManager).static_fields;
													}
													pSVar10 = pGVar13.LineIDs;
													if (pSVar10 != null) {
														piVar1 = &pSVar10._version;
														*piVar1 = *piVar1 + 1;
														pSVar10._size = 0;
														pGVar13.LastException = (String)**(ulong*)(g_data_07556758 + 0xb8);
														method_00 = (String[])&pGVar13.LastException;
														pGVar13 = typeof(ChatManager).static_fields;
														pGVar13.LastExceptionCount = 0;
														pSVar3 = pGVar13.FeedLines;
														if (pSVar3 != null) {
															piVar1 = &pSVar3._version;
															*piVar1 = *piVar1 + 1;
															iVar2 = pSVar3._size;
															pSVar3._size = 0;
															if (0 < iVar2) {
																method_00 = pSVar3._items;
																Array.Clear((Array)method_00, 0, iVar2);
															}
															bVar12 = ChatManager.IsChatAvailable();
															if (bVar12) {
																__this = ChatManager.GetChatPanel();
																bVar12 = ((Object)__this != null);
																if (bVar12) {
																	if (__this == null) goto label_05929b03;
																	__this.Sync();
																}
																__this_00 = ChatManager.GetFeedPanel();
																bVar12 = ((Object)__this_00 != null);
																if (bVar12) {
																	if (__this_00 == null) goto label_05929b03;
																	__this_00.Sync();
																}
															}
															pSVar11 = ChatManager.ActivePMNotifications;
															if (pSVar11 != null) {
																pSVar11.Clear();
																pSVar11 = ChatManager.NotifiedPMs;
																if (pSVar11 != null) {
																	pSVar11.Clear();
																	return;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05929b03: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x582FD30", Offset = "0x582ED30", VA = "0x582FD30")]
	public static bool IsChatActive()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$IsChatActive): clean
		bool bVar1;
		ChatPanel __this;
		bool bVar2;

		__this = ChatManager.GetChatPanel();
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this.IsInputActive();
			if (!bVar1) {
				bVar1 = __this.IsInteractingWithChatUI();
				return bVar1;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x582FAB0", Offset = "0x582EAB0", VA = "0x582FAB0")]
	public static bool IsChatAvailable()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$IsChatAvailable): 2 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		bool bVar3;

		if (SceneLoader.SceneName == 2) {
			pUVar2 = UIManager.CurrentMenu;
			bVar3 = ((Object)pUVar2 != null);
			if (!bVar3) {
				return false;
			}
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = UIManager.CurrentMenu;
			}
			else {
				pUVar2 = UIManager.CurrentMenu;
			}
			if (pUVar2 != null) {
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if (bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) {
					return (pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu);
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x5829D50", Offset = "0x5828D50", VA = "0x5829D50")]
	public static void SendChatAll(string message, ChatTextColor color = ChatTextColor.Default)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SendChatAll): 2 lines keep C-only constructs
		PhotonView __this;
		String obj;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		long local_28;
		DateTime local_20;

		obj = ChatManager.GetColorString(message, color, false);
		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[2];
		if (parameters == null) {
	label_05929ee7: ;
			throw new NullReferenceException();
		}
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_05929eec;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)obj;
			local_20 = DateTime.UtcNow;
			local_28 = local_20.Ticks;
			pIVar1 = (object)local_28;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_05929eec: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar1;
				if (__this != null) {
					__this.RPC("ChatRPC", 0, parameters);
					return;
				}
				goto label_05929ee7;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x582FDE0", Offset = "0x582EDE0", VA = "0x582FDE0")]
	public static void SendPlayerChatAll(string message)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SendPlayerChatAll): 2 lines keep C-only constructs
		PhotonView __this;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		long iStack_30;
		DateTime SStack_28;

		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[2];
		if (parameters == null) {
	label_0592ff54: ;
			throw new NullReferenceException();
		}
		if (message != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_0592ff59;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)message;
			SStack_28 = DateTime.UtcNow;
			iStack_30 = SStack_28.Ticks;
			pIVar1 = (object)iStack_30;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_0592ff59: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar1;
				if (__this != null) {
					__this.RPC("PlayerChatRPC", 0, parameters);
					return;
				}
				goto label_0592ff54;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x582A2B0", Offset = "0x58292B0", VA = "0x582A2B0")]
	public static void SendChat(string message, Player player, ChatTextColor color = ChatTextColor.Default)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SendChat): 2 lines keep C-only constructs
		PhotonView __this;
		String obj;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		long local_30;
		DateTime local_28;

		obj = ChatManager.GetColorString(message, color, false);
		__this = RPCManager.PhotonView;
		parameters = (Object[])new object[2];
		if (parameters == null) {
	label_0592a452: ;
			throw new NullReferenceException();
		}
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_0592a457;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)obj;
			local_28 = DateTime.UtcNow;
			local_30 = local_28.Ticks;
			pIVar1 = (object)local_30;
			if (pIVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_0592a457: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar1;
				if (__this != null) {
					__this.RPC("ChatRPC", player, parameters);
					return;
				}
				goto label_0592a452;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x582FF70", Offset = "0x582EF70", VA = "0x582FF70")]
	public static void OnChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$OnChatRPC): 3 lines keep C-only constructs
		HashSet<int> __this;
		bool bVar1;
		object arg0;
		object arg0_00;
		String pSVar2;
		String* method_00;
		Nullable<DateTime> timestamp;
		int local_48;
		int local_44;
		DateTime local_40;
		Nullable<DateTime> local_38;

		local_40._dateData = (DateTime)0;
		if ((info.Sender == null) ||(__this = InGameManager.MuteText, __this == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this.Contains(((info.Sender).fields).actorNumber);
		if (!bVar1) {
			local_44 = ((info.Sender).fields).actorNumber;
			arg0 = (object)local_44;
			local_48 = ((info.Sender).fields).actorNumber;
			arg0_00 = (object)local_48;
			method_00 = &"[{0}]";
			pSVar2 = String.Format("[{0}]", arg0_00);
			pSVar2 = ChatManager.GetColorString(pSVar2, 1, false);
			pSVar2 = String.Format("<link=\"{0}\">{1}</link>", arg0, (object)pSVar2);
			pSVar2 = String.Concat(pSVar2, " ", message);
			local_40 = new DateTime(senderTimestamp, 1);
			local_38._0_8_ = 0;
			local_38.value._dateData = (DateTime)0;
			local_38 = new Nullable<DateTime>(local_40);
			timestamp._0_8_ = local_38._0_8_ & 0xffffffff;
			timestamp.value._dateData = local_38.value._dateData;
			ChatManager.AddLine(pSVar2, 0, false, timestamp, ((info.Sender).fields).actorNumber, false, false, -1, false);
		}
		return;
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x5830190", Offset = "0x582F190", VA = "0x5830190")]
	public static void OnPlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$OnPlayerChatRPC): clean
		HashSet<int> __this;
		DateTime timestamp;
		bool bVar1;
		DateTime SStack_28;

		SStack_28._dateData = (DateTime)0;
		if ((info.Sender == null) ||(__this = InGameManager.MuteText, __this == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this.Contains(((info.Sender).fields).actorNumber);
		if (!bVar1) {
			SStack_28 = new DateTime(senderTimestamp, 1);
			timestamp._dateData = SStack_28._dateData;
			ChatManager.AddPlayerLine(info.Sender, message, 0, timestamp, false, -1);
		}
		return;
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x5830670", Offset = "0x582F670", VA = "0x5830670")]
	public static void OnAnnounceRPC(string message)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$OnAnnounceRPC): 1 lines keep C-only constructs


		ChatManager.AddLine(message, 3, true, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x5829040", Offset = "0x5828040", VA = "0x5829040")]
	public static void AddLine(string message, [Optional][DefaultParameterValue(0)] ChatTextColor color, [Optional][DefaultParameterValue(false)] bool isSystem, [Optional] DateTime? timestamp, int senderID = -1, bool isSuggestion = false, bool isPM = false, int pmPartnerID = -1, bool isNotification = false)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$AddLine): 1 lines keep C-only constructs
		String pSVar1;
		DateTime messageTime;

		messageTime = timestamp.value._dateData;
		pSVar1 = ChatFilter.FilterSizeTag(message);
		pSVar1 = MiscExtensions.ReplaceNamedColorTags(pSVar1);
		pSVar1 = ChatManager.GetColorString(pSVar1, color, false);
		if (timestamp.hasValue == false) {
			messageTime = DateTime.UtcNow;
		}
		ChatManager.AddLineInternal(pSVar1, color, isSystem, messageTime, senderID, isSuggestion, isPM, pmPartnerID, isNotification, (ChatManager.ChatPlayerLineData)ZEXT824(0));
		return;
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x58302C0", Offset = "0x582F2C0", VA = "0x58302C0")]
	private static void AddPlayerLine(Player sender, string message, ChatTextColor bodyColor, DateTime timestamp, bool isPM, int pmPartnerID)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$AddPlayerLine): 2 lines keep C-only constructs
		uint uVar1;
		int senderID;
		ChatManager.ChatPlayerLineData playerLineData;
		String pSVar2;
		String pSVar3;
		object arg0;
		object arg0_00;
		String pSVar4;
		String[] values;
		String* method_01;
		int local_60;
		int local_5c;
		ulong local_58;
		String pSStack_50;
		String[] local_48 = new String[2];
		DateTime local_38;

		if (sender == null) {
			return;
		}
		local_38 = (DateTime)(DateTime)timestamp._dateData;
		pSVar2 = PhotonExtensions.GetStringProperty(sender, PlayerProperty.Name, "");
		pSVar2 = ChatFilter.FilterSizeTag(pSVar2);
		if (message == null) {
			message = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = (typeof(ChatFilter)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatFilter)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = ChatFilter.FilterSizeTag(message);
		pSVar3 = MiscExtensions.ReplaceNamedColorTags(pSVar3);
		pSVar3 = ChatManager.GetColorString(pSVar3, bodyColor, false);
		local_5c = sender.actorNumber;
		arg0 = (object)local_5c;
		local_60 = sender.actorNumber;
		arg0_00 = (object)local_60;
		method_01 = &"[{0}]";
		pSVar4 = String.Format("[{0}]", arg0_00);
		pSVar4 = ChatManager.GetColorString(pSVar4, 1, false);
		pSVar4 = String.Format("<link=\"{0}\">{1}</link>", arg0, (object)pSVar4);
		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = pSVar4;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = " ";
				if (2 < (uint)values.Length) {
					values[2] = pSVar2;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = ": ";
						if (4 < (uint)values.Length) {
							values[4] = pSVar3;
							pSVar4 = String.Concat(values);
							senderID = sender.actorNumber;
							local_48[0] = null;
							local_58 = 1;
							pSStack_50 = pSVar2;
							local_48[0] = pSVar3;
							playerLineData.SenderName = pSStack_50;
							playerLineData._0_8_ = local_58;
							playerLineData.BodyText = local_48[0];
							ChatManager.AddLineInternal(pSVar4, 0, false, local_38, senderID, false, isPM, pmPartnerID, false, playerLineData);
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x58306E0", Offset = "0x582F6E0", VA = "0x58306E0")]
	private static void AddLineInternal(string formattedMessage, ChatTextColor color, bool isSystem, DateTime messageTime, int senderID, bool isSuggestion, bool isPM, int pmPartnerID, bool isNotification, ChatPlayerLineData playerLineData)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$AddLineInternal): 52 lines keep C-only constructs
		int piVar1;
		ChatManager.ChatPlayerLineData pGVar2;
		String* ppSVar3;
		uint uVar4;
		int iVar5;
		List<string> __this;
		String[] pSVar6;
		List<T> __this_00;
		Object[] pSVar7;
		List<bool> pSVar8;
		Boolean[] pSVar9;
		List<DateTime> __this_01;
		DateTime[] pSVar10;
		List<int> pSVar11;
		Int32[] pSVar12;
		List<ChatManager.ChatPlayerLineData> __this_02;
		ChatManager.ChatPlayerLineData[] pGVar13;
		List<ChatManager.ChatDisplayLine> __this_03;
		ChatManager.ChatDisplayLine[] pGVar14;
		Int64[] pSVar15;
		ChatManager.ChatDisplayLine pGVar16;
		bool bVar18;
		int iVar19;
		GameManagers_ChatManager_StaticFields pGVar20;
		ChatPanel __this_04;
		String line;
		MethodInfo pMVar21;
		MethodInfo method_00;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457c4 == false) {
			Il2CppMethodInitialized_075457c4 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05930747;
	label_05930802: ;
			__this = ChatManager.RawMessages;
			pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05930802;
	label_05930747: ;
			__this = ChatManager.RawMessages;
			pMVar21 = MethodInfo_System_Collections_Generic_List_string_Add;
		}
		MethodInfo_System_Collections_Generic_List_string_Add = pMVar21;
		if (__this == null) goto label_05930eab;
		piVar1 = &__this._version;
		*piVar1 = *piVar1 + 1;
		pSVar6 = __this._items;
		if (pSVar6 == null) goto label_05930eab;
		uVar4 = __this._size;
		if (uVar4 < (uint)pSVar6.Length) {
			__this._size = uVar4 + 1;
			pSVar6[(int)uVar4] = formattedMessage;
		}
		else {
			__this.AddWithResize((object)formattedMessage);
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_ChatTextColor_Add;
		pGVar20 = typeof(ChatManager).static_fields;
		__this_00 = (List<T>)pGVar20.Colors;
		if (__this_00 == null) goto label_05930eab;
		piVar1 = &__this_00._version;
		*piVar1 = *piVar1 + 1;
		pSVar7 = __this_00._items;
		if (pSVar7 == null) goto label_05930eab;
		uVar4 = __this_00._size;
		if (uVar4 < (uint)pSVar7.Length) {
			__this_00._size = uVar4 + 1;
			*(int)((long)pSVar7.m_Items + (long)(int)uVar4 * 4) = color;
		}
		else {
			__this_00.AddWithResize(color);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
		pSVar8 = pGVar20.SystemFlags;
		if (pSVar8 == null) goto label_05930eab;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		pSVar9 = pSVar8._items;
		if (pSVar9 == null) goto label_05930eab;
		uVar4 = pSVar8._size;
		if (uVar4 < (uint)pSVar9.Length) {
			pSVar8._size = uVar4 + 1;
			pSVar9[(int)uVar4] = isSystem;
		}
		else {
			pSVar8.AddWithResize(isSystem);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_DateTime_Add;
		__this_01 = pGVar20.Timestamps;
		if (__this_01 == null) goto label_05930eab;
		piVar1 = &__this_01._version;
		*piVar1 = *piVar1 + 1;
		pSVar10 = __this_01._items;
		if (pSVar10 == null) goto label_05930eab;
		uVar4 = __this_01._size;
		if (uVar4 < (uint)pSVar10.Length) {
			__this_01._size = uVar4 + 1;
			pSVar10[(int)uVar4]._dateData = (uint64_t)messageTime._dateData;
		}
		else {
			__this_01.AddWithResize(messageTime);
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_int_Add;
		pGVar20 = typeof(ChatManager).static_fields;
		pSVar11 = pGVar20.SenderIDs;
		if (pSVar11 == null) goto label_05930eab;
		piVar1 = &pSVar11._version;
		*piVar1 = *piVar1 + 1;
		pSVar12 = pSVar11._items;
		if (pSVar12 == null) goto label_05930eab;
		uVar4 = pSVar11._size;
		if (uVar4 < (uint)pSVar12.Length) {
			pSVar11._size = uVar4 + 1;
			pSVar12[(int)uVar4] = senderID;
		}
		else {
			pSVar11.AddWithResize(senderID);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
		pSVar8 = pGVar20.SuggestionFlags;
		if (pSVar8 == null) goto label_05930eab;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		pSVar9 = pSVar8._items;
		if (pSVar9 == null) goto label_05930eab;
		uVar4 = pSVar8._size;
		if (uVar4 < (uint)pSVar9.Length) {
			pSVar8._size = uVar4 + 1;
			pSVar9[(int)uVar4] = isSuggestion;
		}
		else {
			pSVar8.AddWithResize(isSuggestion);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
		pSVar8 = pGVar20.NotificationFlags;
		if (pSVar8 == null) goto label_05930eab;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		pSVar9 = pSVar8._items;
		if (pSVar9 == null) goto label_05930eab;
		uVar4 = pSVar8._size;
		if (uVar4 < (uint)pSVar9.Length) {
			pSVar8._size = uVar4 + 1;
			pSVar9[(int)uVar4] = isNotification;
		}
		else {
			pSVar8.AddWithResize(isNotification);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
		pSVar8 = pGVar20.PrivateFlags;
		if (pSVar8 == null) goto label_05930eab;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		pSVar9 = pSVar8._items;
		if (pSVar9 == null) goto label_05930eab;
		uVar4 = pSVar8._size;
		if (uVar4 < (uint)pSVar9.Length) {
			pSVar8._size = uVar4 + 1;
			pSVar9[(int)uVar4] = isPM;
		}
		else {
			pSVar8.AddWithResize(isPM);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_int_Add;
		pSVar11 = pGVar20.PMPartnerIDs;
		if (pSVar11 == null) goto label_05930eab;
		piVar1 = &pSVar11._version;
		*piVar1 = *piVar1 + 1;
		pSVar12 = pSVar11._items;
		if (pSVar12 == null) goto label_05930eab;
		uVar4 = pSVar11._size;
		if (uVar4 < (uint)pSVar12.Length) {
			pSVar11._size = uVar4 + 1;
			pSVar12[(int)uVar4] = pmPartnerID;
		}
		else {
			pSVar11.AddWithResize(pmPartnerID);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatPlayerLineData_Add;
		__this_02 = pGVar20.PlayerLineData;
		if (__this_02 == null) goto label_05930eab;
		piVar1 = &__this_02._version;
		*piVar1 = *piVar1 + 1;
		pGVar13 = __this_02._items;
		if (pGVar13 == null) goto label_05930eab;
		uVar4 = __this_02._size;
		if (uVar4 < (uint)pGVar13.Length) {
			__this_02._size = uVar4 + 1;
			pGVar13[(int)uVar4].BodyText = playerLineData.BodyText;
			pGVar2 = pGVar13.m_Items + (int)uVar4;
			pGVar2.Active = playerLineData.Active;
			*(undefined7)&pGVar2.field_0x1 = playerLineData._1_7_;
			pGVar2.SenderName = playerLineData.SenderName;
		}
		else {
			__this_02.AddWithResize(playerLineData);
		}
		pMVar21 = MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_Add;
		__this_03 = ChatManager.DisplayLineCache;
		if (__this_03 == null) goto label_05930eab;
		piVar1 = &__this_03._version;
		*piVar1 = *piVar1 + 1;
		pGVar14 = __this_03._items;
		if (pGVar14 == null) goto label_05930eab;
		uVar4 = __this_03._size;
		if (uVar4 < (uint)pGVar14.Length) {
			__this_03._size = uVar4 + 1;
			pGVar16 = &pGVar14[(int)uVar4];
			*(ulong)&pGVar16.SenderID = 0;
			pGVar16.LineID = 0;
			ppSVar3 = &pGVar14[(int)uVar4].SenderName;
			*ppSVar3 = null;
			ppSVar3[1] = null;
			ppSVar3 = &pGVar14[(int)uVar4].TimeText;
			*ppSVar3 = null;
			ppSVar3[1] = null;
			pGVar14[(int)uVar4].PlainText = null;
			*(ulong)&pGVar14[(int)uVar4].UsePlayerStyle = 0;
		}
		else {
			__this_03.AddWithResize((ChatManager.ChatDisplayLine)ZEXT864(0));
		}
		pGVar20 = typeof(ChatManager).static_fields;
		pMVar21 = (MethodInfo)pGVar20.LineIDs;
		method_00 = (MethodInfo)(pGVar20._nextLineID + 1);
		pGVar20._nextLineID = (int64_t)method_00;
		if (pMVar21 == null) goto label_05930eab;
		piVar1 = (int)((long)&pMVar21.name + 4);
		*piVar1 = *piVar1 + 1;
		pSVar15 = ((List<long>)&pMVar21.invoker_method)._items;
		if (pSVar15 == null) goto label_05930eab;
		uVar4 = *(uint)&pMVar21.name;
		if (uVar4 < (uint)pSVar15.Length) {
			*(uint)&pMVar21.name = uVar4 + 1;
			pSVar15[(int)uVar4] = (int64_t)method_00;
		}
		else {
			pMVar21.AddWithResize((int64_t)method_00);
			pGVar20 = typeof(ChatManager).static_fields;
		}
		if (pGVar20.RawMessages == null) goto label_05930eab;
		iVar5 = pGVar20.RawMessages._size;
		iVar19 = ChatManager.MaxLines;
		if (iVar19 < iVar5) {
			ChatManager.RemoveLineAt(0);
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05930d78;
	label_05930daa: ;
			bVar18 = ChatManager.IsChatAvailable();
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05930daa;
	label_05930d78: ;
			bVar18 = ChatManager.IsChatAvailable();
		}
		if (bVar18) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pGVar20 = typeof(ChatManager).static_fields;
				iVar5 = pGVar20._lineBatchDepth;
				uVar4 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				klass = typeof(ChatManager);
			}
			else {
				pGVar20 = (typeof(ChatManager)).static_fields;
				iVar5 = pGVar20._lineBatchDepth;
				uVar4 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
				klass = typeof(ChatManager);
			}
			typeof(ChatManager) = (ChatManager)klass;
			if (iVar5 < 1) {
				pMVar21 = (MethodInfo)(ulong)uVar4;
				if (uVar4 == 0) {
				}
				__this_04 = ChatManager.GetChatPanel();
				bVar18 = ((Object)__this_04 != null);
				if (bVar18) {
					line = ChatManager.GetFormattedMessage(formattedMessage, messageTime, isSuggestion);
					if (__this_04 != null) {
						__this_04.AddLine(line);
						return;
					}
	label_05930eab: ;
					throw new NullReferenceException();
				}
			}
			else {
				if (uVar4 == 0) {
					pGVar20 = typeof(ChatManager).static_fields;
				}
				pGVar20._pendingBatchSync = true;
			}
		}
		return;
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x58315E0", Offset = "0x58305E0", VA = "0x58315E0")]
	private static void BeginLineBatch()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$BeginLineBatch): 13 lines keep C-only constructs
		int piVar1;
		int piVar2;
		uint uVar3;
		int iVar4;
		GameManagers_ChatManager_StaticFields pGVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457c5 == false) {
			Il2CppMethodInitialized_075457c5 = true;
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			pGVar5 = typeof(ChatManager).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		else {
			pGVar5 = (typeof(ChatManager)).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (iVar4 == 0) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(ChatManager);
				ChatManager._pendingBatchSync = false;
				uVar3 = (((ChatManager)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5._pendingBatchSync = false;
				uVar3 = (klass._2).cctor_finished_or_no_cctor;
			}
		}
		else {
			uVar3 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			piVar2 = &ChatManager._lineBatchDepth;
			*piVar2 = *piVar2 + 1;
			return;
		}
		piVar1 = (int)((long)klass.static_fields + 0x84);
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x58316C0", Offset = "0x58306C0", VA = "0x58316C0")]
	private static void EndLineBatch()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$EndLineBatch): clean
		sbyte cVar1;
		uint uVar2;
		GameManagers_ChatManager_StaticFields pGVar3;
		bool bVar4;
		ChatPanel __this;
		int iVar5;
		Il2CppClass pIVar6;

		if (Il2CppMethodInitialized_075457c6 == false) {
			Il2CppMethodInitialized_075457c6 = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar3 = typeof(ChatManager).static_fields;
			iVar5 = pGVar3._lineBatchDepth;
			pIVar6 = typeof(ChatManager);
		}
		else {
			pGVar3 = (typeof(ChatManager)).static_fields;
			iVar5 = pGVar3._lineBatchDepth;
			pIVar6 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar6;
		if (0 < iVar5) {
			if ((pIVar6._2).cctor_finished_or_no_cctor == 0) {
				pIVar6 = typeof(ChatManager);
				pGVar3 = typeof(ChatManager).static_fields;
				iVar5 = pGVar3._lineBatchDepth + -1;
				pGVar3._lineBatchDepth = iVar5;
			}
			else {
				iVar5 = iVar5 + -1;
				pGVar3._lineBatchDepth = iVar5;
			}
			if (iVar5 == 0) {
				if ((pIVar6._2).cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(ChatManager).static_fields;
					cVar1 = pGVar3._pendingBatchSync;
					pIVar6 = typeof(ChatManager);
				}
				else {
					cVar1 = pGVar3._pendingBatchSync;
				}
				if (cVar1 != false) {
					if ((pIVar6._2).cctor_finished_or_no_cctor == 0) {
						ChatManager._pendingBatchSync = false;
						bVar4 = ChatManager.IsChatAvailable();
						pIVar6 = typeof(ChatManager);
					}
					else {
						pGVar3._pendingBatchSync = false;
						bVar4 = ChatManager.IsChatAvailable();
						pIVar6 = typeof(ChatManager);
					}
					typeof(ChatManager) = (ChatManager)pIVar6;
					if (bVar4) {
						__this = ChatManager.GetChatPanel();
						bVar4 = ((Object)__this != null);
						if (bVar4) {
							if (__this == null) {
								throw new NullReferenceException();
							}
							__this.Sync();
							return;
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x5830EB0", Offset = "0x582FEB0", VA = "0x5830EB0")]
	private static void RemoveLineAt(int index)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RemoveLineAt): 1 lines keep C-only constructs
		List<string> __this;
		List<T> __this_00;
		List<DateTime> __this_01;
		List<bool> pSVar1;
		List<int> pSVar2;
		List<ChatManager.ChatPlayerLineData> __this_02;
		List<ChatManager.ChatDisplayLine> __this_03;
		List<long> __this_04;

		if (Il2CppMethodInitialized_075457c7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_DateTime_get_Count) ;
			Il2CppMethodInitialized_075457c7 = true;
		}
		if (index < 0) {
			return;
		}
		__this = ChatManager.RawMessages;
		if (__this != null) {
			if (__this._size <= index) {
				return;
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				__this = ChatManager.RawMessages;
				if (__this == null) goto label_05931485;
			}
			__this.RemoveAt(index);
			__this_00 = (List<T>)ChatManager.Colors;
			if (__this_00 != null) {
				if (index < __this_00._size) {
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
						__this_00 = (List<T>)ChatManager.Colors;
						if (__this_00 == null) goto label_05931485;
					}
					__this_00.RemoveAt(index);
				}
				pSVar1 = ChatManager.SystemFlags;
				if (pSVar1 != null) {
					if (index < pSVar1._size) {
						if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							pSVar1 = ChatManager.SystemFlags;
							if (pSVar1 == null) goto label_05931485;
						}
						pSVar1.RemoveAt(index);
					}
					__this_01 = ChatManager.Timestamps;
					if (__this_01 != null) {
						if (index < __this_01._size) {
							if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
								__this_01 = ChatManager.Timestamps;
								if (__this_01 == null) goto label_05931485;
							}
							__this_01.RemoveAt(index);
						}
						pSVar2 = ChatManager.SenderIDs;
						if (pSVar2 != null) {
							if (index < pSVar2._size) {
								if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
									pSVar2 = ChatManager.SenderIDs;
									if (pSVar2 == null) goto label_05931485;
								}
								pSVar2.RemoveAt(index);
							}
							pSVar1 = ChatManager.SuggestionFlags;
							if (pSVar1 != null) {
								if (index < pSVar1._size) {
									if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
										pSVar1 = ChatManager.SuggestionFlags;
										if (pSVar1 == null) goto label_05931485;
									}
									pSVar1.RemoveAt(index);
								}
								pSVar1 = ChatManager.NotificationFlags;
								if (pSVar1 != null) {
									if (index < pSVar1._size) {
										if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
											pSVar1 = ChatManager.NotificationFlags;
											if (pSVar1 == null) goto label_05931485;
										}
										pSVar1.RemoveAt(index);
									}
									pSVar1 = ChatManager.PrivateFlags;
									if (pSVar1 != null) {
										if (index < pSVar1._size) {
											if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
												pSVar1 = ChatManager.PrivateFlags;
												if (pSVar1 == null) goto label_05931485;
											}
											pSVar1.RemoveAt(index) ;
										}
										pSVar2 = ChatManager.PMPartnerIDs;
										if (pSVar2 != null) {
											if (index < pSVar2._size) {
												if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
													pSVar2 = ChatManager.PMPartnerIDs;
													if (pSVar2 == null) goto label_05931485;
												}
												pSVar2.RemoveAt(index);
											}
											__this_02 = ChatManager.PlayerLineData;
											if (__this_02 != null) {
												if (index < __this_02._size) {
													if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
														__this_02 = ChatManager.PlayerLineData;
														if (__this_02 ==null) goto label_05931485;
													}
													__this_02.RemoveAt(index);
												}
												__this_03 = ChatManager.DisplayLineCache;
												if (__this_03 != null) {
													if (index < __this_03._size) {
														if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
															__this_03 = ChatManager.DisplayLineCache;
															if (__this_03 ==null) goto label_05931485;
														}
														__this_03.RemoveAt(index);
													}
													__this_04 = ChatManager.LineIDs;
													if (__this_04 != null) {
														if (__this_04._size <= index) {
															return;
														}
														if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
															__this_04 = ChatManager.LineIDs;
															if (__this_04 == null) goto label_05931485;
														}
														__this_04.RemoveAt(index);
														return;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05931485: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x5831850", Offset = "0x5830850", VA = "0x5831850")]
	public static void AddException(string line)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$AddException): 3 lines keep C-only constructs
		int piVar1;
		bool bVar2;
		List<string> __this;
		String pSVar3;
		StringBuilder pSVar4;
		GameManagers_ChatManager_StaticFields pGVar5;

		if (Il2CppMethodInitialized_075457c8 == false) {
			Il2CppMethodInitialized_075457c8 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_059318c6;
	label_05931873: ;
			__this = ChatManager.RawMessages;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05931873;
	label_059318c6: ;
			__this = ChatManager.RawMessages;
		}
		if (__this == null) {
	label_05931af3: ;
			throw new NullReferenceException();
		}
		if (0 < __this._size) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				__this = ChatManager.RawMessages;
				if (__this == null) goto label_05931af3;
			}
			pSVar3 = __this.get_Item(__this._size + -1);
			if (pSVar3 == null) goto label_05931af3;
			bVar2 = pSVar3.Contains(ChatManager.LastException);
			if (bVar2) {
				bVar2 = (ChatManager.LastException == line);
				if (bVar2) {
					pGVar5 = typeof(ChatManager).static_fields;
					piVar1 = &pGVar5.LastExceptionCount;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pGVar5.MessageBuilder;
					if (pSVar4 != null) {
						pSVar4.Clear();
						pSVar4 = ChatManager.MessageBuilder;
						if (((pSVar4 != null) &&(pSVar4 = pSVar4.Append(line), pSVar4 != null)) &&(pSVar4 = pSVar4.Append(0x28), pSVar4 != null)) {
							pGVar5 = typeof(ChatManager).static_fields;
							pSVar4 = pSVar4.Append(pGVar5.LastExceptionCount);
							if (pSVar4 != null) {
								pSVar4.Append(0x29);
								pSVar4 = ChatManager.MessageBuilder;
								if (pSVar4 != null) {
									pSVar3 = pSVar4.ToString();
									pSVar3 = ChatManager.GetColorString(pSVar3, 4, false);
									ChatManager.ReplaceLastLine(pSVar3, 4, true);
									return;
								}
							}
						}
					}
					goto label_05931af3;
				}
			}
		}
		pGVar5 = typeof(ChatManager).static_fields;
		pGVar5.LastException = line;
		ChatManager.LastExceptionCount = 0;
		ChatManager.AddLine(line, 4, true, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x5831B00", Offset = "0x5830B00", VA = "0x5831B00")]
	private static void ReplaceLastLine(string message, ChatTextColor color, bool isSystem)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ReplaceLastLine): 9 lines keep C-only constructs
		List<string> pSVar1;
		List<T> __this;
		List<bool> pSVar2;
		List<DateTime> __this_00;
		List<int> pSVar3;
		bool bVar4;
		DateTime value;
		String pSVar5;
		List<ChatManager.ChatPlayerLineData> __this_01;
		List<ChatManager.ChatDisplayLine> __this_02;
		ChatPanel __this_03;
		MethodInfo* method_00;
		int iVar6;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457c9 == false) {
			Il2CppMethodInitialized_075457c9 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05931b3a;
	label_05931c19: ;
			pSVar1 = ChatManager.RawMessages;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05931c19;
	label_05931b3a: ;
			pSVar1 = ChatManager.RawMessages;
		}
		if (pSVar1 != null) {
			if (pSVar1._size < 1) {
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				ChatManager.AddLine(message, color, isSystem, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
				return;
			}
			if (((typeof(DateTime))._2).cctor_finished_or_no_cctor == 0) {
			}
			value = DateTime.UtcNow;
			pSVar1 = ChatManager.RawMessages;
			if (pSVar1 != null) {
				iVar6 = pSVar1._size;
				pSVar5 = ChatFilter.FilterSizeTag(message);
				pSVar5 = ChatFilter.FilterBadWords(pSVar5);
				pSVar1 = ChatManager.RawMessages;
				if (pSVar1 != null) {
					iVar6 = iVar6 + -1;
					pSVar1.set_Item(iVar6, (object)pSVar5);
					__this = (List<T>)ChatManager.Colors;
					if (__this != null) {
						__this.set_Item(iVar6, color);
						pSVar2 = ChatManager.SystemFlags;
						if (pSVar2 != null) {
							pSVar2.set_Item(iVar6, isSystem);
							__this_00 = ChatManager.Timestamps;
							if (__this_00 != null) {
								__this_00.set_Item(iVar6, value);
								pSVar3 = ChatManager.SenderIDs;
								if (pSVar3 != null) {
									pSVar3.set_Item(iVar6, -1);
									pSVar2 = ChatManager.SuggestionFlags;
									if (pSVar2 != null) {
										pSVar2.set_Item(iVar6, false);
										pSVar2 = ChatManager.NotificationFlags;
										if (pSVar2 != null) {
											pSVar2.set_Item(iVar6, false) ;
											pSVar2 = ChatManager.PrivateFlags;
											if (pSVar2 != null) {
												pSVar2.set_Item(iVar6, false);
												pSVar3 = ChatManager.PMPartnerIDs;
												if (pSVar3 != null) {
													pSVar3.set_Item(iVar6, -1);
													__this_01 = ChatManager.PlayerLineData;
													if (__this_01 !=null) {
														if (iVar6 < __this_01._size) {
															if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
																__this_01 = ChatManager.PlayerLineData;
																if (__this_01 ==null) goto label_059320a4;
															}
															__this_01.set_Item(iVar6, (ChatManager.ChatPlayerLineData)ZEXT824(0));
														}
														__this_02 = ChatManager.DisplayLineCache;
														if (__this_02 !=null) {
															if (iVar6 < __this_02._size) {
																if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
																	__this_02 = ChatManager.DisplayLineCache ;
																	if (__this_02 ==null) goto label_059320a4;
																}
																method_00 = & MethodInfo_System_Collections_Generic_List_ChatManager_ChatDisplayLine_set_Item ;
																__this_02.set_Item(iVar6, (ChatManager.ChatDisplayLine)ZEXT864(0));
															}
															if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
																bVar4 = ChatManager.IsChatAvailable();
																klass = typeof(ChatManager);
															}
															else {
																bVar4 = ChatManager.IsChatAvailable();
																klass = typeof(ChatManager);
															}
															typeof(ChatManager) = (ChatManager)klass;
															if (bVar4) {
																__this_03 = ChatManager.GetChatPanel();
																bVar4 = ((Object)__this_03 != null);
																if (bVar4) {
																	pSVar5 = ChatManager.GetFormattedMessage(pSVar5, value, false);
																	if (__this_03 != null) {
																		__this_03.ReplaceLastLine(pSVar5);
																		return;
																	}
																	goto label_059320a4;
																}
															}
															return;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_059320a4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x5831490", Offset = "0x5830490", VA = "0x5831490")]
	public static string GetFormattedMessage(string message, DateTime timestamp, bool isSuggestion = false)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetFormattedMessage): clean
		UISettings pSVar1;
		BoolSetting pSVar2;
		String pSVar3;
		StringBuilder pSVar4;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ShowChatTimestamp, pSVar2 != null)) {
			if ((pSVar2._value == false) || (isSuggestion)) {
				return message;
			}
			pSVar4 = ChatManager.MessageBuilder;
			if (pSVar4 != null) {
				pSVar4.Clear();
				pSVar4 = ChatManager.MessageBuilder;
				pSVar3 = ChatManager.GetTimestampPrefix(timestamp, false);
				if (pSVar4 != null) {
					pSVar4 = pSVar4.Append(pSVar3);
					if (pSVar4 != null) {
						pSVar4.Append(message);
						pSVar4 = ChatManager.MessageBuilder;
						if (pSVar4 != null) {
							pSVar3 = pSVar4.ToString();
							return pSVar3;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x58322F0", Offset = "0x58312F0", VA = "0x58322F0")]
	public static ChatDisplayLine GetDisplayLine(int index)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetDisplayLine): 48 lines keep C-only constructs
		bool bVar1;
		List<string> pSVar2;
		UISettings pSVar3;
		BoolSetting pSVar4;
		List<ChatManager.ChatDisplayLine> pSVar5;
		ChatManager.ChatDisplayLine value;
		Il2CppClass klass;
		ChatManager.ChatDisplayLine local_d8;
		ChatManager.ChatDisplayLine local_98;

		local_d8.SenderID = 0;
		local_d8._52_4_ = 0;
		local_d8.LineID = 0;
		local_d8.SenderName = null;
		local_d8.BodyText = null;
		local_d8.TimeText = null;
		local_d8.IdText = null;
		local_d8.PlainText = null;
		local_d8.UsePlayerStyle = false;
		local_d8._9_7_ = 0;
		if (index < 0) {
	label_05932423: ;
			local_98 = ChatManager.ChatDisplayLine.Plain((String)**(ulong*)(g_data_07556758 + 0xb8), 0);
			local_d8.PlainText._0_4_ = local_98.PlainText._0_4_;
			local_d8.PlainText._4_4_ = local_98.PlainText._4_4_;
			local_d8._8_4_ = local_98._8_4_;
			local_d8._12_4_ = local_98._12_4_;
			local_d8.TimeText._0_4_ = local_98.TimeText._0_4_;
			local_d8.TimeText._4_4_ = local_98.TimeText._4_4_;
			local_d8.IdText._0_4_ = local_98.IdText._0_4_;
			local_d8.IdText._4_4_ = local_98.IdText._4_4_;
			local_d8.SenderName._0_4_ = local_98.SenderName._0_4_;
			local_d8.SenderName._4_4_ = local_98.SenderName._4_4_;
			local_d8.BodyText._0_4_ = local_98.BodyText._0_4_;
			local_d8.BodyText._4_4_ = local_98.BodyText._4_4_;
			local_d8.SenderID = local_98.SenderID;
			local_d8._52_4_ = local_98._52_4_;
			local_d8.LineID._0_4_ = (undefined4)local_98.LineID;
			local_d8.LineID._4_4_ = local_98.LineID._4_4_;
			goto label_0593246c;
		}
		pSVar2 = ChatManager.RawMessages;
		if (pSVar2 == null) goto label_0593261a;
		if (pSVar2._size <= index) goto label_05932423;
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.ShowChatTimestamp, pSVar4 == null)) goto label_0593261a;
		bVar1 = pSVar4._value;
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			if (ChatManager._displayLineCacheShowsTimestamps == bVar1) goto label_059323fa;
	label_059324a8: ;
			ChatManager.InvalidateDisplayLines();
			klass = typeof(ChatManager);
			ChatManager._displayLineCacheShowsTimestamps = bVar1;
			if ((((ChatManager)klass)._2).cctor_finished_or_no_cctor != 0) goto label_05932407;
	label_059324d9: ;
			pSVar5 = ChatManager.DisplayLineCache;
		}
		else {
			if (ChatManager._displayLineCacheShowsTimestamps != bVar1) goto label_059324a8;
	label_059323fa: ;
			klass = typeof(ChatManager);
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_059324d9;
	label_05932407: ;
			pSVar5 = ((ChatManager)klass).static_fields.DisplayLineCache;
		}
		if (pSVar5 != null) {
			local_98 = pSVar5.get_Item(index);
			if ((String)CONCAT44(local_98.PlainText._4_4_, local_98.PlainText._0_4_) !=null) {
				__return_storage_ptr__.PlainText =(String)CONCAT44(local_98.PlainText._4_4_, local_98.PlainText._0_4_);
				*(ulong)&__return_storage_ptr__.UsePlayerStyle = CONCAT44(local_98._12_4_, local_98._8_4_);
				__return_storage_ptr__.TimeText =(String)CONCAT44(local_98.TimeText._4_4_, local_98.TimeText._0_4_);
				__return_storage_ptr__.IdText =(String)CONCAT44(local_98.IdText._4_4_, local_98.IdText._0_4_);
				__return_storage_ptr__.SenderName =(String)CONCAT44(local_98.SenderName._4_4_, local_98.SenderName._0_4_);
				__return_storage_ptr__.BodyText =(String)CONCAT44(local_98.BodyText._4_4_, local_98.BodyText._0_4_);
				*(ulong)&__return_storage_ptr__.SenderID = CONCAT44(local_98._52_4_, local_98.SenderID);
				__return_storage_ptr__.LineID = CONCAT44(local_98.LineID._4_4_, (undefined4)local_98.LineID);
				return __return_storage_ptr__;
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			local_d8 = ChatManager.BuildDisplayLine(index);
			pSVar5 = ChatManager.DisplayLineCache;
			if (pSVar5 != null) {
				value.UsePlayerStyle = local_d8.UsePlayerStyle;
				value._9_7_ = local_d8._9_7_;
				value.PlainText = local_d8.PlainText;
				value.TimeText = local_d8.TimeText;
				value.IdText = local_d8.IdText;
				value.SenderName = local_d8.SenderName;
				value.BodyText = local_d8.BodyText;
				value.SenderID = local_d8.SenderID;
				value._52_4_ = local_d8._52_4_;
				value.LineID = local_d8.LineID;
				pSVar5.set_Item(index, value);
	label_0593246c: ;
				__return_storage_ptr__.SenderID = local_d8.SenderID;
				*(uint)&__return_storage_ptr__.field_0x34 = local_d8._52_4_;
				*(uint)&__return_storage_ptr__.LineID = (undefined4)local_d8.LineID;
				*(uint)((long)&__return_storage_ptr__.LineID + 4) = local_d8.LineID._4_4_;
				*(uint)&__return_storage_ptr__.SenderName = local_d8.SenderName._0_4_;
				*(uint)((long)&__return_storage_ptr__.SenderName + 4) = local_d8.SenderName._4_4_;
				*(uint)&__return_storage_ptr__.BodyText = local_d8.BodyText._0_4_;
				*(uint)((long)&__return_storage_ptr__.BodyText + 4) = local_d8.BodyText._4_4_;
				*(uint)&__return_storage_ptr__.TimeText = local_d8.TimeText._0_4_;
				*(uint)((long)&__return_storage_ptr__.TimeText + 4) = local_d8.TimeText._4_4_;
				*(uint)&__return_storage_ptr__.IdText = local_d8.IdText._0_4_;
				*(uint)((long)&__return_storage_ptr__.IdText + 4) = local_d8.IdText._4_4_;
				*(uint)&__return_storage_ptr__.PlainText = local_d8.PlainText._0_4_;
				*(uint)((long)&__return_storage_ptr__.PlainText + 4) = local_d8.PlainText._4_4_ ;
				__return_storage_ptr__.UsePlayerStyle = local_d8.UsePlayerStyle;
				*(int3)&__return_storage_ptr__.field_0x9 = local_d8._9_3_;
				*(uint)&__return_storage_ptr__.field_0xc = local_d8._12_4_;
				return __return_storage_ptr__;
			}
		}
	label_0593261a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x5832620", Offset = "0x5831620", VA = "0x5832620")]
	private static void InvalidateDisplayLines()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$InvalidateDisplayLines): 1 lines keep C-only constructs
		int index;
		List<ChatManager.ChatDisplayLine> __this;

		index = 0;
		while(true) {
			__this = ChatManager.DisplayLineCache;
			if (__this == null) break;
			if (__this._size <= index) {
				return;
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				__this = ChatManager.DisplayLineCache;
				if (__this == null) break;
			}
			__this.set_Item(index, (ChatManager.ChatDisplayLine)ZEXT864(0));
			index = index + 1;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x5832760", Offset = "0x5831760", VA = "0x5832760")]
	private static ChatDisplayLine BuildDisplayLine(int index)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$BuildDisplayLine): 9 lines keep C-only constructs
		List<string> __this;
		List<DateTime> pSVar1;
		List<bool> pSVar2;
		List<long> __this_00;
		bool bVar3;
		String pSVar4;
		DateTime SVar5;
		long lineID;
		object arg0;
		String* method_00;
		List<ChatManager.ChatPlayerLineData> pSVar6;
		List<int> __this_01;
		int local_cc;
		String local_c8;
		ulong uStack_c0;
		String local_b8;
		String pSStack_b0;
		String local_a8;
		String pSStack_a0;
		ulong local_98;
		String local_80;
		String local_78;
		byte[] local_70 = new byte[16];
		String local_60;
		String pSStack_58;
		String local_50;
		String pSStack_48;
		int local_40;
		uint uStack_3c;
		long iStack_38;

		local_98 = 0;
		local_a8 = null;
		pSStack_a0 = null;
		local_b8 = null;
		pSStack_b0 = null;
		local_c8 = null;
		uStack_c0 = 0;
		__this = ChatManager.RawMessages;
		if (__this != null) {
			pSVar4 = __this.get_Item(index);
			pSVar1 = ChatManager.Timestamps;
			if (pSVar1 != null) {
				SVar5 = pSVar1.get_Item(index);
				pSVar2 = ChatManager.SuggestionFlags;
				if (pSVar2 != null) {
					bVar3 = pSVar2.get_Item(index);
					pSVar4 = ChatManager.GetFormattedMessage(pSVar4, SVar5, bVar3);
					__this_00 = ChatManager.LineIDs;
					if (__this_00 != null) {
						lineID = __this_00.get_Item(index);
						pSVar6 = ChatManager.PlayerLineData;
						if (pSVar6 != null) {
							if (index < pSVar6._size) {
								if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
									pSVar6 = ChatManager.PlayerLineData;
									if (pSVar6 == null) goto label_05932c28;
								}
								local_70.get_Item(pSVar6, index);
								if (((byte)local_70[0] & 1) != 0) {
									pSVar6 = ChatManager.PlayerLineData;
									if (pSVar6 != null) {
										local_70.get_Item(pSVar6, index);
										__this_01 = ChatManager.SenderIDs;
										if (__this_01 != null) {
											local_80 = (String)local_70._8_8_;
											local_78 = local_60;
											local_cc = -1;
											if (index < __this_01._size) {
												if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
													__this_01 = ChatManager.SenderIDs;
													if (__this_01 == null) goto label_05932c28;
												}
												local_cc = __this_01.get_Item(index);
											}
											pSStack_a0 = null;
											local_98 = 0;
											pSStack_b0 = null;
											local_a8 = null;
											uStack_c0 = 0;
											local_b8 = null;
											local_c8 = pSVar4;
											uStack_c0 = CONCAT71(uStack_c0._1_7_, 1);
											pSVar1 = ChatManager.Timestamps;
											if (pSVar1 != null) {
												SVar5 = pSVar1.get_Item(index);
												pSVar2 = ChatManager.SuggestionFlags;
												if (pSVar2 != null) {
													bVar3 = pSVar2.get_Item(index);
													local_b8 = ChatManager.GetTimestampPrefix(SVar5, bVar3);
													local_70._0_4_ = local_cc;
													arg0 = (object)local_70;
													method_00 = &"[{0}] ";
													pSVar4 = String.Format("[{0}] ", arg0);
													pSStack_b0 = ChatManager.GetColorString(pSVar4, 1, false);
													local_a8 = local_80;
													if (local_80 == null) {
														local_a8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
													}
													pSVar4 = local_78;
													if (local_78 == null) {
														pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
													}
													pSStack_a0 = String.Concat(": ", pSVar4);
													__return_storage_ptr__.SenderName = local_a8;
													__return_storage_ptr__.BodyText = pSStack_a0;
													__return_storage_ptr__.TimeText = local_b8;
													__return_storage_ptr__.IdText = pSStack_b0;
													__return_storage_ptr__.PlainText = local_c8;
													*(ulong)&__return_storage_ptr__.UsePlayerStyle = uStack_c0;
													__return_storage_ptr__.SenderID = local_cc;
													*(uint)&__return_storage_ptr__.field_0x34 = local_98._4_4_;
													__return_storage_ptr__.LineID = lineID;
													return __return_storage_ptr__;
												}
											}
										}
									}
									goto label_05932c28;
								}
							}
							ChatManager.ChatDisplayLine.Plain((ChatManager.ChatDisplayLine)local_70, pSVar4, lineID) ;
							__return_storage_ptr__.SenderID = local_40;
							*(uint)&__return_storage_ptr__.field_0x34 = uStack_3c;
							__return_storage_ptr__.LineID = iStack_38;
							__return_storage_ptr__.SenderName = local_50;
							__return_storage_ptr__.BodyText = pSStack_48;
							__return_storage_ptr__.TimeText = local_60;
							__return_storage_ptr__.IdText = pSStack_58;
							__return_storage_ptr__.PlainText =(String)CONCAT44(local_70._4_4_, local_70._0_4_);
							*(ulong)&__return_storage_ptr__.UsePlayerStyle = local_70._8_8_;
							return __return_storage_ptr__;
						}
					}
				}
			}
		}
	label_05932c28: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x58320B0", Offset = "0x58310B0", VA = "0x58320B0")]
	private static string GetTimestampPrefix(DateTime timestamp, bool isSuggestion)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetTimestampPrefix): 1 lines keep C-only constructs
		UISettings pSVar1;
		BoolSetting pSVar2;
		StringBuilder pSVar3;
		String pSVar4;
		String* method_00;
		int local_2c;
		DateTime local_28;
		DateTime local_20;

		local_20 = (DateTime)(DateTime)timestamp._dateData;
		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ShowChatTimestamp, pSVar2 != null)) {
			if ((pSVar2._value == false) || (isSuggestion)) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pSVar3 = ChatManager.TimeBuilder;
			if (pSVar3 != null) {
				pSVar3.Clear();
				local_28 = local_20.ToLocalTime();
				pSVar3 = ChatManager.TimeBuilder;
				if (pSVar3 != null) {
					pSVar3 = pSVar3.Append(0x5b);
					local_2c = local_28.Hour;
					pSVar4 = local_2c.ToString("D2");
					if ((pSVar3 != null) &&(pSVar3 = pSVar3.Append(pSVar4), pSVar3 != null)) {
						pSVar3 = pSVar3.Append(0x3a);
						local_2c = local_28.Minute;
						pSVar4 = local_2c.ToString("D2");
						if ((pSVar3 != null) &&(pSVar3 = pSVar3.Append(pSVar4), pSVar3 != null)) {
							method_00 = &"] ";
							pSVar3.Append("] ");
							pSVar3 = ChatManager.TimeBuilder;
							if (pSVar3 != null) {
								pSVar4 = pSVar3.ToString();
								pSVar4 = ChatManager.GetColorString(pSVar4, 3, false);
								return pSVar4;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x5832C30", Offset = "0x5831C30", VA = "0x5832C30")]
	public static void AddFeed(string line)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$AddFeed): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		String[] pSVar4;
		List<string> pSVar5;
		bool bVar7;
		int iVar8;
		FeedPanel __this;
		String pSVar9;
		Il2CppClass klass;
		MethodInfo method_01;

		if (Il2CppMethodInitialized_075457cf == false) {
			Il2CppMethodInitialized_075457cf = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_05932d50;
	label_05932c5e: ;
			bVar7 = ChatManager.IsChatAvailable();
			klass = typeof(ChatManager);
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_05932c5e;
	label_05932d50: ;
			bVar7 = ChatManager.IsChatAvailable();
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (bVar7) {
			__this = ChatManager.GetFeedPanel();
			bVar7 = ((Object)__this == null);
			if (!bVar7) {
				pSVar9 = ChatFilter.FilterSizeTag(line);
				pSVar9 = ChatFilter.FilterBadWords(pSVar9);
				method_01 = (MethodInfo)ChatManager.FeedLines;
				if (method_01 != null) {
					piVar1 = (int)((long)&method_01.name + 4);
					*piVar1 = *piVar1 + 1;
					pSVar4 = ((List<string>)&method_01.invoker_method)._items;
					if (pSVar4 != null) {
						uVar2 = *(uint)&method_01.name;
						if (uVar2 < (uint)pSVar4.Length) {
							*(uint)&method_01.name = uVar2 + 1;
							method_01 = (MethodInfo)(pSVar4.m_Items + (int)uVar2);
							pSVar4[(int)uVar2] = pSVar9;
						}
						else {
							method_01.AddWithResize((object)pSVar9);
						}
						pSVar5 = ChatManager.FeedLines;
						if (pSVar5 != null) {
							iVar3 = pSVar5._size;
							iVar8 = ChatManager.MaxLines;
							if (iVar8 < iVar3) {
								pSVar5 = ChatManager.FeedLines;
								if (pSVar5 == null) goto label_05932e8b;
								pSVar5.RemoveAt(0);
							}
							if (__this != null) {
								__this.AddLine(pSVar9);
								return;
							}
						}
					}
				}
	label_05932e8b: ;
				throw new NullReferenceException();
			}
			ChatManager.AddLine(line, 0, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		return;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x5832E90", Offset = "0x5831E90", VA = "0x5832E90")]
	public static void IsTalking(Player player, bool isSpeaking)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$IsTalking): clean
		uint uVar1;
		bool bVar2;
		VoiceChatPanel __this;
		Il2CppClass pIVar3;

		if (Il2CppMethodInitialized_075457d0 == false) {
			Il2CppMethodInitialized_075457d0 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (uVar1 == 0) {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		else {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (bVar2) {
			__this = ChatManager.GetVoiceChatPanel();
			bVar2 = ((Object)__this == null);
			if (!bVar2) {
				if (isSpeaking) {
					if (__this != null) {
						__this.AddPlayer(player);
						return;
					}
				}
				else if (__this != null) {
					__this.RemovePlayer(player);
					return;
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x5833040", Offset = "0x5832040", VA = "0x5833040")]
	public static void ClearTalking(int actorNumber)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearTalking): clean
		uint uVar1;
		bool bVar2;
		VoiceChatPanel __this;
		Il2CppClass pIVar3;

		if (Il2CppMethodInitialized_075457d1 == false) {
			Il2CppMethodInitialized_075457d1 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (uVar1 == 0) {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		else {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (bVar2) {
			__this = ChatManager.GetVoiceChatPanel();
			bVar2 = ((Object)__this != null);
			if (bVar2) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.ClearPlayer(actorNumber);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x582F710", Offset = "0x582E710", VA = "0x582F710")]
	public static void LoadTheme()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$LoadTheme): 17 lines keep C-only constructs
		Dictionary<ChatTextColor, string> pSVar1;
		uint key;
		bool bVar2;
		List<T> __this;
		String pSVar3;
		object arg0;
		object arg1;
		object arg2;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar4;
		int iStack_a4;
		int iStack_a0;
		int iStack_9c;
		byte[] auStack_98 = new byte[16];
		object pIStack_88;
		byte[] auStack_80 = new byte[8];
		IntPtr pvStack_78;
		uint uStack_70;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];

		ChatManager.InvalidateDisplayLines();
		pSVar1 = ChatManager.ColorTags;
		if (pSVar1 != null) {
			pSVar1.Clear();
			__this = Util.EnumToList<ChatTextColor>();
			if (__this != null) {
				auStack_80.GetEnumerator(__this) ;
				pIStack_88 = (object)(ulong)uStack_70;
				auStack_98._0_8_ = auStack_80;
				auStack_98._8_8_ = pvStack_78;
				while(true) {
					bVar2 = auStack_98.MoveNext();
					if (!bVar2) {
						auStack_98.Dispose();
						return;
					}
					key = (uint)pIStack_88;
					auStack_80 = (byte[])typeof(ChatTextColor);
					pvStack_78 = (IntPtr)0xffffffffffffffff;
					uStack_70 = (uint)pIStack_88;
					pSVar3 = auStack_80.ToString();
					UVar4 = UIManager.GetThemeColor("ChatPanel", "TextColor", pSVar3, "DefaultPanel");
					auStack_58._8_4_ = extraout_XMM0_Dc;
					auStack_58._0_8_ = UVar4._0_8_;
					auStack_58._12_4_ = extraout_XMM0_Dd;
					auStack_48._8_4_ = in_XMM1_Dc;
					auStack_48._0_8_ = UVar4._8_8_;
					auStack_48._12_4_ = in_XMM1_Dd;
					pSVar1 = ChatManager.ColorTags;
					in_XMM1_Dc = 0;
					in_XMM1_Dd = 0;
					iStack_9c = (int)((float)auStack_58._0_4_ * 255.0);
					arg0 = (object)iStack_9c;
					iStack_a0 = (int)((float)auStack_58._4_4_ * 255.0);
					arg1 = (object)iStack_a0;
					iStack_a4 = (int)((float)auStack_48._0_4_ * 255.0);
					arg2 = (object)iStack_a4;
					pSVar3 = String.Format("{0:X2}{1:X2}{2:X2}", arg0, arg1, arg2);
					if (pSVar1 == null) break;
					pSVar1.Add(key, (object)pSVar3);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x5833120", Offset = "0x5832120", VA = "0x5833120")]
	public static void HandleInput(string input)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleInput): 1 lines keep C-only constructs
		CustomLogicEvaluator __this;
		bool bVar1;
		object obj;
		sbyte pcVar2;
		String pSVar3;
		String[] args;
		MethodInfo pMVar4;

		bVar1 = (input == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar1) {
			return;
		}
		__this = CustomLogicManager.Evaluator;
		if (__this != null) {
			obj = __this.OnChatInput(input);
			if (((obj != null) && (obj.klass == g_data_075566f0)) &&(pcVar2 = il2cpp_vm_Object_Unbox(obj), *pcVar2 == false)) {
				return;
			}
			if (input != null) {
				pMVar4 = (MethodInfo *)"/";
				bVar1 = input.StartsWith("/");
				if (!bVar1) {
					pSVar3 = ChatManager.ProcessMentions(input);
					ChatManager.SendPlayerChatAll(pSVar3);
					return;
				}
				if (input._stringLength != 1) {
					pSVar3 = input.Substring(1);
					args = ChatManager.ParseCommandArgs(pSVar3);
					if (args == null) goto label_05933297;
					if (args.Length != 0) {
						ChatManager.HandleCommand(args);
						return;
					}
				}
				return;
			}
		}
	label_05933297: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x58337A0", Offset = "0x58327A0", VA = "0x58337A0")]
	private static string ProcessMentions(string message)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ProcessMentions): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		int startIndex;
		int iVar3;
		ChatManager.c__DisplayClass122_0 __this;
		String pSVar4;
		Player[] source;
		Func<Player, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o __this_01;
		Player player;
		StringBuilder pSVar5;
		String __this_02;
		String* method_00;

		if (message != null) {
			startIndex = message.IndexOf(0x40);
			if (startIndex == -1) {
				return message;
			}
			pSVar5 = ChatManager.MentionBuilder;
			if (pSVar5 != null) {
				pSVar5.Clear();
				pSVar5 = ChatManager.MentionBuilder;
				if (pSVar5 != null) {
					pSVar5.Append(message);
					do {
						__this = new ChatManager.c__DisplayClass122_0();
						pSVar5 = ChatManager.MentionBuilder;
						if ((pSVar5 == null) ||(pSVar4 = pSVar5.ToString(), pSVar4 == null)) goto label_05933d19;
						iVar3 = pSVar4.IndexOf(0x20, startIndex);
						if (iVar3 == -1) {
							pSVar5 = ChatManager.MentionBuilder;
							if (pSVar5 == null) goto label_05933d19;
							iVar3 = pSVar5.Length;
							if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_059339e3;
	label_0593397c: ;
							pSVar5 = ChatManager.MentionBuilder;
						}
						else {
							if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_0593397c;
	label_059339e3: ;
							pSVar5 = ChatManager.MentionBuilder;
						}
						if (pSVar5 == null) goto label_05933d19;
						pSVar4 = pSVar5.ToString(startIndex + 1, (iVar3 - startIndex) + -1);
						if (__this == null) goto label_05933d19;
						__this.mention = pSVar4;
						bVar2 = String.IsNullOrWhiteSpace(__this.mention);
						if (bVar2) {
							uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05933cb2: ;
							if (uVar1 == 0) {
							}
							pSVar5 = ChatManager.MentionBuilder;
							if ((pSVar5 == null) ||(pSVar4 = pSVar5.ToString(), pSVar4 == null)) goto label_05933d19;
							startIndex = pSVar4.IndexOf(0x40, startIndex + 1);
						}
						else {
							source = PhotonNetwork.PlayerList;
							__this_00 = new Func<Player, bool>((object)__this, (intptr_t)MethodInfo_GameManagers_ChatManager_c__DisplayClass122_0_ProcessMentions_b__0);
							source_00 = Enumerable.Where<Player>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
							__this_01 = Enumerable.ToList<Player>(source_00);
							if (__this_01 == null) goto label_05933d19;
							if (__this_01._size != 1) {
								uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
								goto joined_r0x05933cb2;
							}
							player = __this_01.get_Item(0);
							pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
							pSVar4 = ChatFilter.FilterSizeTag(pSVar4);
							method_00 = &"@";
							pSVar4 = String.Concat("@", pSVar4);
							pSVar4 = ChatManager.GetColorString(pSVar4, 2, false);
							pSVar5 = ChatManager.MentionBuilder;
							if ((pSVar5 == null) ||(pSVar5 = pSVar5.Remove(startIndex, iVar3 - startIndex), pSVar5 == null)) goto label_05933d19;
							pSVar5.Insert(startIndex, pSVar4);
							pSVar5 = ChatManager.MentionBuilder;
							if ((pSVar5 == null) ||((__this_02 = pSVar5.ToString(), pSVar4 == null || (__this_02 == null)))) goto label_05933d19;
							startIndex = __this_02.IndexOf(0x40, startIndex + pSVar4._stringLength);
						}
					} while (startIndex != -1);
					pSVar5 = ChatManager.MentionBuilder;
					if (pSVar5 != null) {
						pSVar4 = pSVar5.ToString();
						return pSVar4;
					}
				}
			}
		}
	label_05933d19: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x5833D20", Offset = "0x5832D20", VA = "0x5833D20")]
	private static string FormatChatMessage(string message)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$FormatChatMessage): clean
		return message;
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x5833D30", Offset = "0x5832D30", VA = "0x5833D30")]
	public static void UpdateChatPanel()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$UpdateChatPanel): clean
		uint uVar1;
		bool bVar2;
		ChatPanel __this;
		Il2CppClass pIVar3;

		if (Il2CppMethodInitialized_075457d5 == false) {
			Il2CppMethodInitialized_075457d5 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (uVar1 == 0) {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		else {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (bVar2) {
			__this = ChatManager.GetChatPanel();
			bVar2 = ((Object)__this != null);
			if (bVar2) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.RefreshPoolSize();
				__this.ValidatePMState();
				__this.RestorePMPartners();
				__this.RefreshDisplayedMessages();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x58332A0", Offset = "0x58322A0", VA = "0x58332A0")]
	private static void HandleCommand(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleCommand): 18 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		MethodBase __this_00;
		CustomLogicEvaluator __this_01;
		UserMethod userMethod;
		MethodInfo pMVar3;
		bool bVar4;
		String pSVar5;
		Object[] pSVar6;
		object pIVar7;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Il2CppClass pIVar8;
		Object[] parameterValues;
		CustomLogicListBuiltin __this_02;
		ChatManager obj;
		object pIStack_38;

		pIStack_38 = null;
		if (args == null) goto label_05933778;
		if ((int)args.Length == 0) goto label_0593377d;
		if (args[0] == null) goto label_05933778;
		__this = (Dictionary<object, object>)ChatManager.CommandsCache;
		pSVar5 = (args[0]).ToLower();
		if (__this == null) goto label_05933778;
		bVar4 = __this.TryGetValue((object)pSVar5, ref pIStack_38);
		pIVar7 = pIStack_38;
		pMVar3 = MethodInfo_System_Array_Empty_string;
		if (!bVar4) {
			if ((int)args.Length != 0) {
				pSVar5 = String.Concat("Command ", args[0], " not found, try /help to see a list of commands.");
				ChatManager.AddLine(pSVar5, 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
				return;
			}
			goto label_0593377d;
		}
		if (pIStack_38 == null) goto label_05933778;
		bVar1 = (typeof(ChatManager.CLCommandAttribute)._2).typeHierarchyDepth;
		if (((pIStack_38.klass._2).typeHierarchyDepth < bVar1) ||((pIStack_38.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(ChatManager.CLCommandAttribute))) {
			__this_00 = pIStack_38[2].monitor;
			if (__this_00 == null) goto label_05933778;
			bVar4 = __this_00.IsStatic;
			if (!bVar4) {
				obj = ChatManager._instance;
				pSVar6 = (Object[])new object[1];
				if (pSVar6 != null) {
					pIVar7 = il2cpp_vm_Object_IsInst(&args.obj, (((pSVar6.obj).klass)._1).element_class);
					if (pIVar7 == null) goto label_05933782;
					if ((int)pSVar6.Length != 0) {
						pSVar6[0] = &args.obj;
						goto label_05933566;
					}
					goto label_0593377d;
				}
				goto label_05933778;
			}
			pSVar6 = (Object[])new object[1];
			if (pSVar6 == null) goto label_05933778;
			pIVar7 = il2cpp_vm_Object_IsInst(&args.obj, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar7 != null) {
				if ((int)pSVar6.Length != 0) {
					pSVar6[0] = &args.obj;
					obj = null;
	label_05933566: ;
					__this_00.Invoke((object)obj, pSVar6);
					return;
				}
				goto label_0593377d;
			}
			goto label_05933782;
		}
		if ((int)args.Length < 2) {
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar8 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar8._2).bitflags1 & 1) != 0) goto label_059335ee;
	label_05933744: ;
				pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				if ((pIVar8._2).cctor_finished_or_no_cctor != 0) goto label_059335fb;
	label_05933759: ;
				pIVar8 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar8._2).bitflags1;
			}
			else {
				pIVar8 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar8._2).bitflags1 & 1) == 0) goto label_05933744;
	label_059335ee: ;
				if ((pIVar8._2).cctor_finished_or_no_cctor == 0) goto label_05933759;
	label_059335fb: ;
				pIVar8 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar8._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			}
			pSVar6 = *(Object[]*)pIVar8.static_fields;
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			source = Enumerable.Skip<string>((System_Collections_Generic_IEnumerable_TSource__o)args, 1);
			pSVar6 = Enumerable.ToArray<string>(source);
			uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		__this_01 = CustomLogicManager.Evaluator;
		if (__this_01 == null) {
			return;
		}
		userMethod = pIVar7[4].monitor;
		parameterValues = (Object[])new object[2];
		if ((int)args.Length == 0) goto label_0593377d;
		if (parameterValues == null) {
	label_05933778: ;
			throw new NullReferenceException();
		}
		pSVar5 = args[0];
		if ((pSVar5 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar5, (((parameterValues.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05933782: ;
			pIVar7 = new ArrayTypeMismatchException();
			throw pIVar7;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)pSVar5;
			__this_02 = new CustomLogicListBuiltin(pSVar6);
			if ((__this_02 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)__this_02, (((parameterValues.obj).klass)._1).element_class), pIVar7 == null)) goto label_05933782;
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)__this_02;
				__this_01.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
	label_0593377d: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x582A570", Offset = "0x5829570", VA = "0x582A570")]
	public static void MutePlayer(Player player, string muteType)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$MutePlayer): 1 lines keep C-only constructs
		HashSet<int> __this;
		bool bVar1;
		Player pPVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075457d7 == false) {
			Il2CppMethodInitialized_075457d7 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0592a6ad;
	label_0592a5a2: ;
			pPVar2 = PhotonNetwork.LocalPlayer;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0592a5a2;
	label_0592a6ad: ;
			pPVar2 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar2 == player) {
			return;
		}
		bVar1 = (muteType == "Emote");
		if (bVar1) {
			if (player == null) goto label_0592a828;
			__this = InGameManager.MuteEmote;
		}
		else {
			bVar1 = (muteType == "Text");
			if (bVar1) {
				if (player == null) goto label_0592a828;
				__this = InGameManager.MuteText;
			}
			else {
				bVar1 = (muteType == "Voice");
				if (!bVar1) goto label_0592a780;
				if (player == null) goto label_0592a828;
				__this = InGameManager.MuteVoiceChat;
			}
		}
		if (__this != null) {
			__this.Add(player.actorNumber);
	label_0592a780: ;
			pSVar3 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
			pSVar3 = String.Concat(pSVar3, " has been muted (", muteType, ").");
			ChatManager.AddLine(pSVar3, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			return;
		}
	label_0592a828: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x582A930", Offset = "0x5829930", VA = "0x582A930")]
	public static void UnmutePlayer(Player player, string muteType)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$UnmutePlayer): 1 lines keep C-only constructs
		HashSet<int> pSVar1;
		bool bVar2;
		Player pPVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_075457d8 == false) {
			Il2CppMethodInitialized_075457d8 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0592aac2;
	label_0592a962: ;
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0592a962;
	label_0592aac2: ;
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar3 == player) {
			return;
		}
		bVar2 = (muteType == "Emote");
		if (bVar2) {
			if ((player == null) ||(pSVar1 = InGameManager.MuteEmote, pSVar1 == null)) goto label_0592acd0;
			bVar2 = pSVar1.Contains(player.actorNumber);
			if (!bVar2) goto label_0592aae0;
			pSVar1 = InGameManager.MuteEmote;
		}
		else {
	label_0592aae0: ;
			bVar2 = (muteType == "Text");
			if (bVar2) {
				if ((player == null) ||(pSVar1 = InGameManager.MuteText, pSVar1 == null)) goto label_0592acd0;
				bVar2 = pSVar1.Contains(player.actorNumber);
				if (bVar2) {
					pSVar1 = InGameManager.MuteText;
					goto joined_r0x0592ac11;
				}
			}
			bVar2 = (muteType == "Voice");
			if (!bVar2) goto label_0592ac28;
			if ((player == null) ||(pSVar1 = InGameManager.MuteVoiceChat, pSVar1 == null)) goto label_0592acd0;
			bVar2 = pSVar1.Contains(player.actorNumber);
			if (!bVar2) goto label_0592ac28;
			pSVar1 = InGameManager.MuteVoiceChat;
		}
	joined_r0x0592ac11: ;
		if (pSVar1 == null) {
	label_0592acd0: ;
			throw new NullReferenceException();
		}
		pSVar1.Remove(player.actorNumber);
	label_0592ac28: ;
		pSVar4 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
		pSVar4 = String.Concat(pSVar4, " has been unmuted (", muteType, ").");
		ChatManager.AddLine(pSVar4, 3, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return;
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x5833E00", Offset = "0x5832E00", VA = "0x5833E00")]
	public static void SetPlayerVolume(Player player, float volume)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SetPlayerVolume): clean
		Dictionary<int, float> pSVar1;
		bool bVar2;
		Player pPVar3;
		float fVar4;

		if (Il2CppMethodInitialized_075457d9 == false) {
			Il2CppMethodInitialized_075457d9 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05933e29;
	label_05933e90: ;
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05933e90;
	label_05933e29: ;
			pPVar3 = PhotonNetwork.LocalPlayer;
		}
		if (pPVar3 == player) {
			return;
		}
		if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		if ((player != null) &&(pSVar1 = InGameManager.VoiceChatVolumeMultiplier, pSVar1 != null)) {
			bVar2 = pSVar1.ContainsKey(player.actorNumber);
			if (bVar2) {
				pSVar1 = InGameManager.VoiceChatVolumeMultiplier;
				if (pSVar1 == null) goto label_05933f7d;
				fVar4 = pSVar1.get_Item(player.actorNumber);
				if ((fVar4 == volume) && (!NAN(fVar4) && !NAN(volume))) {
					return;
				}
			}
			pSVar1 = InGameManager.VoiceChatVolumeMultiplier;
			if (pSVar1 != null) {
				pSVar1.set_Item(player.actorNumber, volume);
				return;
			}
		}
	label_05933f7d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x5833F90", Offset = "0x5832F90", VA = "0x5833F90")]
	private static Player GetPlayer(string stringID)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetPlayer): 1 lines keep C-only constructs
		bool bVar1;
		Room pPVar2;
		Player pPVar3;
		int iStack_14;

		bVar1 = Int32.TryParse(stringID, ref iStack_14);
		if (!bVar1) {
	label_05934071: ;
			ChatManager.AddLine("Invalid player ID.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			return null;
		}
		pPVar2 = PhotonNetwork.CurrentRoom;
		if (pPVar2 != null) {
			pPVar3 = pPVar2.GetPlayer(-1, true);
			if (pPVar3 == null) goto label_05934071;
			pPVar2 = PhotonNetwork.CurrentRoom;
			if (pPVar2 != null) {
				pPVar3 = pPVar2.GetPlayer(-1, true);
				return pPVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x582A190", Offset = "0x5829190", VA = "0x582A190")]
	public static Player GetPlayer(string[] args)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetPlayer): 1 lines keep C-only constructs
		bool bVar1;
		Room pPVar2;
		Player pPVar3;
		int local_c;

		local_c = 0;
		if (args == null) {
	label_0592a2a0: ;
			throw new NullReferenceException();
		}
		if (1 < (int)args.Length) {
			bVar1 = Int32.TryParse(args[1], ref local_c);
			if (bVar1) {
				pPVar2 = PhotonNetwork.CurrentRoom;
				if (pPVar2 == null) goto label_0592a2a0;
				pPVar3 = pPVar2.GetPlayer(local_c, true);
				if (pPVar3 != null) {
					return pPVar3;
				}
			}
		}
		ChatManager.AddLine("Invalid player ID.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		return null;
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x5829CA0", Offset = "0x5828CA0", VA = "0x5829CA0")]
	private static bool CheckMC()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$CheckMC): 1 lines keep C-only constructs
		bool bVar1;

		bVar1 = PhotonNetwork.IsMasterClient;
		if (!bVar1) {
			ChatManager.AddLine("Must be master client to use that command.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
		}
		return bVar1;
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x582C040", Offset = "0x582B040", VA = "0x582C040")]
	private static ChatPanel GetChatPanel()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetChatPanel): 5 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu pUVar3;
		bool bVar4;
		ChatManager klass;

		if (Il2CppMethodInitialized_075457dd == false) {
			Il2CppMethodInitialized_075457dd = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = klass;
		if (uVar2 == 0) {
			bVar4 = ChatManager.IsChatAvailable();
		}
		else {
			bVar4 = ChatManager.IsChatAvailable();
		}
		if (bVar4) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar3 = UIManager.CurrentMenu;
			bVar4 = ((Object)pUVar3 == null);
			if (bVar4) {
				return null;
			}
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = UIManager.CurrentMenu;
			}
			else {
				pUVar3 = UIManager.CurrentMenu;
			}
			if (pUVar3 != null) {
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
					return (ChatPanel)(*(ulong)((sbyte)pUVar3 + 0xd0));
				}
			}
		}
		return null;
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x582FBD0", Offset = "0x582EBD0", VA = "0x582FBD0")]
	private static FeedPanel GetFeedPanel()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetFeedPanel): 5 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu pUVar3;
		bool bVar4;
		ChatManager klass;

		if (Il2CppMethodInitialized_075457de == false) {
			Il2CppMethodInitialized_075457de = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = klass;
		if (uVar2 == 0) {
			bVar4 = ChatManager.IsChatAvailable();
		}
		else {
			bVar4 = ChatManager.IsChatAvailable();
		}
		if (bVar4) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar3 = UIManager.CurrentMenu;
			bVar4 = ((Object)pUVar3 == null);
			if (bVar4) {
				return null;
			}
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = UIManager.CurrentMenu;
			}
			else {
				pUVar3 = UIManager.CurrentMenu;
			}
			if (pUVar3 != null) {
				bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
				if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
					return (FeedPanel)(*(ulong)((sbyte)pUVar3 + 0xd8));
				}
			}
		}
		return null;
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x5832F80", Offset = "0x5831F80", VA = "0x5832F80")]
	private static VoiceChatPanel GetVoiceChatPanel()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetVoiceChatPanel): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu pUVar3;

		if (Il2CppMethodInitialized_075457df == false) {
			Il2CppMethodInitialized_075457df = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pUVar3 = UIManager.CurrentMenu;
		}
		else {
			pUVar3 = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (pUVar3 == null) {
			throw new NullReferenceException();
		}
		bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
		if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		return (VoiceChatPanel)(*(ulong)((sbyte)pUVar3 + 0xe0));
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x58340D0", Offset = "0x58330D0", VA = "0x58340D0")]
	public static string GetIDString(int id, bool includeMC = false, bool myPlayer = false)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetIDString): clean
		String pSVar1;
		int local_1c;

		local_1c = id;
		pSVar1 = local_1c.ToString();
		pSVar1 = String.Concat("[", pSVar1, "] ") ;
		if (includeMC) {
			pSVar1 = String.Concat("[M]", pSVar1);
		}
		pSVar1 = ChatManager.GetColorString(pSVar1, myPlayer + 1, false);
		return pSVar1;
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x582B740", Offset = "0x582A740", VA = "0x582B740")]
	public static string GetColorString(string str, ChatTextColor color, bool bold = false)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetColorString): clean
		Dictionary<ChatTextColor, string> __this;
		String[] values;
		String pSVar1;

		if (color == 0) {
			return str;
		}
		if (bold) {
			str = String.Concat("_b_", str, "</b>");
		}
		values = (String[])new string[5];
		if (values == null) {
	label_0592b90a: ;
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = "<color=#";
			__this = ChatManager.ColorTags;
			if (__this == null) goto label_0592b90a;
			pSVar1 = __this.get_Item(color);
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = pSVar1;
				if (2 < (uint)values.Length) {
					values[2] = ">";
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = str;
						if (4 < (uint)values.Length) {
							values[4] = "</color>";
							pSVar1 = String.Concat(values);
							return pSVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x58341A0", Offset = "0x58331A0", VA = "0x58341A0")]
	private void Update()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$Update): 4 lines keep C-only constructs
		uint uVar1;
		InputSettings pSVar2;
		GeneralInputSettings pSVar3;
		KeybindSetting __this_00;
		bool bVar4;
		ChatPanel __this_01;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457e2 == false) {
			Il2CppMethodInitialized_075457e2 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (uVar1 == 0) {
			bVar4 = ChatManager.IsChatAvailable();
		}
		else {
			bVar4 = ChatManager.IsChatAvailable();
		}
		if ((!bVar4) || (bVar4 = InGameMenu.InMenu())) {
			return;
		}
		__this_01 = ChatManager.GetChatPanel();
		pSVar2 = SettingsManager.InputSettings;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(__this_00 = pSVar3.Chat, __this_00 != null)) {
			bVar4 = __this_00.GetKeyDown(false);
			if (!bVar4) {
				return;
			}
			if (__this_01 != null) {
				if (__this_01.IgnoreNextActivation == false) {
					__this_01.Activate();
					return;
				}
				__this_01.IgnoreNextActivation = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x58342A0", Offset = "0x58332A0", VA = "0x58342A0")]
	public static void HandleTyping(string input)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleTyping): 12 lines keep C-only constructs
		long lVar1;
		int piVar2;
		uint uVar3;
		int iVar4;
		GameManagers_ChatManager_StaticFields pGVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457e3 == false) {
			Il2CppMethodInitialized_075457e3 = true;
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if (Il2CppMethodInitialized_075457c5 == false) {
			Il2CppMethodInitialized_075457c5 = true;
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = *(uint)((long)typeof(ChatManager) + 0xe4);
		}
		if (uVar3 == 0) {
			pGVar5 = typeof(ChatManager).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		else {
			pGVar5 = (typeof(ChatManager)).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (iVar4 == 0) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(ChatManager);
				ChatManager._pendingBatchSync = false;
				uVar3 = (((ChatManager)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5._pendingBatchSync = false;
				uVar3 = (klass._2).cctor_finished_or_no_cctor;
			}
		}
		else {
			uVar3 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			piVar2 = &ChatManager._lineBatchDepth;
			*piVar2 = *piVar2 + 1;
			if (uVar3 == 0) {
			}
		}
		else {
			lVar1 = (long)klass.static_fields + 0x84;
			*(int)lVar1 = *(int)lVar1 + 1;
		}
		ChatManager.HandleTypingInternal(input);
		ChatManager.EndLineBatch();
		return;
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x5834480", Offset = "0x5833480", VA = "0x5834480")]
	private static void HandleTypingInternal(string input)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleTypingInternal): 95 lines keep C-only constructs
		byte bVar1;
		byte uVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<object, object> pSVar5;
		Player pPVar6;
		bool bVar7;
		bool bVar8;
		sbyte cVar9;
		int iVar10;
		int iVar11;
		String pSVar12;
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar13;
		Func<char, bool> pSVar14;
		Player[] pPVar15;
		String __this;
		String pSVar16;
		GameManagers_ChatManager___c_StaticFields pGVar17;
		Func<Player, string> pSVar18;
		System_Collections_Generic_IEnumerable_TResult__o pSVar19;
		List<string> pSVar20;
		Comparison<T> pSVar21;
		StringBuilder pSVar22;
		IntPtr pvVar23;
		List<Player> __this_00;
		MethodInfo pMVar24;
		Il2CppClass pIVar25;
		List<KeyValuePair<string, ChatManager.CommandAttribute>> pSVar26;
		ulong uVar27;
		int iVar28;
		object pIVar29;
		ChatManager pGVar30;
		uint local_11c;
		byte[] local_118 = new byte[16];
		String local_108;
		object pIStack_100;
		int local_f8;
		uint uStack_f4;
		List<KeyValuePair<string, ChatManager.CommandAttribute>> local_f0;
		byte[] local_e8 = new byte[8];
		Dictionary.Enumerator<object, object> pSStack_e0;
		String local_d8;
		int local_c4;
		String local_c0;
		byte[] local_b8 = new byte[8];
		Dictionary.Enumerator<object, object> pSStack_b0;
		String local_a8;
		byte[] local_98 = new byte[8];
		String local_88;
		object pIStack_80;
		object local_78;
		object local_70;
		object local_68;
		object local_60;
		byte[] local_58 = new byte[8];
		Dictionary.Enumerator<object, object> pSStack_50;
		String local_48;
		object pIStack_40;
		ulong local_38;

		local_e8 = (byte[])0x0;
		local_d8 = null;
		local_60 = null;
		local_68 = null;
		local_70 = null;
		local_78 = null;
		local_11c = 0;
		local_c4 = 0;
		local_b8 = (byte[])0x0;
		local_a8 = null;
		local_48 = null;
		pIStack_40 = null;
		local_58 = (byte[])0x0;
		local_38._0_4_ = 0;
		local_38._4_4_ = 0;
		local_88 = null;
		pIStack_80 = null;
		local_98 = (byte[])0x0;
		bVar7 = String.IsNullOrEmpty(ChatManager.SuggestionState.OriginalPartialText);
		if (bVar7) {
	label_05934fd2: ;
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
				iVar28 = ChatManager.SuggestionState.Type;
			}
			else {
				iVar28 = ChatManager.SuggestionState.Type;
			}
			if (iVar28 == 2) {
				if (input == null) {
					throw new NullReferenceException();
				}
				bVar7 = input.Contains("@");
				if ((bVar7) && (iVar10 = input.LastIndexOf(0x40), -1 < iVar10)) {
					pSVar12 = input.Substring(iVar10 + 1);
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					bVar7 = pSVar12.Contains(0x20);
					if ((bVar7) || (bVar7 = pSVar12.Contains(9))) {
						if (ChatManager.SuggestionState.IsProcessingClick != false) {
							return;
						}
						pGVar30 = typeof(ChatManager);
						ChatManager.ClearLastSuggestions();
						return;
					}
					bVar7 = String.IsNullOrEmpty(ChatManager.SuggestionState.PartialText);
					if (!bVar7) {
						iVar28 = pSVar12._stringLength;
						pSVar16 = ChatManager.SuggestionState.PartialText;
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						if (iVar28 < pSVar16._stringLength) {
							if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
								pSVar16 = ChatManager.SuggestionState.PartialText;
								if (pSVar16 == null) {
									throw new NullReferenceException();
								}
							}
							bVar7 = pSVar16.StartsWith(pSVar12, 5);
							if (bVar7) {
								ChatManager.SuggestionState.IsTabCompleting = false;
							}
						}
					}
				}
			}
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
				iVar28 = ChatManager.SuggestionState.Type;
			}
			else {
				iVar28 = ChatManager.SuggestionState.Type;
			}
			if (iVar28 == 1) {
				if (input == null) {
					throw new NullReferenceException();
				}
				bVar7 = input.StartsWith("/");
				if (bVar7) {
					iVar10 = input.IndexOf(0x20);
					if (iVar10 < 1) {
						pSVar12 = input.Substring(1);
						if (pSVar12 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar12.ToLower();
						bVar7 = String.IsNullOrEmpty(ChatManager.SuggestionState.PartialText);
						if (!bVar7) {
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
							iVar28 = pSVar12._stringLength;
							pSVar16 = ChatManager.SuggestionState.PartialText;
							if (pSVar16 == null) {
								throw new NullReferenceException();
							}
							if (iVar28 < pSVar16._stringLength) {
								if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
									pSVar16 = ChatManager.SuggestionState.PartialText;
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
								}
								bVar7 = pSVar16.StartsWith(pSVar12, 5);
								if (bVar7) {
									ChatManager.SuggestionState.IsTabCompleting = false;
								}
							}
						}
					}
					else {
						pSVar12 = input.Substring(1, iVar10 + -1);
						if (pSVar12 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar12.ToLower();
						pSVar5 = (Dictionary<object, object>)ChatManager.CommandsCache;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						bVar7 = pSVar5.TryGetValue((object)pSVar12, ref local_68);
						if (!bVar7) {
							if (ChatManager.SuggestionState.IsProcessingClick != false) {
								return;
							}
							pGVar30 = typeof(ChatManager);
							ChatManager.ClearLastSuggestions();
							return;
						}
						if (local_68 == null) {
							throw new NullReferenceException();
						}
						if (*(int)&local_68[4].klass == 0) {
							if (local_68[3].monitor == null) {
								throw new NullReferenceException();
							}
							if (*(long)((long)local_68[3].monitor + 0x18) == 0) {
								if (ChatManager.SuggestionState.IsProcessingClick != false ) {
									return;
								}
								pGVar30 = typeof(ChatManager);
								ChatManager.ClearLastSuggestions();
								return;
							}
						}
					}
				}
			}
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
				pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
				if (pGVar13.Type == 3) goto label_059353fe;
	label_059355de: ;
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
					cVar9 = pGVar13.IsTabCompleting;
				}
				else {
					pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
					cVar9 = pGVar13.IsTabCompleting;
				}
				if (cVar9 != false) {
					if (((typeof(ChatManager.SuggestionState))._2). cctor_finished_or_no_cctor == 0) {
						pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
					}
					goto label_05936b26;
				}
			}
			else {
				pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
				if (pGVar13.Type != 3) goto label_059355de;
	label_059353fe: ;
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					if (ChatManager.SuggestionState.IsTabCompleting != false) goto label_0593542b;
					goto label_059355de;
				}
				if (pGVar13.IsTabCompleting == false) goto label_059355de;
	label_0593542b: ;
				if (input == null) {
					throw new NullReferenceException();
				}
				bVar7 = input.StartsWith("/");
				if ((!bVar7) || (iVar10 = input.IndexOf(0x20), iVar10 == -1)) goto label_059355de;
				pSVar12 = input.Substring(1, iVar10 + -1);
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar12 = pSVar12.ToLower();
				pSVar5 = (Dictionary<object, object>)ChatManager.CommandsCache;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				bVar7 = pSVar5.TryGetValue((object)pSVar12, ref local_70);
				iVar28 = 1;
				if (bVar7) {
					if (local_70 == null) {
						throw new NullReferenceException();
					}
					iVar28 = *(int)&local_70[4].klass;
				}
				if ((iVar28 != 2) ||(iVar11 = input.LastIndexOf(0x20), iVar11 <= iVar10)) {
					iVar11 = iVar10;
				}
				pSVar12 = input.Substring(iVar11 + 1);
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				iVar28 = pSVar12._stringLength;
				pSVar16 = ChatManager.SuggestionState.PartialText;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				if ((pSVar16._stringLength <= iVar28) &&(bVar7 = pSVar12.EndsWith(" "), !bVar7)) {
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05936b15;
				}
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					if (ChatManager.SuggestionState.IsProcessingClick != false) goto label_059355a9;
	label_059359f7: ;
					pGVar30 = typeof(ChatManager);
					ChatManager.ClearLastSuggestions();
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (ChatManager.SuggestionState.IsProcessingClick == false) goto label_059359f7;
	label_059355a9: ;
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				ChatManager.SuggestionState.PartialText = "##FORCE_REFRESH##";
			}
			bVar7 = String.IsNullOrEmpty(input);
			if (((bVar7) || (bVar7 = (input == "@")) ) || (bVar7 = (input == "/"))) {
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					cVar9 = ChatManager.SuggestionState.IsProcessingClick;
					pIVar25 = typeof(ChatManager);
				}
				else {
					cVar9 = ChatManager.SuggestionState.IsProcessingClick;
					pIVar25 = typeof(ChatManager);
				}
				if (cVar9 != false) {
					typeof(ChatManager) = (ChatManager)pIVar25;
					return;
				}
				typeof(ChatManager) = (ChatManager)pIVar25;
				ChatManager.ClearLastSuggestions();
				return;
			}
			if (input == null) {
				throw new NullReferenceException();
			}
			bVar7 = input.StartsWith("/");
			if (bVar7) {
				iVar10 = input.IndexOf(0x20);
				if (iVar10 == -1) {
					pSVar12 = input.Substring(1);
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar12.ToLower();
					bVar7 = String.IsNullOrEmpty(pSVar12);
					if (bVar7) {
	label_05935a6f: ;
						if (ChatManager.SuggestionState.IsProcessingClick != false) {
							return;
						}
						pGVar30 = typeof(ChatManager);
						ChatManager.ClearLastSuggestions();
						return;
					}
					bVar7 = (pSVar12 != ChatManager.SuggestionState. PartialText);
					if (bVar7) {
						if (ChatManager.SuggestionState.IsProcessingClick == false) {
							pGVar30 = typeof(ChatManager);
							ChatManager.ClearLastSuggestions();
							ChatManager.SuggestionState.PartialText = pSVar12;
							pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
							pGVar13.CurrentIndex = -1;
							pGVar13.Type = 1;
							pSVar16 = String.Concat("/", pSVar12);
							ChatManager.SuggestionState.SetOriginalContext(pSVar16, 0, input._stringLength);
							local_f0 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<KeyValuePair<string, ChatManager.CommandAttribute>>));
							local_f0 = new List<Player>();
							pSVar5 = (Dictionary<object, object>)ChatManager.CommandsCache;
							if (pSVar5 == null) {
								throw new NullReferenceException();
							}
							local_118.GetEnumerator(pSVar5);
							local_38._0_4_ = local_f8;
							local_38._4_4_ = uStack_f4;
							local_48 = local_108;
							pIStack_40 = pIStack_100;
							local_58 = (byte[])local_118._0_8_;
							pSStack_50 = (Dictionary.Enumerator<object, object>)local_118._8_8_ ;
							local_118._0_8_ = null;
							local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_58;
							while (true) {
								bVar7 = local_58.MoveNext();
								pIVar29 = pIStack_40;
								pSVar16 = local_48;
								if (!(bVar7)) break;
								if (pIStack_40 == null) {
									throw new NullReferenceException();
								}
								if (*(sbyte)&pIStack_40[3].klass == false) {
									if (local_48 == null) {
										throw new NullReferenceException();
									}
									__this = local_48.ToLower();
									if (__this == null) {
										throw new NullReferenceException();
									}
									bVar7 = __this.StartsWith(pSVar12);
									if (bVar7) {
										if (local_f0 ==(System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o * )0x0) {
											throw new NullReferenceException();
										}
										il2cpp_runtime_helper_02fd2dc0(local_f0, pSVar16, pIVar29);
									}
								}
							}
							il2cpp_runtime_helper_02fd2e20(local_118);
							if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
								pGVar17 = typeof(ChatManager.c).static_fields;
								pSVar21 = (Comparison<T>)pGVar17.__9__139_2;
							}
							else {
								pGVar17 = typeof(ChatManager.c).static_fields;
								pSVar21 = (Comparison<T>)pGVar17.__9__139_2;
							}
							pSVar26 = local_f0;
							if (pSVar21 == null) {
								if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
									pGVar17 = typeof(ChatManager.c).static_fields;
								}
								pIVar29 = (object)pGVar17.__9;
								pSVar21 = (Comparison<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(Comparison<KeyValuePair<string, ChatManager.CommandAttribute>>));
								pSVar21 = new Comparison<Player>(pIVar29, (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_2);
								pGVar17 = typeof(ChatManager.c).static_fields;
								pGVar17.__9__139_2 =(Comparison<KeyValuePair<string, ChatManager.CommandAttribute>>)pSVar21;
								pSVar26 = local_f0;
							}
							local_f0 = pSVar26;
							if (pSVar26 ==null) {
								throw new NullReferenceException();
							}
							pSVar26.Sort(pSVar21);
							if (0 < pSVar26._size) {
								pSVar20 = new List<string>();
								local_118.GetEnumerator((List<T>)pSVar26);
								local_88 = local_108;
								pIStack_80 = pIStack_100;
								local_98 = (byte[])local_118._0_8_;
								local_118._0_8_ = null;
								local_118._8_8_ = local_98;
								while (true) {
									pMVar24 = MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_ChatManager_CommandAttribute_Move;
									bVar7 = local_98.MoveNext();
									pIVar29 = pIStack_80;
									pSVar12 = local_88;
									if (!(bVar7)) break;
									pSVar22 = ChatManager.MessageBuilder;
									if (pSVar22 == null) {
										throw new NullReferenceException();
									}
									pSVar22.Clear();
									pSVar22 = ChatManager.MessageBuilder;
									if (pSVar22 == null) {
										throw new NullReferenceException();
									}
									pSVar22 = pSVar22.Append(0x2f);
									if (pSVar22 == null) {
										throw new NullReferenceException();
									}
									pSVar22.Append(pSVar12);
									if (pIVar29 == null) {
										throw new NullReferenceException();
									}
									if (pIVar29[3].monitor == null) {
										throw new NullReferenceException();
									}
									if (*(long)((long)pIVar29[3].monitor + 0x18) != 0) {
										pSVar22 = ChatManager.MessageBuilder;
										if (pSVar22 == null) {
											throw new NullReferenceException();
										}
										pSVar22.Append(0x20);
										pvVar23 = pIVar29[3].monitor;
										if (pvVar23 == null) {
	label_059366d2: ;
											throw new NullReferenceException();
										}
										uVar27 = 0;
										while ((long)uVar27 < (long)*(int)((long)pvVar23 + 0x18)) {
											if (uVar27 != 0) {
												pSVar22 = ChatManager.MessageBuilder;
												if (pSVar22 == null) {
													throw new NullReferenceException();
												}
												pSVar22.Append(0x20);
											}
											pSVar22 = ChatManager.MessageBuilder;
											if (pSVar22 == null) {
												throw new NullReferenceException();
											}
											pSVar22 = pSVar22.Append(0x5b);
											pvVar23 = pIVar29[3].monitor;
											if (pvVar23 == null) {
												throw new NullReferenceException();
											}
											if (*(uint)((long)pvVar23 + 0x18) <= uVar27) {
												throw new IndexOutOfRangeException();
											}
											if (pSVar22 == null) {
												throw new NullReferenceException();
											}
											pSVar22 = pSVar22.Append(*(String*)((long)pvVar23 + uVar27 * 8 + 0x20));
											if (pSVar22 == null) {
												throw new NullReferenceException();
											}
											pSVar22.Append(0x5d);
											uVar27 = uVar27 + 1;
											pvVar23 = pIVar29[3].monitor;
											if (pvVar23 == null) goto label_059366d2;
										}
									}
									pSVar22 = ChatManager.MessageBuilder;
									if (pSVar22 == null) {
										throw new NullReferenceException();
									}
									pSVar12 = pSVar22.ToString();
									pIVar25 = pIVar29.klass;
									bVar1 = (typeof(ChatManager.CLCommandAttribute)._2).typeHierarchyDepth;
									if ((pIVar25._2).typeHierarchyDepth < bVar1) {
										pIVar29 = null;
									}
									else {
										pIVar25 = (Il2CppClass)(pIVar25._2).typeHierarchy;
										if (*(ChatManager.CLCommandAttribute*)((long)(pIVar25.vtable + -0x14) + (ulong)bVar1 * 8) != typeof(ChatManager.CLCommandAttribute)) {
											pIVar29 = null;
										}
									}
									iVar10 = 8;
									if (pIVar29 == null) {
										iVar10 = 2;
									}
									pSVar12 = ChatManager.GetColorString(pSVar12, iVar10, false) ;
									if (pSVar20 == null) {
										throw new NullReferenceException();
									}
									il2cpp_runtime_helper_02fa8fa0(pSVar20, pSVar12, MethodInfo_System_Collections_Generic_List_string_Add);
								}
								il2cpp_runtime_helper_02fd2e50(local_118);
								ChatManager.ShowCommandSuggestions(pSVar20);
								pSVar26 = local_f0;
								pSVar20 = ChatManager.SuggestionState.Suggestions;
								if (pSVar20 == null) {
									throw new NullReferenceException();
								}
								il2cpp_runtime_helper_02fd2ba0(pSVar20, MethodInfo_System_Collections_Generic_List_string_Clear);
								local_118.GetEnumerator((List<T>)pSVar26);
								local_88 = local_108;
								pIStack_80 = pIStack_100;
								local_98 = (byte[])local_118._0_8_;
								local_118._0_8_ = null;
								local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_98 ;
								while (true) {
									bVar7 = local_98.MoveNext();
									pSVar12 = local_88;
									if (!(bVar7)) break;
									pSVar20 = ChatManager.SuggestionState.Suggestions;
									if (pSVar20 == null) {
										throw new NullReferenceException();
									}
									il2cpp_runtime_helper_02fa8fa0(pSVar20, pSVar12, MethodInfo_System_Collections_Generic_List_string_Add);
								}
								il2cpp_runtime_helper_02fd2e80(local_118);
							}
						}
					}
				}
				else {
					pSVar12 = input.Substring(1, iVar10 + -1);
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar12.ToLower();
					bVar7 = String.IsNullOrEmpty(pSVar12);
					if (bVar7) goto label_05935a6f;
					pSVar5 = (Dictionary<object, object>)ChatManager.CommandsCache;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pMVar24 = MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue;
					bVar7 = pSVar5.TryGetValue((object)pSVar12, ref local_78);
					if (bVar7) {
						if (local_78 == null) {
							throw new NullReferenceException();
						}
						iVar28 = *(int)&local_78[4].klass;
						if (iVar28 - 1U < 2) {
							iVar10 = ChatManager.GetAutofillTokenStart(input, iVar10, iVar28);
							pSVar12 = input.Substring(iVar10 + 1);
							bVar7 = (pSVar12 != ChatManager.SuggestionState. PartialText);
							if (bVar7) {
								pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
								if (pGVar13.IsTabCompleting == false) {
									if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
										pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
									}
									if (pGVar13.IsProcessingClick == false) {
										pGVar30 = typeof(ChatManager);
										ChatManager.ClearLastSuggestions();
										ChatManager.SuggestionState.PartialText = pSVar12;
										pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
										pGVar13.CurrentIndex = -1;
										pGVar13.Type = 3;
										pGVar13.IsTabCompleting = false;
										ChatManager.SuggestionState.SetOriginalContext(pSVar12, iVar10 + 1, input._stringLength);
										local_f0 = new List<Player>();
										if (pSVar12 == null) {
											throw new NullReferenceException();
										}
										local_c0 = pSVar12.ToLower();
										pSVar14 = new Func<char, bool>(null, (intptr_t)MethodInfo_System_Char_IsDigit);
										bVar7 = Enumerable.All<char>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__bool__o)pSVar14);
										pPVar15 = PhotonNetwork.PlayerList;
										local_11c = 0;
										if (pPVar15 == null) {
											throw new NullReferenceException();
										}
										uVar4 = (uint)pPVar15.Length;
										pMVar24 = (MethodInfo)(ulong)uVar4;
										if (0 < (int)uVar4) {
											pSVar26 = local_f0;
											do {
												if ((uint)pMVar24 <= local_11c) {
													throw new IndexOutOfRangeException();
												}
												pPVar6 = pPVar15[(int)local_11c];
												if (bVar7) {
													bVar8 = String.IsNullOrEmpty(pSVar12);
													if (bVar8) {
	label_05935caf: ;
														if (pSVar26 ==null) {
															throw new NullReferenceException();
														}
														goto label_05935cb8;
													}
													if (pPVar6 == null) {
														throw new NullReferenceException();
													}
													local_c4 = pPVar6.actorNumber;
													pSVar16 = local_c4.ToString();
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													bVar8 = pSVar16.StartsWith(pSVar12);
													if (bVar8) goto label_05935caf;
												}
												else {
													pSVar16 = PhotonExtensions.GetStringProperty(pPVar6, PlayerProperty.Name, "");
													pSVar16 = ChatFilter.FilterSizeTag(pSVar16);
													pSVar16 = MiscExtensions.StripRichText(pSVar16);
													if (pSVar16 == null) {
														throw new NullReferenceException();
													}
													pSVar16 = pSVar16.ToLower();
													bVar8 = String.IsNullOrEmpty(pSVar12);
													pSVar26 = local_f0;
													if (!bVar8) {
														if (pSVar16 == null) {
															throw new NullReferenceException();
														}
														bVar8 = pSVar16.Contains(local_c0);
														if (!bVar8) goto label_05935ccd;
													}
													if (pSVar26 ==null) {
														throw new NullReferenceException();
													}
	label_05935cb8: ;
													il2cpp_runtime_helper_02fd2d40(pSVar26, pPVar6, MethodInfo_System_Collections_Generic_List_Player_Add);
												}
	label_05935ccd: ;
												local_11c = local_11c + 1;
												uVar4 = (uint)pPVar15.Length;
												pMVar24 = (MethodInfo)(ulong)uVar4;
											} while ((int)local_11c < (int)uVar4);
										}
										if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
											pGVar17 = typeof(ChatManager.c).static_fields;
											pSVar21 = (Comparison<T>)pGVar17.__9__139_0;
										}
										else {
											pGVar17 = typeof(ChatManager.c).static_fields;
											pSVar21 = (Comparison<T>)pGVar17.__9__139_0;
										}
										pSVar26 = local_f0;
										if (pSVar21 == null) {
											if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
												pGVar17 = typeof(ChatManager.c).static_fields;
											}
											pIVar29 = (object)pGVar17.__9;
											pMVar24 = null;
											pSVar21 = new Comparison<Player>(pIVar29, (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_0);
											pGVar17 = typeof(ChatManager.c).static_fields;
											pGVar17.__9__139_0 = (Comparison<Player>)pSVar21;
											pSVar26 = local_f0;
										}
										local_f0 = pSVar26;
										if (pSVar26 ==(System_Collections_Generic_List_KeyValuePair_string__ChatManager_CommandAttribute___o * )0x0) {
											throw new NullReferenceException();
										}
										pSVar26.Sort(pSVar21);
										if (0 < pSVar26._size) {
											pSVar12 = ChatManager.GetColorString("Matching players:", 3, false);
											ChatManager.AddLine(pSVar12, 3, true, (Nullable<DateTime>)ZEXT816(0), -1, true, false, -1, false);
											pGVar17 = typeof(ChatManager.c).static_fields;
											pSVar18 = pGVar17.__9__139_1;
											if (pSVar18 == null) {
												if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
													pGVar17 = typeof(ChatManager.c).static_fields;
												}
												pIVar29 = (object)pGVar17.__9;
												pSVar18 = new Func<Player, string>(pIVar29, (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_1);
												pGVar17 = typeof(ChatManager.c).static_fields;
												pGVar17.__9__139_1 = pSVar18;
											}
											pSVar19 = Enumerable.Select<Player, string>((System_Collections_Generic_IEnumerable_TSource__o)local_f0, (System_Func_TSource__TResult__o)pSVar18);
											pMVar24 = MethodInfo_System_Linq_Enumerable_ToList_string;
											pSVar20 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar19);
											ChatManager.ShowCommandSuggestions(pSVar20);
											pSVar20 = ChatManager.SuggestionState.Suggestions;
											if (pSVar20 == null) {
												throw new NullReferenceException();
											}
											il2cpp_runtime_helper_02fd2ba0(pSVar20, MethodInfo_System_Collections_Generic_List_string_Clear);
											local_118.GetEnumerator((List<object>)local_f0);
											local_a8 = local_108;
											local_b8 = (byte[])local_118._0_8_;
											pSStack_b0 = (Dictionary.Enumerator<object, object>)local_118._8_8_;
											local_118._0_8_ = null;
											local_118._8_8_ =(Dictionary.Enumerator<object, object>)local_b8;
											while (true) {
												bVar7 = local_b8.MoveNext();
												pSVar12 = local_a8;
												if (!(bVar7)) break;
												if (pSVar12 == null) {
													throw new NullReferenceException();
												}
												pSVar20 = ChatManager.SuggestionState.Suggestions;
												local_11c = *(uint)&(*(ulong)((sbyte)pSVar12 + 0x18));
												pSVar12 = local_11c.ToString();
												if (pSVar20 == null) {
													throw new NullReferenceException();
												}
												il2cpp_runtime_helper_02fa8fa0(pSVar20, pSVar12, MethodInfo_System_Collections_Generic_List_string_Add);
											}
											il2cpp_runtime_helper_02fd2d90(local_118);
										}
									}
								}
							}
						}
					}
				}
			}
			else {
				bVar7 = input.Contains("@");
				if (bVar7) {
					iVar10 = input.LastIndexOf(0x40);
					pSVar12 = input.Substring(iVar10 + 1);
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					iVar11 = pSVar12.IndexOf(0x20);
					if ((-1 < iVar11) || (bVar7 = String.IsNullOrWhiteSpace(pSVar12))) {
						if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
							uVar2 = ChatManager.SuggestionState.IsProcessingClick;
							pGVar30 = typeof(ChatManager);
						}
						else {
							uVar2 = ChatManager.SuggestionState.IsProcessingClick;
							pGVar30 = typeof(ChatManager);
						}
						typeof(ChatManager) = pGVar30;
						if ((bool)uVar2 == false) {
							ChatManager.ClearLastSuggestions();
							uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
						}
						if (uVar3 == 0) {
						}
						ChatManager.SuggestionState.PartialText = "";
						return;
					}
					bVar7 = (pSVar12 != ChatManager.SuggestionState. PartialText);
					if (bVar7) {
						if (ChatManager.SuggestionState.IsProcessingClick == false) {
							pGVar30 = typeof(ChatManager);
							ChatManager.ClearLastSuggestions();
							ChatManager.SuggestionState.PartialText = pSVar12;
							pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
							pGVar13.CurrentIndex = -1;
							pGVar13.Type = 2;
							pSVar16 = String.Concat("@", pSVar12);
							ChatManager.SuggestionState.SetOriginalContext(pSVar16, iVar10, iVar10 + 1 + pSVar12._stringLength);
							__this_00 = new List<Player>();
							local_f0 = (List<KeyValuePair<string, ChatManager.CommandAttribute>>)pSVar12.ToLower();
							pSVar14 = new Func<char, bool>(null, (intptr_t)MethodInfo_System_Char_IsDigit);
							cVar9 = Enumerable.All<char>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__bool__o)pSVar14);
							pPVar15 = PhotonNetwork.PlayerList;
							local_11c = 0;
							if (pPVar15 == null) {
								throw new NullReferenceException();
							}
							uVar4 = (uint)pPVar15.Length;
							pMVar24 = (MethodInfo)(ulong)uVar4;
							if (0 < (int)uVar4) {
								local_c0 = (String)CONCAT71(local_c0._1_7_, cVar9);
								do {
									if ((uint)pMVar24 <= local_11c) {
										throw new IndexOutOfRangeException();
									}
									pPVar6 = pPVar15[(int)local_11c];
									if (cVar9 == false) {
										pSVar16 = PhotonExtensions.GetStringProperty(pPVar6, PlayerProperty.Name, "");
										pSVar16 = ChatFilter.FilterSizeTag(pSVar16);
										pSVar16 = MiscExtensions.StripRichText(pSVar16);
										cVar9 = (char)local_c0;
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										pSVar16 = pSVar16.ToLower();
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										bVar7 = pSVar16.Contains((String)local_f0);
										if (bVar7) {
											if (__this_00 == null) {
												throw new NullReferenceException();
											}
											goto label_05936d27;
										}
									}
									else {
										if (pPVar6 == null) {
											throw new NullReferenceException();
										}
										local_c4 = pPVar6.actorNumber;
										pSVar16 = local_c4.ToString();
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										bVar7 = pSVar16.StartsWith(pSVar12);
										if (bVar7) {
											if (__this_00 == null) {
												throw new NullReferenceException();
											}
	label_05936d27: ;
											il2cpp_runtime_helper_02fd2d40(__this_00, pPVar6, MethodInfo_System_Collections_Generic_List_Player_Add);
										}
									}
									local_11c = local_11c + 1;
									uVar4 = (uint)pPVar15.Length;
									pMVar24 = (MethodInfo)(ulong)uVar4;
								} while ((int)local_11c < (int)uVar4);
							}
							if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
								pGVar17 = typeof(ChatManager.c).static_fields;
								pSVar21 = (Comparison<T>)pGVar17.__9__139_3;
							}
							else {
								pGVar17 = typeof(ChatManager.c).static_fields;
								pSVar21 = (Comparison<T>)pGVar17.__9__139_3;
							}
							if (pSVar21 == null) {
								if (((typeof(ChatManager.c))._2).cctor_finished_or_no_cctor == 0) {
									pGVar17 = typeof(ChatManager.c).static_fields;
								}
								pIVar29 = (object)pGVar17.__9;
								pMVar24 = null;
								pSVar21 = new Comparison<Player>(pIVar29, (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_3);
								pGVar17 = typeof(ChatManager.c).static_fields;
								pGVar17.__9__139_3 = (Comparison<Player>)pSVar21;
							}
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.Sort(pSVar21);
							if (__this_00._size < 1) {
								pGVar30 = typeof(ChatManager);
								goto label_05936b06;
							}
							pSVar12 = ChatManager.GetColorString("Matching players:", 3, false);
							ChatManager.AddLine(pSVar12, 3, true, (Nullable<DateTime>)ZEXT816(0), -1, true, false, -1, false);
							pGVar17 = typeof(ChatManager.c).static_fields;
							pSVar18 = pGVar17.__9__139_4;
							if (pSVar18 == null) {
								if ((typeof(ChatManager.c)._2).cctor_finished_or_no_cctor == 0) {
									pGVar17 = typeof(ChatManager.c).static_fields;
								}
								pIVar29 = (object)pGVar17.__9;
								pSVar18 = new Func<Player, string>(pIVar29, (intptr_t)MethodInfo_GameManagers_ChatManager_c_HandleTypingInternal_b__139_4);
								pGVar17 = typeof(ChatManager.c).static_fields;
								pGVar17.__9__139_4 = pSVar18;
							}
							pSVar19 = Enumerable.Select<Player, string>((System_Collections_Generic_IEnumerable_TSource__o)__this_00, (System_Func_TSource__TResult__o)pSVar18) ;
							pMVar24 = MethodInfo_System_Linq_Enumerable_ToList_string;
							pSVar20 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar19);
							ChatManager.ShowCommandSuggestions(pSVar20);
							pSVar20 = ChatManager.SuggestionState.Suggestions;
							if (pSVar20 == null) {
								throw new NullReferenceException();
							}
							il2cpp_runtime_helper_02fd2ba0(pSVar20, MethodInfo_System_Collections_Generic_List_string_Clear);
							local_118.GetEnumerator((List<object>)__this_00);
							local_a8 = local_108;
							local_b8 = (byte[])local_118._0_8_;
							pSStack_b0 = (Dictionary.Enumerator<object, object>)local_118._8_8_ ;
							local_118._0_8_ = null;
							local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_b8;
							while (true) {
								bVar7 = local_b8.MoveNext();
								pSVar12 = local_a8;
								if (!(bVar7)) break;
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
								pSVar20 = ChatManager.SuggestionState.Suggestions;
								local_11c = *(uint)&(*(ulong)((sbyte)pSVar12 + 0x18));
								pSVar12 = local_11c.ToString();
								if (pSVar20 == null) {
									throw new NullReferenceException();
								}
								il2cpp_runtime_helper_02fa8fa0(pSVar20, pSVar12, MethodInfo_System_Collections_Generic_List_string_Add);
							}
							il2cpp_runtime_helper_02fd2eb0(local_118);
						}
					}
				}
				else {
					if (ChatManager.SuggestionState.IsProcessingClick == false) {
						pGVar30 = typeof(ChatManager);
	label_05936b06: ;
						ChatManager.ClearLastSuggestions();
					}
				}
			}
			uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) {
				if (ChatManager.SuggestionState.Type == 1) goto label_059348aa;
	label_05934854: ;
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) goto label_05934962;
	label_05934861: ;
				iVar28 = ChatManager.SuggestionState.Type;
	joined_r0x0593486c: ;
				if (iVar28 == 2) {
					if (input == null) {
						throw new NullReferenceException();
					}
					bVar7 = input.Contains("@");
					if (bVar7) {
						iVar10 = input.LastIndexOf(0x40);
						if (-1 < iVar10) {
							pSVar12 = input.Substring(iVar10 + 1);
							pSVar20 = ChatManager.SuggestionState.Suggestions;
							if (pSVar20 == null) {
								throw new NullReferenceException();
							}
							local_118.GetEnumerator((List<object>)pSVar20);
							local_d8 = local_108;
							local_e8 = (byte[])local_118._0_8_;
							pSStack_e0 = (Dictionary.Enumerator<object, object>)local_118._8_8_ ;
							local_118._0_8_ = null;
							local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
	label_05934a40: ;
							bVar7 = local_e8.MoveNext();
							if (bVar7) goto code_r0x05934a54;
							local_e8.Dispose();
							pSVar20 = ChatManager.SuggestionState.Suggestions;
							if (pSVar20 == null) {
								throw new NullReferenceException();
							}
							local_118.GetEnumerator((List<object>)pSVar20);
							local_d8 = local_108;
							local_e8 = (byte[])local_118._0_8_;
							pSStack_e0 = (Dictionary.Enumerator<object, object>)local_118._8_8_ ;
							local_118._0_8_ = null;
							local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
							do {
								bVar7 = local_e8.MoveNext();
								if (!bVar7) {
									il2cpp_runtime_helper_02fd2cb0(local_118);
									pGVar30 = typeof(ChatManager);
									ChatManager.ClearLastSuggestions();
									return;
								}
								if (local_d8 == null) {
									throw new NullReferenceException();
								}
								bVar7 = local_d8.StartsWith(pSVar12, 5);
							} while (!bVar7);
							il2cpp_runtime_helper_02fd2cb0(local_118);
							uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
							goto joined_r0x05934f78;
						}
						goto label_05934fa0;
					}
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					iVar28 = ChatManager.SuggestionState.Type;
				}
				else {
					iVar28 = *(int)((long)(typeof(ChatManager.SuggestionState)). static_fields + 0x24);
				}
				if (iVar28 == 3) {
					if (input == null) {
						throw new NullReferenceException();
					}
					bVar7 = input.StartsWith("/");
					if ((bVar7) && (iVar10 = input.IndexOf(0x20), iVar10 != -1)) {
						pSVar12 = input.Substring(1, iVar10 + -1);
						if (pSVar12 == null) {
							throw new NullReferenceException();
						}
						pSVar12 = pSVar12.ToLower();
						pSVar5 = (Dictionary<object, object>)ChatManager.CommandsCache;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						bVar7 = pSVar5.TryGetValue((object)pSVar12, ref local_60);
						iVar28 = 1;
						if (bVar7) {
							if (local_60 == null) {
								throw new NullReferenceException();
							}
							iVar28 = *(int)&local_60[4].klass;
						}
						if ((iVar28 != 2) ||(iVar11 = input.LastIndexOf(0x20), iVar11 <= iVar10)) {
							iVar11 = iVar10;
						}
						pSVar12 = input.Substring(iVar11 + 1);
						pSVar20 = ChatManager.SuggestionState.Suggestions;
						if (pSVar20 == null) {
							throw new NullReferenceException();
						}
						local_118.GetEnumerator((List<object>)pSVar20);
						local_d8 = local_108;
						local_e8 = (byte[])local_118._0_8_;
						local_118._0_8_ = null;
						local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
						while (bVar7 = local_e8.MoveNext()) {
							bVar7 = String.Equals(pSVar12, local_d8, 5);
							if (bVar7) {
	label_05934c3b: ;
								local_e8.Dispose();
								return;
							}
						}
						local_e8.Dispose();
						pSVar20 = ChatManager.SuggestionState.Suggestions;
						if (pSVar20 == null) {
							throw new NullReferenceException();
						}
						local_118.GetEnumerator((List<object>)pSVar20);
						local_d8 = local_108;
						local_e8 = (byte[])local_118._0_8_;
						local_118._0_8_ = null;
						local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
						do {
							bVar7 = local_e8.MoveNext();
							if (!bVar7) {
								il2cpp_runtime_helper_02fd2d10(local_118);
								pGVar30 = typeof(ChatManager);
								ChatManager.ClearLastSuggestions();
								return;
							}
							if (local_d8 == null) {
								throw new NullReferenceException();
							}
							bVar7 = local_d8.StartsWith(pSVar12, 5);
						} while (!bVar7);
						il2cpp_runtime_helper_02fd2d10(local_118);
						uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
	joined_r0x05934f78: ;
						if (uVar3 == 0) {
						}
						pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
						pGVar13.OriginalPartialText = "";
					}
				}
	label_05934fa0: ;
				pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
				pGVar13.OriginalPartialText = "";
				goto label_05934fd2;
			}
			if (ChatManager.SuggestionState.Type != 1) goto label_05934854;
	label_059348aa: ;
			if (input == null) {
				throw new NullReferenceException();
			}
			bVar7 = input.StartsWith("/");
			if (!bVar7) {
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) goto label_05934861;
	label_05934962: ;
				iVar28 = ChatManager.SuggestionState.Type;
				goto joined_r0x0593486c;
			}
			iVar10 = input.IndexOf(0x20);
			if (iVar10 != -1) {
				pSVar12 = input.Substring(1, iVar10 + -1);
				if (pSVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar12.ToLower();
				pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
				pGVar13.OriginalPartialText = "";
				ChatManager.SuggestionState.IsTabCompleting = false;
				goto label_05934fa0;
			}
			pSVar12 = input.Substring(1);
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar12.ToLower();
			pSVar20 = ChatManager.SuggestionState.Suggestions;
			if (pSVar20 == null) {
				throw new NullReferenceException();
			}
			local_118.GetEnumerator((List<object>)pSVar20);
			local_d8 = local_108;
			local_e8 = (byte[])local_118._0_8_;
			local_118._0_8_ = null;
			local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
			do {
				bVar7 = local_e8.MoveNext();
				if (!bVar7) {
					local_e8.Dispose() ;
					pSVar20 = ChatManager.SuggestionState.Suggestions;
					if (pSVar20 == null) {
						throw new NullReferenceException();
					}
					local_118.GetEnumerator((List<object>)pSVar20);
					local_d8 = local_108;
					local_e8 = (byte[])local_118._0_8_;
					local_118._0_8_ = null;
					local_118._8_8_ = (Dictionary.Enumerator<object, object>)local_e8;
					do {
						bVar7 = local_e8.MoveNext();
						if (!bVar7) {
							il2cpp_runtime_helper_02fd2c50(local_118);
							pGVar30 = typeof(ChatManager);
							ChatManager.ClearLastSuggestions();
							return;
						}
						if (local_d8 == null) {
							throw new NullReferenceException();
						}
						bVar7 = local_d8.StartsWith(pSVar12, 5);
					} while (!bVar7);
					il2cpp_runtime_helper_02fd2c50(local_118);
					uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05934f78;
				}
				bVar7 = String.Equals(pSVar12, local_d8, 5);
			} while (!bVar7);
			local_e8.Dispose();
			uVar3 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
		}
	joined_r0x05936b15: ;
		if (uVar3 == 0) {
		}
		pGVar13 = typeof(ChatManager.SuggestionState).static_fields;
	label_05936b26: ;
		pGVar13.IsTabCompleting = false;
		return;
	code_r0x05934a54: ;
		bVar7 = String.Equals(pSVar12, local_d8, 5);
		if (bVar7) goto label_05934c3b;
		goto label_05934a40;
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x5837530", Offset = "0x5836530", VA = "0x5837530")]
	private static void ShowCommandSuggestions(List<string> suggestions)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ShowCommandSuggestions): 12 lines keep C-only constructs
		long lVar1;
		uint uVar2;
		int iVar3;
		GameManagers_ChatManager_StaticFields pGVar4;
		String pSVar5;
		String str0;
		String str2;
		object arg0;
		Il2CppClass klass;
		int index;
		int[] local_44 = new int[5];

		if (Il2CppMethodInitialized_075457e5 == false) {
			Il2CppMethodInitialized_075457e5 = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075457c5 == false) {
			Il2CppMethodInitialized_075457c5 = true;
			uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)typeof(ChatManager) + 0xe4);
		}
		if (uVar2 == 0) {
			pGVar4 = typeof(ChatManager).static_fields;
			iVar3 = pGVar4._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		else {
			pGVar4 = (typeof(ChatManager)).static_fields;
			iVar3 = pGVar4._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (iVar3 == 0) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(ChatManager);
				ChatManager._pendingBatchSync = false;
				uVar2 = (((ChatManager)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar4._pendingBatchSync = false;
				uVar2 = (klass._2).cctor_finished_or_no_cctor;
			}
		}
		else {
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			klass = typeof(ChatManager);
		}
		lVar1 = (long)klass.static_fields + 0x84;
		*(int)lVar1 = *(int)lVar1 + 1;
		local_44[1] = 0;
		local_44[2] = 0;
		if (suggestions == null) {
			throw new NullReferenceException();
		}
		if (0 < suggestions._size) {
			index = 0;
			do {
				iVar3 = ChatManager.SuggestionState.CurrentIndex;
				pSVar5 = suggestions.get_Item(index);
				if (index == iVar3) {
					str0 = ChatManager.GetColorString("> ", 2, false);
					str2 = ChatManager.GetColorString(" <", 2, false);
					pSVar5 = String.Concat(str0, pSVar5, str2);
				}
				local_44[0] = index;
				arg0 = (object)local_44;
				pSVar5 = String.Format("<link=\"suggestion_{0}\">{1}</link>", arg0, (object)pSVar5);
				ChatManager.AddLine(pSVar5, 0, true, (Nullable<DateTime>)ZEXT816(0), -1, true, false, -1, false);
				index = index + 1;
			} while (index < suggestions._size);
		}
		ChatManager.EndLineBatch();
		return;
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x58378C0", Offset = "0x58368C0", VA = "0x58378C0")]
	public static void HandleTabComplete()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleTabComplete): clean
		uint uVar1;
		List<string> __this;
		bool bVar2;
		int iVar3;
		ChatPanel __this_00;
		String __this_01;
		String suggestion;
		MethodInfo newText;
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar4;
		int iVar5;
		Il2CppClass pIVar7;

		if (Il2CppMethodInitialized_075457e6 == false) {
			Il2CppMethodInitialized_075457e6 = true;
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) goto label_0593795b;
	label_059378e8: ;
			bVar2 = ChatManager.SuggestionState.IsActive;
			pIVar7 = typeof(ChatManager);
		}
		else {
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) goto label_059378e8;
	label_0593795b: ;
			bVar2 = ChatManager.SuggestionState.IsActive;
			pIVar7 = typeof(ChatManager);
		}
		if (!bVar2) {
			typeof(ChatManager) = (ChatManager)pIVar7;
			return;
		}
		typeof(ChatManager) = (ChatManager)pIVar7;
		__this_00 = ChatManager.GetChatPanel();
		bVar2 = ((Object)__this_00 == null);
		if (bVar2) {
			return;
		}
		if ((__this_00 != null) &&(__this_01 = __this_00.GetInputText(), __this_01 != null )) {
			bVar2 = __this_01.StartsWith("/");
			if (bVar2) {
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					iVar5 = ChatManager.SuggestionState.Type;
				}
				else {
					iVar5 = ChatManager.SuggestionState.Type;
				}
				if (iVar5 == 2) goto label_05937c27;
			}
			bVar2 = __this_01.StartsWith("/");
			if (!bVar2) {
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					iVar3 = ChatManager.SuggestionState.Type;
				}
				else {
					iVar3 = ChatManager.SuggestionState.Type;
				}
				if (iVar3 == 1) {
	label_05937c27: ;
					ChatManager.ClearLastSuggestions();
					return;
				}
				if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0) {
					iVar3 = ChatManager.SuggestionState.Type;
				}
				if (iVar3 == 3) goto label_05937c27;
			}
			pIVar7 = typeof(ChatManager.SuggestionState);
			pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
			iVar5 = pGVar4.CurrentIndex + 1;
			pGVar4.CurrentIndex = iVar5;
			if (pGVar4.Suggestions != null) {
				if (iVar5 < pGVar4.Suggestions._size) {
					uVar1 = (((ChatManager.SuggestionState)pIVar7)._2).cctor_finished_or_no_cctor;
				}
				else {
					if ((((ChatManager.SuggestionState)pIVar7)._2).cctor_finished_or_no_cctor == 0) {
						pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
						pIVar7 = typeof(ChatManager.SuggestionState);
					}
					pGVar4.CurrentIndex = 0;
					uVar1 = (pIVar7._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
					__this = pGVar4.Suggestions;
				}
				else {
					pGVar4 = pIVar7.static_fields;
					__this = pGVar4.Suggestions;
				}
				if (__this != null) {
					suggestion = __this.get_Item(pGVar4.CurrentIndex);
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					newText = (MethodInfo)ChatManager.BuildCompletedText(__this_01, suggestion);
					bVar2 = String.IsNullOrEmpty(ChatManager.SuggestionState. OriginalPartialText);
					if (bVar2) {
						pGVar4 = typeof(ChatManager.SuggestionState).static_fields;
						pGVar4.OriginalPartialText = pGVar4.PartialText;
					}
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					ChatManager.UpdatePartialTextAfterCompletion((String)newText, suggestion);
					ChatManager.RefreshSuggestionDisplay();
					ChatManager.SuggestionState.IsTabCompleting = true;
					__this_00.SetTextAndPositionCaret((String)newText);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x5838180", Offset = "0x5837180", VA = "0x5838180")]
	public static void HandleSuggestionClick(int suggestionIndex)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HandleSuggestionClick): 1 lines keep C-only constructs
		List<string> pSVar1;
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar2;
		ChatManager __this;
		bool bVar3;
		ChatPanel __this_00;
		String pSVar4;
		String suggestion;
		ChatManager.d__143<ReactivateInputAfterClick> __this_01;

		if (Il2CppMethodInitialized_075457e7 == false) {
			Il2CppMethodInitialized_075457e7 = true;
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) goto label_05938211;
	label_059381aa: ;
			bVar3 = ChatManager.SuggestionState.IsActive;
		}
		else {
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) goto label_059381aa;
	label_05938211: ;
			bVar3 = ChatManager.SuggestionState.IsActive;
		}
		if ((-1 < suggestionIndex) && (bVar3 != false)) {
			if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar1 = ChatManager.SuggestionState.Suggestions;
			if (pSVar1 == null) {
	label_05938434: ;
				throw new NullReferenceException();
			}
			if (suggestionIndex < pSVar1._size) {
				__this_00 = ChatManager.GetChatPanel();
				bVar3 = ((Object)__this_00 == null);
				if (!bVar3) {
					if (__this_00 != null) {
						pSVar4 = __this_00.GetInputText();
						pSVar1 = ChatManager.SuggestionState.Suggestions;
						if (pSVar1 != null) {
							suggestion = pSVar1.get_Item(suggestionIndex);
							if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
							}
							pSVar4 = ChatManager.BuildCompletedText(pSVar4, suggestion);
							bVar3 = String.IsNullOrEmpty(ChatManager.SuggestionState. OriginalPartialText);
							if (bVar3) {
								pGVar2 = typeof(ChatManager.SuggestionState).static_fields;
								pGVar2.OriginalPartialText = pGVar2.PartialText;
							}
							pGVar2 = typeof(ChatManager.SuggestionState).static_fields;
							pGVar2.CurrentIndex = suggestionIndex;
							pGVar2.IsTabCompleting = true;
							pGVar2.IsProcessingClick = true;
							ChatManager.RefreshSuggestionDisplay();
							__this_00.SetTextAndPositionCaret(pSVar4);
							__this = ChatManager._instance;
							if (__this != null) {
								__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(ChatManager.d__143<ReactivateInputAfterClick>));
								__this_01 = new ChatManager.d__143<ReactivateInputAfterClick>(0) ;
								if (__this_01 != null) {
									__this_01.chatPanel = __this_00;
									__this.StartCoroutine((IEnumerator)__this_01);
									return;
								}
							}
						}
					}
					goto label_05938434;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x5838440", Offset = "0x5837440", VA = "0x5838440")]
	[IteratorStateMachine(typeof(_003CReactivateInputAfterClick_003Ed__143))]
	private IEnumerator ReactivateInputAfterClick(ChatPanel chatPanel)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ReactivateInputAfterClick): clean
		ChatManager.d__143<ReactivateInputAfterClick> __this_00;

		__this_00 = new ChatManager.d__143<ReactivateInputAfterClick>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.chatPanel = chatPanel;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x5837C50", Offset = "0x5836C50", VA = "0x5837C50")]
	private static string BuildCompletedText(string currentInput, string suggestion)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$BuildCompletedText): clean
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar1;
		int index;
		ushort uVar2;
		int iVar3;
		String pSVar4;
		String str3;

		if (Il2CppMethodInitialized_075457e9 == false) {
			Il2CppMethodInitialized_075457e9 = true;
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) goto label_05937cf8;
	label_05937c7a: ;
			pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
			iVar3 = pGVar1.Type;
			pSVar4 = "/";
		}
		else {
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) goto label_05937c7a;
	label_05937cf8: ;
			pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
			iVar3 = pGVar1.Type;
			pSVar4 = "/";
		}
		"/" = pSVar4;
		if (iVar3 == 3) {
			if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0) {
			}
			if (currentInput != null) {
				pSVar4 = currentInput.Substring(0, ChatManager.SuggestionState.OriginalStartPos);
				goto label_05937d46;
			}
			goto label_05937e66;
		}
		if (iVar3 != 2) {
			if (iVar3 != 1) {
				return currentInput;
			}
	label_05937d46: ;
			pSVar4 = String.Concat(pSVar4, suggestion);
			return pSVar4;
		}
		if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0 ) {
			iVar3 = ChatManager.SuggestionState.OriginalStartPos;
			if (iVar3 < 0) goto label_05937daa;
	label_05937d6d: ;
			if (currentInput == null) {
	label_05937e66: ;
				throw new NullReferenceException();
			}
			if ((iVar3 < currentInput._stringLength) &&(uVar2 = currentInput.get_Chars(iVar3), uVar2 == 0x40)) goto label_05937dc9;
		}
		else {
			iVar3 = pGVar1.OriginalStartPos;
			if (-1 < iVar3) goto label_05937d6d;
	label_05937daa: ;
			if (currentInput == null) goto label_05937e66;
		}
		iVar3 = currentInput.LastIndexOf(0x40);
		if (iVar3 < 0) {
			return currentInput;
		}
	label_05937dc9: ;
		index = iVar3;
		do {
			index = index + 1;
			if ((currentInput._stringLength <= index) ||(uVar2 = currentInput.get_Chars(index), uVar2 == 0x20)) break;
			uVar2 = currentInput.get_Chars(index);
		} while (uVar2 != 9);
		pSVar4 = currentInput.Substring(0, iVar3);
		if (index < currentInput._stringLength) {
			str3 = currentInput.Substring(index);
		}
		else {
			str3 = "";
		}
		pSVar4 = String.Concat(pSVar4, "@", suggestion, str3);
		return pSVar4;
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x5837FB0", Offset = "0x5836FB0", VA = "0x5837FB0")]
	private static void RefreshSuggestionDisplay()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RefreshSuggestionDisplay): 13 lines keep C-only constructs
		long lVar1;
		int piVar2;
		uint uVar3;
		int iVar4;
		GameManagers_ChatManager_StaticFields pGVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075457ea == false) {
			Il2CppMethodInitialized_075457ea = true;
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if (Il2CppMethodInitialized_075457c5 == false) {
			Il2CppMethodInitialized_075457c5 = true;
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = *(uint)((long)typeof(ChatManager) + 0xe4);
		}
		if (uVar3 == 0) {
			pGVar5 = typeof(ChatManager).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		else {
			pGVar5 = (typeof(ChatManager)).static_fields;
			iVar4 = pGVar5._lineBatchDepth;
			klass = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)klass;
		if (iVar4 == 0) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(ChatManager);
				ChatManager._pendingBatchSync = false;
				uVar3 = (((ChatManager)klass)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5._pendingBatchSync = false;
				uVar3 = (klass._2).cctor_finished_or_no_cctor;
			}
		}
		else {
			uVar3 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			klass = typeof(ChatManager);
			uVar3 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			piVar2 = &ChatManager._lineBatchDepth;
			*piVar2 = *piVar2 + 1;
			if (uVar3 == 0) {
			}
		}
		else {
			lVar1 = (long)klass.static_fields + 0x84;
			*(int)lVar1 = *(int)lVar1 + 1;
		}
		ChatManager.RefreshSuggestionDisplayInternal();
		ChatManager.EndLineBatch();
		return;
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x58384B0", Offset = "0x58374B0", VA = "0x58384B0")]
	private static void RefreshSuggestionDisplayInternal()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RefreshSuggestionDisplayInternal): 31 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> pSVar3;
		Dictionary<object, object> __this;
		bool bVar4;
		List<string> suggestions;
		Room pPVar5;
		Player pPVar6;
		String pSVar7;
		object pIVar8;
		String pSVar9;
		MethodInfo pMVar10;
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar11;
		StringBuilder pSVar12;
		Il2CppRGCTXData method_00;
		String* ppSVar13;
		ulong uVar14;
		MethodInfo pMVar15;
		int local_7c;
		int local_78;
		int local_74;
		byte[] local_70 = new byte[16];
		String local_60;
		byte[] local_58 = new byte[8];
		String local_48;
		String local_40;
		object local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		local_38 = null;
		local_74 = 0;
		local_78 = 0;
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar4 = ChatManager.RemoveSuggestionLines();
			if (bVar4) goto label_059385f5;
		}
		else {
			bVar4 = ChatManager.RemoveSuggestionLines();
			if (bVar4) {
	label_059385f5: ;
				ChatManager._pendingBatchSync = true;
			}
		}
		pSVar7 = "";
		suggestions = new List<string>();
		if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
			pGVar11 = typeof(ChatManager.SuggestionState).static_fields;
			method_00 = (Il2CppRGCTXData)(ulong)(uint)pGVar11.Type;
			if (pGVar11.Type == 3) goto label_05938672;
	label_059388c4: ;
			pSVar9 = "Matching players:";
			if ((int)method_00 == 2) {
				local_40 = pSVar9;
				pSVar3 = ChatManager.SuggestionState.Suggestions;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				local_70.GetEnumerator((List<object>)pSVar3);
				local_48 = local_60;
				local_58 = (byte[])local_70._0_8_;
				local_70._0_8_ = null;
				local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
	label_05938df0: ;
				bVar4 = local_58.MoveNext();
				if (bVar4) {
					bVar4 = Int32.TryParse(local_48, ref local_78);
					if (bVar4) {
						pPVar5 = PhotonNetwork.CurrentRoom;
						if (pPVar5 == null) {
							throw new NullReferenceException();
						}
						method_00 = (Il2CppRGCTXData)(pPVar5.klass.vtable)._10_GetPlayer.method;
						pPVar6 = pPVar5.GetPlayer(local_78, false);
						if (pPVar6 != null) {
							pSVar7 = PhotonExtensions.GetStringProperty(pPVar6, PlayerProperty.Name, "");
							pSVar7 = ChatFilter.FilterSizeTag(pSVar7);
							local_7c = local_78;
							pIVar8 = (object)local_7c;
							ppSVar13 = &"[{0}]";
							pSVar9 = String.Format("[{0}]", pIVar8);
							pSVar9 = ChatManager.GetColorString(pSVar9, 1, false);
							pMVar10 = (MethodInfo)String.Concat(pSVar9, " ", pSVar7);
							pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (suggestions != null) {
								piVar1 = &suggestions._version;
								*piVar1 = *piVar1 + 1;
								method_00 = (Il2CppRGCTXData)suggestions._items;
								if (method_00 != null) {
									uVar2 = suggestions._size;
									if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
										suggestions._size = uVar2 + 1;
										method_00[(long)(int)uVar2 + 4].method = pMVar10;
									}
									else {
										method_00 = pMVar15.klass.rgctx_data;
										suggestions.AddWithResize((object)pMVar10);
									}
									goto label_05938df0;
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05938df0;
				}
			}
			else {
				if ((int)method_00 != 1) goto label_05938fa0;
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					pGVar11 = typeof(ChatManager.SuggestionState).static_fields;
				}
				local_40 = pSVar7;
				if (pGVar11.Suggestions == null) {
					throw new NullReferenceException();
				}
				local_70.GetEnumerator((List<object>)pGVar11.Suggestions);
				local_48 = local_60;
				local_58 = (byte[])local_70._0_8_;
				local_70._0_8_ = null;
				local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
				while (true) {
					bVar4 = local_58.MoveNext();
					pSVar7 = local_48;
					if (!(bVar4)) break;
					pSVar12 = ChatManager.MessageBuilder;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12.Clear();
					pSVar12 = ChatManager.MessageBuilder;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12 = pSVar12.Append(0x2f);
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar12.Append(pSVar7);
					__this = (Dictionary<object, object>)ChatManager.CommandsCache;
					if (__this == null) {
						throw new NullReferenceException();
					}
					pMVar15 = MethodInfo_System_Collections_Generic_Dictionary_string_ChatManager_CommandAttribute_TryGetValue;
					bVar4 = __this.TryGetValue((object)pSVar7, ref local_38);
					if (bVar4) {
						if (local_38 == null) {
							throw new NullReferenceException();
						}
						if (local_38[3].monitor == null) {
							throw new NullReferenceException();
						}
						if (*(long)((long)local_38[3].monitor + 0x18) != 0) {
							pSVar12 = ChatManager.MessageBuilder;
							if (pSVar12 == null) {
								throw new NullReferenceException();
							}
							pSVar12.Append(0x20);
							if (local_38 == null) {
	label_05938c2f: ;
								throw new NullReferenceException();
							}
							uVar14 = 0;
							while(true) {
								if (local_38[3].monitor == null) {
									throw new NullReferenceException();
								}
								if ((long)*(int)((long)local_38[3].monitor + 0x18) <= (long)uVar14) break;
								if (uVar14 != 0) {
									pSVar12 = ChatManager.MessageBuilder;
									if (pSVar12 == null) {
										throw new NullReferenceException();
									}
									pSVar12.Append(0x20);
								}
								pSVar12 = ChatManager.MessageBuilder;
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
								pSVar12 = pSVar12.Append(0x5b);
								if (local_38 == null) {
									throw new NullReferenceException();
								}
								pMVar15 = local_38[3].monitor;
								if (pMVar15 == null) {
									throw new NullReferenceException();
								}
								if (*(uint)&pMVar15.name <= uVar14) {
									throw new IndexOutOfRangeException();
								}
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
								pSVar12 = pSVar12.Append((String)(&pMVar15.klass)[uVar14]);
								if (pSVar12 == null) {
									throw new NullReferenceException();
								}
								pSVar12.Append(0x5d);
								uVar14 = uVar14 + 1;
								if (local_38 == null) goto label_05938c2f;
							}
						}
					}
					pSVar12 = ChatManager.MessageBuilder;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar12.ToString();
					pMVar10 = (MethodInfo)ChatManager.GetColorString(pSVar7, 2, false);
					pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (suggestions == null) {
	label_05938c5c: ;
						throw new NullReferenceException();
					}
					piVar1 = &suggestions._version;
					*piVar1 = *piVar1 + 1;
					method_00 = (Il2CppRGCTXData)suggestions._items;
					if (method_00 == null) goto label_05938c5c;
					uVar2 = suggestions._size;
					if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
						suggestions._size = uVar2 + 1;
						method_00[(long)(int)uVar2 + 4].method = pMVar10;
					}
					else {
						method_00 = pMVar15.klass.rgctx_data;
						suggestions.AddWithResize((object)pMVar10);
					}
				}
			}
		}
		else {
			pGVar11 = typeof(ChatManager.SuggestionState).static_fields;
			method_00 = (Il2CppRGCTXData)(ulong)(uint)pGVar11.Type;
			if (pGVar11.Type != 3) goto label_059388c4;
	label_05938672: ;
			pSVar7 = "Matching players:";
			local_40 = pSVar7;
			pSVar3 = ChatManager.SuggestionState.Suggestions;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			local_70.GetEnumerator((List<object>)pSVar3);
			local_48 = local_60;
			local_58 = (byte[])local_70._0_8_;
			local_70._0_8_ = null;
			local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
	label_05938710: ;
			bVar4 = local_58.MoveNext();
			if (bVar4) {
				bVar4 = Int32.TryParse(local_48, ref local_74);
				if (bVar4) {
					pPVar5 = PhotonNetwork.CurrentRoom;
					if (pPVar5 == null) {
						throw new NullReferenceException();
					}
					method_00 = (Il2CppRGCTXData)(pPVar5.klass.vtable)._10_GetPlayer.method;
					pPVar6 = pPVar5.GetPlayer(local_74, false);
					if (pPVar6 != null) {
						pSVar7 = PhotonExtensions.GetStringProperty(pPVar6, PlayerProperty.Name, "");
						pSVar7 = ChatFilter.FilterSizeTag(pSVar7);
						local_7c = local_74;
						pIVar8 = (object)local_7c;
						ppSVar13 = &"[{0}]";
						pSVar9 = String.Format("[{0}]", pIVar8);
						pSVar9 = ChatManager.GetColorString(pSVar9, 1, false);
						pMVar10 = (MethodInfo)String.Concat(pSVar9, " ", pSVar7);
						pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
						if (suggestions != null) {
							piVar1 = &suggestions._version;
							*piVar1 = *piVar1 + 1;
							method_00 = (Il2CppRGCTXData)suggestions._items;
							if (method_00 != null) {
								uVar2 = suggestions._size;
								if (uVar2 < *(uint)&method_00[3].rgctxDataDummy) {
									suggestions._size = uVar2 + 1;
									method_00[(long)(int)uVar2 + 4].method = pMVar10;
								}
								else {
									method_00 = pMVar15.klass.rgctx_data;
									suggestions.AddWithResize((object)pMVar10);
								}
								goto label_05938710;
							}
						}
						throw new NullReferenceException();
					}
				}
				goto label_05938710;
			}
		}
		local_58.Dispose();
		pSVar7 = local_40;
	label_05938fa0: ;
		pMVar15 = null;
		bVar4 = String.IsNullOrEmpty(pSVar7);
		if (!bVar4) {
			pSVar7 = ChatManager.GetColorString(pSVar7, 3, false);
			pMVar15 = (MethodInfo)0x3;
			ChatManager.AddLine(pSVar7, 3, true, (Nullable<DateTime>)ZEXT816(0), -1, true, false, -1, false);
		}
		ChatManager.ShowCommandSuggestions(suggestions);
		return;
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x5839160", Offset = "0x5838160", VA = "0x5839160")]
	private static bool RemoveSuggestionLines()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RemoveSuggestionLines): clean
		uint uVar1;
		uint index;
		List<string> pSVar2;
		List<bool> __this;
		bool bVar3;
		bool bVar4;

		if (Il2CppMethodInitialized_075457ec == false) {
			Il2CppMethodInitialized_075457ec = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ChatManager.RawMessages;
		}
		else {
			pSVar2 = *(List<string>*)((long)(typeof(ChatManager)).static_fields + 0x28);
		}
		if (pSVar2 != null) {
			index = pSVar2._size;
			while(true) {
				index = index - 1;
				if ((int)index < 0) {
					return bVar4;
				}
				if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				__this = ChatManager.SuggestionFlags;
				if (__this == null) break;
				bVar3 = __this.get_Item(index);
				if (bVar3) {
					ChatManager.RemoveLineAt(index);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x58373C0", Offset = "0x58363C0", VA = "0x58373C0")]
	public static void ClearLastSuggestions()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearLastSuggestions): 4 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		bool bVar3;
		GameManagers_ChatManager_StaticFields pGVar4;
		ChatPanel __this;
		Il2CppClass klass;

		bVar3 = ChatManager.RemoveSuggestionLines();
		if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
			ChatManager.SuggestionState.Clear();
		}
		else {
			ChatManager.SuggestionState.Clear();
		}
		if (bVar3) {
			if (((typeof(ChatManager))._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(ChatManager).static_fields;
				iVar1 = pGVar4._lineBatchDepth;
				uVar2 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				klass = typeof(ChatManager);
			}
			else {
				pGVar4 = (typeof(ChatManager)).static_fields;
				iVar1 = pGVar4._lineBatchDepth;
				uVar2 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
				klass = typeof(ChatManager);
			}
			typeof(ChatManager) = (ChatManager)klass;
			if (0 < iVar1) {
				if (uVar2 == 0) {
					pGVar4 = typeof(ChatManager).static_fields;
				}
				pGVar4._pendingBatchSync = true;
				return;
			}
			if (uVar2 == 0) {
			}
			bVar3 = ChatManager.IsChatAvailable();
			if (bVar3) {
				__this = ChatManager.GetChatPanel();
				bVar3 = ((Object)__this != null);
				if (bVar3) {
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.Sync();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x5839280", Offset = "0x5838280", VA = "0x5839280")]
	public static void ForceSuggestionRefresh()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ForceSuggestionRefresh): clean
		ChatManager.SuggestionState.PartialText = "##FORCE_REFRESH##";
		return;
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x582C1A0", Offset = "0x582B1A0", VA = "0x582C1A0")]
	public static void SendPrivateMessage(Player target, string message)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SendPrivateMessage): 7 lines keep C-only constructs
		PhotonView pPVar1;
		Player targetPlayer;
		Object[] pSVar2;
		object pIVar3;
		object pIVar4;
		DateTime local_50;
		int local_48;
		int local_44;
		long local_40;
		long local_38;

		if (target == null) {
			ChatManager.AddLine("Invalid private message target.", 4, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			return;
		}
		pPVar1 = RPCManager.PhotonView;
		targetPlayer = PhotonNetwork.LocalPlayer;
		pSVar2 = (Object[])new object[3];
		if (pSVar2 == null) goto label_0592c577;
		if ((message != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)message, (((pSVar2.obj).klass)._1).element_class), pIVar3 == null)) {
	label_0592c568: ;
			pIVar3 = new ArrayTypeMismatchException();
			throw pIVar3;
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = (object)message;
			local_44 = target.actorNumber;
			pIVar3 = (object)local_44;
			if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) goto label_0592c568;
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = pIVar3;
				local_50 = DateTime.UtcNow;
				local_38 = local_50.Ticks;
				pIVar3 = (object)local_38;
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) goto label_0592c568;
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = pIVar3;
					if (pPVar1 != null) {
						pPVar1.RPC("PrivateChatRPC", targetPlayer, pSVar2);
						pPVar1 = RPCManager.PhotonView;
						pSVar2 = (Object[])new object[3];
						if (pSVar2 != null) {
							if ((message != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)message, (((pSVar2.obj).klass)._1).element_class), pIVar3 == null)) goto label_0592c568;
							if ((int)pSVar2.Length != 0) {
								pSVar2[0] = (object)message;
								local_48 = target.actorNumber;
								pIVar3 = (object)local_48;
								if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) goto label_0592c568;
								if ((pSVar2.Length & 0xfffffffe) != 0) {
									pSVar2[1] = pIVar3;
									local_50 = DateTime.UtcNow;
									local_40 = local_50.Ticks;
									pIVar3 = (object)local_40;
									if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pSVar2.obj).klass)._1).element_class), pIVar4 == null)) goto label_0592c568;
									if (2 < (uint)pSVar2.Length) {
										pSVar2[2] = pIVar3;
										if (pPVar1 != null) {
											pPVar1.RPC("PrivateChatRPC", target, pSVar2);
											return;
										}
										goto label_0592c577;
									}
								}
							}
							goto label_0592c563;
						}
					}
	label_0592c577: ;
					throw new NullReferenceException();
				}
			}
		}
	label_0592c563: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x58392F0", Offset = "0x58382F0", VA = "0x58392F0")]
	public static void OnPrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$OnPrivateChatRPC): clean
		int iVar1;
		int pmPartnerID;
		HashSet<int> __this;
		DateTime SVar2;
		bool bVar3;
		Player pPVar4;
		Room pPVar5;
		ChatPanel pUVar6;
		DateTime SStack_38;

		SStack_38._dateData = (DateTime)0;
		if ((info.Sender != null) &&(__this = InGameManager.MuteText, __this != null)) {
			bVar3 = __this.Contains(((info.Sender).fields).actorNumber);
			if (bVar3) {
				return;
			}
			pPVar4 = PhotonNetwork.LocalPlayer;
			if (pPVar4 != null) {
				iVar1 = pPVar4.actorNumber;
				pmPartnerID = ((info.Sender).fields).actorNumber;
				SStack_38 = new DateTime(senderTimestamp, 1);
				SVar2._dateData = SStack_38._dateData;
				if (iVar1 == pmPartnerID) {
					pPVar5 = PhotonNetwork.CurrentRoom;
					if (pPVar5 == null) goto label_059395de;
					pPVar4 = pPVar5.GetPlayer(targetID, false);
					SVar2._dateData = SStack_38._dateData;
					if (pPVar4 != null) {
						ChatManager.AddPlayerLine(info.Sender, message, 7, SVar2, true, targetID);
						pUVar6 = ChatManager.GetChatPanel();
						bVar3 = ((Object)pUVar6 != null);
						if (bVar3) {
							if (pUVar6 == null) goto label_059395de;
							if (pUVar6._inPMMode == false) {
								pUVar6.EnterPMMode(pPVar4);
							}
						}
					}
				}
				else if (iVar1 == targetID) {
					ChatManager.AddPlayerLine(info.Sender, message, 7, SVar2, true, pmPartnerID);
					pUVar6 = ChatManager.GetChatPanel();
					bVar3 = ((Object)pUVar6 != null);
					if (bVar3) {
						if (pUVar6 == null) goto label_059395de;
						pUVar6.AddPMPartner(info.Sender);
						if (pUVar6._inPMMode != false) {
							pPVar4 = pUVar6._currentPMTarget;
							if (pPVar4 == null) goto label_059395de;
							if (pPVar4.actorNumber == ((info.Sender).fields).actorNumber) {
								return;
							}
						}
						ChatManager.ShowPMNotification(info.Sender);
					}
				}
				return;
			}
		}
	label_059395de: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x5839850", Offset = "0x5838850", VA = "0x5839850")]
	public static void ResetAllPMState()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ResetAllPMState): 17 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<bool> pSVar3;
		List<int> pSVar4;
		Boolean[] pSVar5;
		Int32[] pSVar6;
		bool bVar8;
		ChatPanel __this;
		GameManagers_ChatManager_StaticFields pGVar9;
		int iVar10;
		Il2CppClass klass;

		__this = ChatManager.GetChatPanel();
		bVar8 = ((Object)__this != null);
		if (bVar8) {
			if (__this == null) goto label_05939a98;
			__this.ResetPMState();
		}
		klass = typeof(ChatManager);
		pGVar9 = typeof(ChatManager).static_fields;
		pSVar3 = pGVar9.PrivateFlags;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pSVar3._size = 0;
			pSVar4 = pGVar9.PMPartnerIDs;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pSVar4._size = 0;
				iVar10 = 0;
				while(true) {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(ChatManager);
					}
					pGVar9 = klass.static_fields;
					if (pGVar9.RawMessages == null) break;
					if (pGVar9.RawMessages._size <= iVar10) {
						return;
					}
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						pGVar9 = typeof(ChatManager).static_fields;
						klass = typeof(ChatManager);
					}
					pSVar3 = pGVar9.PrivateFlags;
					if (pSVar3 == null) break;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = pSVar3._items;
					if (pSVar5 == null) break;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pSVar5.Length) {
						pSVar3._size = uVar2 + 1;
						pSVar5[(int)uVar2] = false;
					}
					else {
						pSVar3.AddWithResize(false);
						pGVar9 = typeof(ChatManager).static_fields;
						klass = typeof(ChatManager);
					}
					pSVar4 = pGVar9.PMPartnerIDs;
					if (pSVar4 == null) break;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = pSVar4._items;
					if (pSVar6 == null) break;
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pSVar6.Length) {
						pSVar4._size = uVar2 + 1;
						pSVar6[(int)uVar2] = -1;
					}
					else {
						pSVar4.AddWithResize(-1);
						klass = typeof(ChatManager);
					}
					iVar10 = iVar10 + 1;
				}
			}
		}
	label_05939a98: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x5839AA0", Offset = "0x5838AA0", VA = "0x5839AA0")]
	public static void SyncPMPartnersOnJoin()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$SyncPMPartnersOnJoin): clean
		List<int> __this;
		bool bVar1;
		int iVar2;
		ChatPanel __this_00;
		GameManagers_ChatManager_StaticFields pGVar3;
		Room pPVar4;
		Player player;
		int index;

		__this_00 = ChatManager.GetChatPanel();
		bVar1 = ((Object)__this_00 == null);
		if (bVar1) {
			return;
		}
		if (__this_00 != null) {
			index = 0;
			__this_00.ResetPMState();
			while(true) {
				pGVar3 = typeof(ChatManager).static_fields;
				if (pGVar3.RawMessages == null) break;
				if (pGVar3.RawMessages._size <= index) {
					return;
				}
				if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(ChatManager).static_fields;
				}
				if (pGVar3.PrivateFlags == null) break;
				bVar1 = (pGVar3.PrivateFlags).get_Item(index);
				if (bVar1) {
					__this = ChatManager.PMPartnerIDs;
					if (__this == null) break;
					iVar2 = __this.get_Item(index);
					pPVar4 = PhotonNetwork.CurrentRoom;
					if (pPVar4 == null) break;
					player = pPVar4.GetPlayer(iVar2, false);
					if (player != null) {
						__this_00.AddPMPartner(player);
					}
				}
				index = index + 1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x5839C80", Offset = "0x5838C80", VA = "0x5839C80")]
	public static string GetPlayerIdentifier(Player player)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$GetPlayerIdentifier): 1 lines keep C-only constructs
		object arg0;
		object arg0_00;
		String pSVar1;
		String str2;
		String* method_00;
		int local_20;
		int local_1c;

		if (player == null) {
			throw new NullReferenceException();
		}
		local_1c = player.actorNumber;
		arg0 = (object)local_1c;
		local_20 = player.actorNumber;
		arg0_00 = (object)local_20;
		method_00 = &"[{0}]";
		pSVar1 = String.Format("[{0}]", arg0_00);
		pSVar1 = ChatManager.GetColorString(pSVar1, 1, false);
		pSVar1 = String.Format("<link=\"{0}\">{1}</link>", arg0, (object)pSVar1);
		str2 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
		pSVar1 = String.Concat(pSVar1, " ", str2);
		return pSVar1;
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x58395F0", Offset = "0x58385F0", VA = "0x58395F0")]
	public static void ShowPMNotification(Player senderPlayer)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ShowPMNotification): 2 lines keep C-only constructs
		int item;
		HashSet<int> pSVar1;
		bool bVar2;
		DateTime value;
		String str0;
		String str1;
		String pSVar3;
		Nullable<DateTime> timestamp;
		Nullable<DateTime> local_48;

		if (senderPlayer == null) {
			return;
		}
		item = senderPlayer.actorNumber;
		pSVar1 = ChatManager.ActivePMNotifications;
		if (pSVar1 != null) {
			bVar2 = pSVar1.Contains(item);
			if (!bVar2) {
				pSVar1 = ChatManager.ActivePMNotifications;
				if (pSVar1 == null) goto label_0593983c;
				pSVar1.Add(item);
			}
			pSVar1 = ChatManager.NotifiedPMs;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains(item);
				if (!bVar2) {
					pSVar1 = ChatManager.NotifiedPMs;
					if (pSVar1 == null) goto label_0593983c;
					pSVar1.Add(item);
					value = DateTime.UtcNow;
					pSVar3 = " (Tab)";
					str0 = ChatManager.GetColorString("New message from ", 3, false);
					str1 = ChatManager.GetPlayerIdentifier(senderPlayer);
					pSVar3 = ChatManager.GetColorString(pSVar3, 3, false);
					pSVar3 = String.Concat(str0, str1, pSVar3);
					local_48._0_8_ = 0;
					local_48.value._dateData = (DateTime)0;
					local_48 = new Nullable<DateTime>(value);
					timestamp._0_8_ = local_48._0_8_ & 0xffffffff;
					timestamp.value._dateData = local_48.value._dateData;
					ChatManager.AddLine(pSVar3, 0, true, timestamp, item, false, false, -1, true);
				}
				return;
			}
		}
	label_0593983c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x5839DE0", Offset = "0x5838DE0", VA = "0x5839DE0")]
	public static bool HasActivePlayerSuggestions()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HasActivePlayerSuggestions): clean
		bool bVar1;
		int iVar2;
		bool bVar3;

		bVar1 = ChatManager.SuggestionState.IsActive;
		if (bVar1) {
			iVar2 = ChatManager.SuggestionState.Type;
			if (iVar2 != 3) {
				if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) {
					iVar2 = ChatManager.SuggestionState.Type;
				}
				bVar3 = iVar2 == 2;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x5839E80", Offset = "0x5838E80", VA = "0x5839E80")]
	public static bool HasActiveSuggestions()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HasActiveSuggestions): clean
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075457f6 == false) {
			Il2CppMethodInitialized_075457f6 = true;
			uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x5839EE0", Offset = "0x5838EE0", VA = "0x5839EE0")]
	public static void RefreshPlayerSuggestions()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$RefreshPlayerSuggestions): clean
		uint uVar1;
		bool bVar2;
		ChatPanel __this;
		String value;
		MethodInfo method_00;
		Il2CppClass pIVar3;

		if (Il2CppMethodInitialized_075457f7 == false) {
			Il2CppMethodInitialized_075457f7 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (uVar1 == 0) {
			bVar2 = ChatManager.HasActivePlayerSuggestions();
			pIVar3 = typeof(ChatManager);
		}
		else {
			bVar2 = ChatManager.HasActivePlayerSuggestions();
			pIVar3 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar3;
		if (bVar2) {
			__this = ChatManager.GetChatPanel();
			bVar2 = ((Object)__this == null);
			if (!bVar2) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				value = __this.GetInputText();
				bVar2 = String.IsNullOrEmpty(value);
				if (bVar2) {
					if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
						ChatManager.ClearLastSuggestions();
						return;
					}
					ChatManager.ClearLastSuggestions();
					return;
				}
				ChatManager.SuggestionState.PartialText = "\xef\xbf\xbf";
				method_00 = (MethodInfo *)"\xef\xbf\xbf";
				ChatManager.HandleTyping(value);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x583A060", Offset = "0x5839060", VA = "0x583A060")]
	private static void ClearPMNotificationFromChat(int playerID)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearPMNotificationFromChat): clean
		uint index;
		List<string> pSVar1;
		List<bool> __this;
		List<int> __this_00;
		bool bVar2;
		int iVar3;
		ChatPanel __this_01;
		Il2CppClass pIVar4;

		if (Il2CppMethodInitialized_075457f8 == false) {
			Il2CppMethodInitialized_075457f8 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_0593a087;
	label_0593a0f2: ;
			pSVar1 = ChatManager.RawMessages;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_0593a0f2;
	label_0593a087: ;
			pSVar1 = ChatManager.RawMessages;
		}
		if (pSVar1 == null) {
	label_0593a24d: ;
			throw new NullReferenceException();
		}
		index = pSVar1._size;
		pIVar4 = typeof(ChatManager);
		while (true) {
			index = index - 1;
			typeof(ChatManager) = (ChatManager)pIVar4;
			if (!(-1 < (int)index)) break;
			__this = ChatManager.NotificationFlags;
			if (__this == null) goto label_0593a24d;
			bVar2 = __this.get_Item(index);
			pIVar4 = typeof(ChatManager);
			if (bVar2) {
				__this_00 = ChatManager.SenderIDs;
				if (__this_00 == null) goto label_0593a24d;
				iVar3 = __this_00.get_Item(index);
				pIVar4 = typeof(ChatManager);
				if (iVar3 == playerID) {
					ChatManager.RemoveLineAt(index);
					pIVar4 = typeof(ChatManager);
				}
			}
		}
		if ((pIVar4._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar4 = typeof(ChatManager);
		}
		else {
			bVar2 = ChatManager.IsChatAvailable();
			pIVar4 = typeof(ChatManager);
		}
		typeof(ChatManager) = (ChatManager)pIVar4;
		if (bVar2) {
			__this_01 = ChatManager.GetChatPanel();
			bVar2 = ((Object)__this_01 != null);
			if (bVar2) {
				if (__this_01 != null) {
					__this_01.Sync();
					return;
				}
				goto label_0593a24d;
			}
		}
		return;
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x583A260", Offset = "0x5839260", VA = "0x583A260")]
	public static void ClearPMNotification(int playerID)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$ClearPMNotification): clean
		HashSet<int> pSVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075457f9 == false) {
			Il2CppMethodInitialized_075457f9 = true;
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) goto label_0593a2d8;
	label_0593a282: ;
			pSVar1 = ChatManager.ActivePMNotifications;
		}
		else {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor != 0) goto label_0593a282;
	label_0593a2d8: ;
			pSVar1 = ChatManager.ActivePMNotifications;
		}
		if (pSVar1 == null) {
	label_0593a35f: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.Contains(playerID);
		if (bVar2) {
			pSVar1 = ChatManager.ActivePMNotifications;
			if (pSVar1 == null) goto label_0593a35f;
			pSVar1.Remove(playerID) ;
		}
		ChatManager.ClearPMNotificationFromChat(playerID);
		return;
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x583A370", Offset = "0x5839370", VA = "0x583A370")]
	public static bool HasActivePMNotification(int playerID)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HasActivePMNotification): clean
		uint uVar1;
		HashSet<int> __this;
		bool bVar2;

		if (Il2CppMethodInitialized_075457fa == false) {
			Il2CppMethodInitialized_075457fa = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = ChatManager.ActivePMNotifications;
		}
		else {
			__this = *(HashSet<int>*)((long)(typeof(ChatManager)).static_fields + 0xa8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		return bVar2;
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x583A410", Offset = "0x5839410", VA = "0x583A410")]
	public static bool HasAnyActivePMNotification()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$HasAnyActivePMNotification): clean
		uint uVar1;
		HashSet<int> pSVar2;

		if (Il2CppMethodInitialized_075457fb == false) {
			Il2CppMethodInitialized_075457fb = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ChatManager.ActivePMNotifications;
		}
		else {
			pSVar2 = *(HashSet<int>*)((long)(typeof(ChatManager)).static_fields + 0xa8);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return 0 < pSVar2._count;
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x5837E70", Offset = "0x5836E70", VA = "0x5837E70")]
	private static void UpdatePartialTextAfterCompletion(string newText, string chosen)
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$UpdatePartialTextAfterCompletion): clean
		int iVar1;
		int iVar2;
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar3;

		if (Il2CppMethodInitialized_075457fc == false) {
			Il2CppMethodInitialized_075457fc = true;
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor != 0) goto label_05937e97;
	label_05937ece: ;
			pGVar3 = typeof(ChatManager.SuggestionState).static_fields;
			iVar1 = pGVar3.Type;
		}
		else {
			if ((typeof(ChatManager.SuggestionState)._2).cctor_finished_or_no_cctor == 0) goto label_05937ece;
	label_05937e97: ;
			pGVar3 = typeof(ChatManager.SuggestionState).static_fields;
			iVar1 = pGVar3.Type;
		}
		if (iVar1 != 3) {
			if (iVar1 == 2) {
				if (newText == null) {
	label_05937fa7: ;
					throw new NullReferenceException();
				}
				iVar2 = newText.LastIndexOf(0x40);
				if (iVar2 < 0) {
					return;
				}
				if (newText._stringLength <= iVar2 + 1) {
					return;
				}
				chosen = newText.Substring(iVar2 + 1);
				if (chosen == null) goto label_05937fa7;
				iVar2 = chosen.IndexOf(0x20);
				if (-1 < iVar2) {
					chosen = chosen.Substring(0, iVar2);
				}
				pGVar3 = typeof(ChatManager.SuggestionState).static_fields;
				goto label_05937f87;
			}
			if (iVar1 != 1) {
				return;
			}
		}
		if (((typeof(ChatManager.SuggestionState))._2).cctor_finished_or_no_cctor == 0 ) {
			pGVar3 = typeof(ChatManager.SuggestionState).static_fields;
		}
	label_05937f87: ;
		pGVar3.PartialText = chosen;
		return;
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x583A4A0", Offset = "0x58394A0", VA = "0x583A4A0")]
	public ChatManager()
	{
		// Lifted from source/cpp/GameManagers/ChatManager.c (GameManagers.ChatManager$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/ChatManager.c.

	// GameManagers.ChatManager$$.cctor: 3 lines keep C-only constructs
	static ChatManager()
	{
		GameManagers_ChatManager_StaticFields pGVar1;
		Regex pSVar2;
		List<string> pSVar3;
		List<int> pSVar4;
		List<T> __this;
		List<bool> pSVar5;
		List<DateTime> __this_00;
		Dictionary<ChatTextColor, string> __this_01;
		Dictionary<string, ChatManager.CommandAttribute> __this_02;
		StringBuilder pSVar6;
		HashSet<int> pSVar7;
		List<ChatManager.ChatPlayerLineData> __this_03;
		List<ChatManager.ChatDisplayLine> __this_04;
		List<long> __this_05;
		Dictionary<string, string> __this_06;
		Dictionary<string, int> __this_07;
		HashSet<string> __this_08;

		if (Il2CppMethodInitialized_075457fd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ChatTextColor_ctor) ;
			Il2CppMethodInitialized_075457fd = true;
		}
		pSVar2 = new Regex("^/(\\w+)(?:\\s+(.*))?$", 8);
		ChatManager.CommandRegex = pSVar2;
		pSVar2 = new Regex("@(\\w*)$", 8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.MentionRegex = pSVar2;
		pSVar2 = new Regex("\\[([^\\]]+)\\]", 8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.ParamRegex = pSVar2;
		pSVar2 = new Regex("<[^>]+>|</[^>]+>", 8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.RichTextPattern = pSVar2;
		pSVar3 = new List<string>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.RawMessages = pSVar3;
		pSVar4 = new List<int>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.SenderIDs = pSVar4;
		__this = new List<ChatTextColor>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.Colors = (List<ChatTextColor>)__this;
		pSVar5 = new List<bool>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.SystemFlags = pSVar5;
		__this_00 = new List<DateTime>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.Timestamps = __this_00;
		pSVar5 = new List<bool>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.SuggestionFlags = pSVar5;
		pSVar5 = new List<bool>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.NotificationFlags = pSVar5;
		pSVar3 = new List<string>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.FeedLines = pSVar3;
		__this_01 = new Dictionary<ChatTextColor, string>() ;
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.ColorTags = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, ChatManager.CommandAttribute>));
		__this_02 = new Dictionary<object, object>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.CommandsCache = __this_02;
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._lineBatchDepth = 0;
		pGVar1._pendingBatchSync = false;
		pSVar6 = new StringBuilder(0x100);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.MessageBuilder = pSVar6;
		pSVar6 = new StringBuilder(8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.TimeBuilder = pSVar6;
		pSVar6 = new StringBuilder(0x100);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.MentionBuilder = pSVar6;
		pSVar7 = new HashSet<int>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.ActivePMNotifications = pSVar7;
		pSVar7 = new HashSet<int>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.NotifiedPMs = pSVar7;
		pSVar5 = new List<bool>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.PrivateFlags = pSVar5;
		pSVar4 = new List<int>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.PMPartnerIDs = pSVar4;
		__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<ChatManager.ChatPlayerLineData>));
		__this_03 = new List<ChatManager.ChatPlayerLineData>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.PlayerLineData = __this_03;
		__this_04 = new List<ChatManager.ChatDisplayLine>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.DisplayLineCache = __this_04;
		__this_05 = new List<long>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.LineIDs = __this_05;
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._preservedInputText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._preservedInputCaretPosition = 0;
		pGVar1._preservedPMTargetActorNumber = -1;
		pGVar1.PreserveInputOnRestart = false;
		__this_06 = new Dictionary<string, string>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._conversationTexts = __this_06;
		__this_07 = new Dictionary<string, int>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1._conversationCarets = __this_07;
		__this_08 = new HashSet<string>();
		pGVar1 = typeof(ChatManager).static_fields;
		pGVar1.CustomCommandKeys = __this_08;
		return;
	}

	// GameManagers.ChatManager.CommandAttribute.<>c$$.cctor: clean
	private static void CommandAttribute_c__cctor()
	{
		object __this;

		__this = new ChatManager.CommandAttribute.c();
		ChatManager.CommandAttribute.c.__9 =(ChatManager.CommandAttribute.c)__this;
		return;
	}

	// GameManagers.ChatManager.CommandAttribute.<>c$$.ctor: clean
	private void CommandAttribute_c__ctor()
	{
		base();
		return;
	}

	// GameManagers.ChatManager.CommandAttribute.<>c$$<.ctor>b__33_0: clean
	private String CommandAttribute_c__ctor_b__33_0(Match m)
	{
		GroupCollection __this_00;
		Group __this_01;
		String pSVar1;

		if (m != null) {
			__this_00 = m.get_Groups();
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item(1);
				if (__this_01 != null) {
					return pSVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// GameManagers.ChatManager.SuggestionState$$.cctor: clean
	private static void SuggestionState__cctor()
	{
		GameManagers_ChatManager_SuggestionState_StaticFields pGVar1;
		List<string> __this;

		ChatManager.SuggestionState.PartialText = "";
		pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
		pGVar1.OriginalText = "";
		pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
		pGVar1.OriginalStartPos = -1;
		pGVar1.OriginalEndPos = -1;
		__this = new List<string>();
		pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
		pGVar1.Suggestions = __this;
		pGVar1 = typeof(ChatManager.SuggestionState).static_fields;
		pGVar1.CurrentIndex = -1;
		pGVar1.Type = 0;
		pGVar1.IsTabCompleting = false;
		pGVar1.OriginalPartialText = "";
		ChatManager.SuggestionState.IsProcessingClick = false;
		return;
	}

	// GameManagers.ChatManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ChatManager.c();
		ChatManager.c.__9 = (ChatManager.c)__this;
		return;
	}

	// GameManagers.ChatManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameManagers.ChatManager.<>c$$<Emote>b__2_0: clean
	private String c__Emote_b__2_0(String e)
	{
		String pSVar1;

		if (e == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	// GameManagers.ChatManager.<>c$$<Help>b__13_0: clean
	private bool c__Help_b__13_0(System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv)
	{
		bool bVar1;
		ChatManager.CommandAttribute command;

		command = kv.value;
		if (command == null) {
			throw new NullReferenceException();
		}
		if (command._ExcludeFromHelp_k__BackingField == false) {
			return true;
		}
		if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
			return bVar1;
		}
		return bVar1;
	}

	// GameManagers.ChatManager.<>c$$<Help>b__13_1: clean
	private String c__Help_b__13_1(System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv)
	{
		return kv.key;
	}

	// GameManagers.ChatManager.<>c$$<Help>b__13_2: clean
	private ChatManager.CommandAttribute c__Help_b__13_2(System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o kv)
	{
		return kv.value;
	}

	// GameManagers.ChatManager.<>c$$<SaveChatHistory>b__14_0: clean
	private String c__SaveChatHistory_b__14_0(String msg, int i)
	{
		uint uVar1;
		List<DateTime> __this_00;
		DateTime timestamp;
		String input;
		String pSVar2;

		if (Il2CppMethodInitialized_07545809 == false) {
			Il2CppMethodInitialized_07545809 = true;
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = ChatManager.Timestamps;
		}
		else {
			__this_00 = *(List<DateTime>*)((long)(typeof(ChatManager)).static_fields + 0x48);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		timestamp = __this_00.get_Item(i);
		input = ChatManager.GetFormattedMessage(msg, timestamp, false);
		pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = Regex.Replace(input, "<.*?>", pSVar2) ;
		return pSVar2;
	}

	// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_0: 4 lines keep C-only constructs
	private int c__HandleTypingInternal_b__139_0(Player a, Player b)
	{
		int iVar1;
		ulong in_RAX;
		ulong uStack_8;

		uStack_8 = in_RAX;
		if ((a == null) ||(uStack_8 = CONCAT44(a.actorNumber, (int)in_RAX), b == null)) {
			throw new NullReferenceException();
		}
		iVar1 = (((long)&uStack_8 + 4)).CompareTo(b.actorNumber);
		return iVar1;
	}

	// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_1: clean
	private String c__HandleTypingInternal_b__139_1(Player p)
	{
		object arg0;
		String pSVar1;
		String pSVar2;
		int iStack_1c;

		if (p == null) {
			throw new NullReferenceException();
		}
		iStack_1c = p.actorNumber;
		arg0 = (object)iStack_1c;
		pSVar1 = String.Format("[{0}]", arg0);
		pSVar1 = ChatManager.GetColorString(pSVar1, 1, false);
		pSVar2 = PhotonExtensions.GetStringProperty(p, PlayerProperty.Name, "");
		pSVar2 = ChatFilter.FilterSizeTag(pSVar2);
		pSVar1 = String.Concat(pSVar1, " ", pSVar2);
		return pSVar1;
	}

	// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_2: clean
	private int c__HandleTypingInternal_b__139_2(System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o a, System_Collections_Generic_KeyValuePair_string__ChatManager_CommandAttribute__o b)
	{
		int iVar1;

		iVar1 = String.Compare(a.key, b.key, 4);
		return iVar1;
	}

	// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_3: 4 lines keep C-only constructs
	private int c__HandleTypingInternal_b__139_3(Player a, Player b)
	{
		int iVar1;
		ulong in_RAX;
		ulong uStack_8;

		uStack_8 = in_RAX;
		if ((a == null) ||(uStack_8 = CONCAT44(a.actorNumber, (int)in_RAX), b == null)) {
			throw new NullReferenceException();
		}
		iVar1 = (((long)&uStack_8 + 4)).CompareTo(b.actorNumber);
		return iVar1;
	}

	// GameManagers.ChatManager.<>c$$<HandleTypingInternal>b__139_4: clean
	private String c__HandleTypingInternal_b__139_4(Player p)
	{
		object arg0;
		String pSVar1;
		String pSVar2;
		int iStack_1c;

		if (p == null) {
			throw new NullReferenceException();
		}
		iStack_1c = p.actorNumber;
		arg0 = (object)iStack_1c;
		pSVar1 = String.Format("[{0}]", arg0);
		pSVar1 = ChatManager.GetColorString(pSVar1, 1, false);
		pSVar2 = PhotonExtensions.GetStringProperty(p, PlayerProperty.Name, "");
		pSVar2 = ChatFilter.FilterSizeTag(pSVar2);
		pSVar1 = String.Concat(pSVar1, " ", pSVar2);
		return pSVar1;
	}

	// GameManagers.ChatManager.<>c__DisplayClass122_0$$.ctor: clean
	private void c__DisplayClass122_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.ChatManager.<>c__DisplayClass122_0$$<ProcessMentions>b__0: 5 lines keep C-only constructs
	private bool c__DisplayClass122_0__ProcessMentions_b__0(Player p)
	{
		bool bVar1;
		bool bVar2;
		ulong in_RAX;
		String a;
		String pSVar3;
		String a_00;
		ChatManager.c__DisplayClass122_0 targetAddress;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (p != null) {
			uStack_28 = CONCAT44(p.actorNumber, (undefined4)uStack_28);
			a = (((long)&uStack_28 + 4)).ToString();
			pSVar3 = PhotonExtensions.GetStringProperty(p, PlayerProperty.Name, "");
			pSVar3 = ChatFilter.FilterSizeTag(pSVar3);
			pSVar3 = MiscExtensions.StripRichText(pSVar3);
			if (pSVar3 != null) {
				a_00 = pSVar3.ToLower();
				pSVar3 = this.mention;
				if (pSVar3 != null) {
					targetAddress = &this.fields;
					pSVar3 = pSVar3.ToLower();
					targetAddress.mention = pSVar3;
					bVar1 = (a == targetAddress.mention);
					if (!bVar1) {
						bVar2 = (a_00 == targetAddress.mention);
					}
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	// GameManagers.ChatManager.<>c__DisplayClass2_0$$.ctor: clean
	private void c__DisplayClass2_0__ctor()
	{
		base();
		return;
	}

	// GameManagers.ChatManager.<>c__DisplayClass2_0$$<Emote>b__1: clean
	private bool c__DisplayClass2_0__Emote_b__1(String e)
	{
		String[] pSVar1;
		bool bVar2;

		pSVar1 = this.args;
		if (pSVar1 != null) {
			if ((pSVar1.Length & 0xfffffffe) == 0) {
				throw new IndexOutOfRangeException();
			}
			if (e != null) {
				bVar2 = String.Equals(e, pSVar1[1], 5);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}
}
