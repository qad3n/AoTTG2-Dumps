// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.ChatManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/ChatManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/ChatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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

[Token(Token = "0x2000317")]
internal class ChatManager : MonoBehaviour
{
	[Token(Token = "0x2000318")]
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
	private class CommandAttribute : Attribute
	{
		[Token(Token = "0x17000217")]
		public string Name
		{
			[Token(Token = "0x6001392")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001393")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000218")]
		public string Description
		{
			[Token(Token = "0x6001394")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001395")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000219")]
		public string Alias
		{
			[Token(Token = "0x6001396")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001397")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700021A")]
		public MethodInfo Command
		{
			[Token(Token = "0x6001398")]
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001399")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700021B")]
		public bool IsAlias
		{
			[Token(Token = "0x600139A")]
			[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600139B")]
			[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700021C")]
		public string[] Parameters
		{
			[Token(Token = "0x600139C")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600139D")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700021D")]
		public AutofillType AutofillType
		{
			[Token(Token = "0x600139E")]
			[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
			[CompilerGenerated]
			get
			{
				return default(AutofillType);
			}
			[Token(Token = "0x600139F")]
			[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700021E")]
		public bool ExcludeFromHelp
		{
			[Token(Token = "0x60013A0")]
			[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60013A1")]
			[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60013A2")]
		[Address(RVA = "0x1E53840", Offset = "0x1E51E40", VA = "0x181E53840")]
		public CommandAttribute(CommandAttribute commandAttribute)
		{
		}

		[Token(Token = "0x60013A3")]
		[Address(RVA = "0x1E538C0", Offset = "0x1E51EC0", VA = "0x181E538C0")]
		public CommandAttribute(string name, string description, AutofillType autofillType = AutofillType.None, bool excludeFromHelp = false)
		{
		}
	}

	[Token(Token = "0x200031A")]
	private class CLCommandAttribute : CommandAttribute
	{
		[Token(Token = "0x1700021F")]
		public UserMethod Callback
		{
			[Token(Token = "0x60013A7")]
			[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x1E41F40", Offset = "0x1E40540", VA = "0x181E41F40")]
		public CLCommandAttribute(string name, string description, UserMethod callback, AutofillType autofillType)
		{
		}
	}

	[Token(Token = "0x200031B")]
	private static class SuggestionState
	{
		[Token(Token = "0x4000FEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static string PartialText;

		[Token(Token = "0x4000FEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static string OriginalText;

		[Token(Token = "0x4000FF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static int OriginalStartPos;

		[Token(Token = "0x4000FF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static int OriginalEndPos;

		[Token(Token = "0x4000FF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static List<string> Suggestions;

		[Token(Token = "0x4000FF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static int CurrentIndex;

		[Token(Token = "0x4000FF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public static SuggestionType Type;

		[Token(Token = "0x4000FF5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static bool IsTabCompleting;

		[Token(Token = "0x4000FF6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static string OriginalPartialText;

		[Token(Token = "0x4000FF7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static bool IsProcessingClick;

		[Token(Token = "0x17000220")]
		public static bool HasSuggestions
		{
			[Token(Token = "0x60013AB")]
			[Address(RVA = "0x1E60750", Offset = "0x1E5ED50", VA = "0x181E60750")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000221")]
		public static bool IsActive
		{
			[Token(Token = "0x60013AC")]
			[Address(RVA = "0x1E607C0", Offset = "0x1E5EDC0", VA = "0x181E607C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x1E60320", Offset = "0x1E5E920", VA = "0x181E60320")]
		public static void Clear()
		{
		}

		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x1E604F0", Offset = "0x1E5EAF0", VA = "0x181E604F0")]
		public static void SetOriginalContext(string original, int startPos, int endPos)
		{
		}
	}

	[Token(Token = "0x200031C")]
	private enum SuggestionType
	{
		[Token(Token = "0x4000FF9")]
		None,
		[Token(Token = "0x4000FFA")]
		Command,
		[Token(Token = "0x4000FFB")]
		Mention,
		[Token(Token = "0x4000FFC")]
		PlayerID
	}

	[Token(Token = "0x200031D")]
	public struct ChatDisplayLine
	{
		[Token(Token = "0x4000FFD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string PlainText;

		[Token(Token = "0x4000FFE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool UsePlayerStyle;

		[Token(Token = "0x4000FFF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string TimeText;

		[Token(Token = "0x4001000")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string IdText;

		[Token(Token = "0x4001001")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string SenderName;

		[Token(Token = "0x4001002")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string BodyText;

		[Token(Token = "0x4001003")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int SenderID;

		[Token(Token = "0x60013AE")]
		[Address(RVA = "0x1E42140", Offset = "0x1E40740", VA = "0x181E42140")]
		public static ChatDisplayLine Plain(string text)
		{
			return default(ChatDisplayLine);
		}
	}

	[Token(Token = "0x200031E")]
	private struct ChatPlayerLineData
	{
		[Token(Token = "0x4001004")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool Active;

		[Token(Token = "0x4001005")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string SenderName;

		[Token(Token = "0x4001006")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string BodyText;
	}

	[Token(Token = "0x2000321")]
	[CompilerGenerated]
	private sealed class _003CReactivateInputAfterClick_003Ed__136 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel chatPanel;

		[Token(Token = "0x4001015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CwasTabCompleting_003E5__2;

		[Token(Token = "0x4001016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private int _003CpreservedIndex_003E5__3;

		[Token(Token = "0x17000222")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60013BF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000223")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60013C1")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013BC")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CReactivateInputAfterClick_003Ed__136(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60013BD")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60013BE")]
		[Address(RVA = "0x1E613F0", Offset = "0x1E5F9F0", VA = "0x181E613F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x1E61670", Offset = "0x1E5FC70", VA = "0x181E61670", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000322")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLeave_003Ed__0 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000224")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60013C5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000225")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60013C7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60013C2")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndLeave_003Ed__0(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60013C3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x1E61F30", Offset = "0x1E60530", VA = "0x181E61F30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x1E61FF0", Offset = "0x1E605F0", VA = "0x181E61FF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000FC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex CommandRegex;

	[Token(Token = "0x4000FC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex MentionRegex;

	[Token(Token = "0x4000FC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Regex ParamRegex;

	[Token(Token = "0x4000FC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Regex RichTextPattern;

	[Token(Token = "0x4000FC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static ChatManager _instance;

	[Token(Token = "0x4000FC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> RawMessages;

	[Token(Token = "0x4000FC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> SenderIDs;

	[Token(Token = "0x4000FC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<ChatTextColor> Colors;

	[Token(Token = "0x4000FC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<bool> SystemFlags;

	[Token(Token = "0x4000FCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static List<DateTime> Timestamps;

	[Token(Token = "0x4000FCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static List<bool> SuggestionFlags;

	[Token(Token = "0x4000FCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static List<bool> NotificationFlags;

	[Token(Token = "0x4000FCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static List<string> FeedLines;

	[Token(Token = "0x4000FCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static Dictionary<ChatTextColor, string> ColorTags;

	[Token(Token = "0x4000FCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<string, CommandAttribute> CommandsCache;

	[Token(Token = "0x4000FD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static string LastException;

	[Token(Token = "0x4000FD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static int LastExceptionCount;

	[Token(Token = "0x4000FD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private static int _lineBatchDepth;

	[Token(Token = "0x4000FD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static bool _pendingBatchSync;

	[Token(Token = "0x4000FD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly StringBuilder MessageBuilder;

	[Token(Token = "0x4000FD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static readonly StringBuilder TimeBuilder;

	[Token(Token = "0x4000FD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static readonly StringBuilder MentionBuilder;

	[Token(Token = "0x4000FD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static readonly HashSet<int> ActivePMNotifications;

	[Token(Token = "0x4000FD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static readonly HashSet<int> NotifiedPMs;

	[Token(Token = "0x4000FD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public static List<bool> PrivateFlags;

	[Token(Token = "0x4000FDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public static List<int> PMPartnerIDs;

	[Token(Token = "0x4000FDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static readonly List<ChatPlayerLineData> PlayerLineData;

	[Token(Token = "0x4000FDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static string _preservedInputText;

	[Token(Token = "0x4000FDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private static int _preservedInputCaretPosition;

	[Token(Token = "0x4000FDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private static int _preservedPMTargetActorNumber;

	[Token(Token = "0x4000FDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public static bool PreserveInputOnRestart;

	[Token(Token = "0x4000FE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private static readonly Dictionary<string, string> _conversationTexts;

	[Token(Token = "0x4000FE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private static readonly Dictionary<string, int> _conversationCarets;

	[Token(Token = "0x4000FE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private static readonly HashSet<string> CustomCommandKeys;

	[Token(Token = "0x17000216")]
	public static int MaxLines
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x1E53740", Offset = "0x1E51D40", VA = "0x181E53740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x1E52D00", Offset = "0x1E51300", VA = "0x181E52D00")]
	[IteratorStateMachine(typeof(_003CWaitAndLeave_003Ed__0))]
	private IEnumerator WaitAndLeave()
	{
		return null;
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x1E467F0", Offset = "0x1E44DF0", VA = "0x181E467F0")]
	[Command("hood", "/hood: Toggles the hood of your equipped cloak.", AutofillType.None, false)]
	private static void HandleHoodToggle(string[] args)
	{
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x1E44880", Offset = "0x1E42E80", VA = "0x181E44880")]
	[Command("clear", "/clear: Clears the chat window.", AutofillType.None, false, Alias = "c")]
	private static void Clear(string[] args)
	{
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x1E4FFB0", Offset = "0x1E4E5B0", VA = "0x181E4FFB0")]
	[Command("reviveall", "/reviveall: Revive all players.", AutofillType.None, false, Alias = "rva")]
	private static void ReviveAll(string[] args)
	{
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x1E50130", Offset = "0x1E4E730", VA = "0x181E50130")]
	[Command("revive", "/revive [ID]: Revives the player with ID", AutofillType.PlayerID, false, Alias = "rv")]
	private static void Revive(string[] args)
	{
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x1E4C3E0", Offset = "0x1E4A9E0", VA = "0x181E4C3E0")]
	[Command("mute", "/mute [ID]: Mute player with ID.", AutofillType.PlayerID, false)]
	private static void Mute(string[] args)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x1E524C0", Offset = "0x1E50AC0", VA = "0x181E524C0")]
	[Command("unmute", "/unmute [ID]: Unmute player with ID.", AutofillType.PlayerID, false)]
	private static void Unmute(string[] args)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x1E4C4B0", Offset = "0x1E4AAB0", VA = "0x181E4C4B0")]
	[Command("nextsong", "/nextsong: Play next song in playlist.", AutofillType.None, false)]
	private static void NextSong(string[] args)
	{
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x1E4D120", Offset = "0x1E4B720", VA = "0x181E4D120")]
	[Command("pause", "/pause: Pause the multiplayer game.", AutofillType.None, false)]
	private static void Pause(string[] args)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x1E52590", Offset = "0x1E50B90", VA = "0x181E52590")]
	[Command("unpause", "/unpause: Unpause the multiplayer game.", AutofillType.None, false)]
	private static void Unpause(string[] args)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x1E4FCA0", Offset = "0x1E4E2A0", VA = "0x181E4FCA0")]
	[Command("resetkd", "/resetkd: Reset your own stats.", AutofillType.None, false)]
	private static void Resetkd(string[] args)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x1E4FEA0", Offset = "0x1E4E4A0", VA = "0x181E4FEA0")]
	[Command("resetkdall", "/resetkdall: Reset all player stats.", AutofillType.None, false)]
	private static void Resetkdall(string[] args)
	{
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x1E4A590", Offset = "0x1E48B90", VA = "0x181E4A590")]
	[Command("help", "/help [page(optional)]: Displays command usage.", AutofillType.None, false)]
	private static void Help(string[] args)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x1E503B0", Offset = "0x1E4E9B0", VA = "0x181E503B0")]
	[Command("savechat", "/savechat: Save chat history to Aottg2/Chat folder", AutofillType.None, false)]
	private static void SaveChatHistory(string[] args)
	{
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x1E4CBC0", Offset = "0x1E4B1C0", VA = "0x181E4CBC0")]
	[Command("pm", "/pm [ID]: Send a private message to player with ID", AutofillType.PlayerID, false)]
	private static void PM(string[] args)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x1E4FF30", Offset = "0x1E4E530", VA = "0x181E4FF30")]
	[Command("restart", "/restart: Restarts the game.", AutofillType.None, false, Alias = "r")]
	private static void Restart(string[] args)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x1E448C0", Offset = "0x1E42EC0", VA = "0x181E448C0")]
	[Command("closelobby", "/closelobby: Kicks all players and ends the lobby.", AutofillType.None, false)]
	private static void CloseLobby(string[] args)
	{
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x1E4B9A0", Offset = "0x1E49FA0", VA = "0x181E4B9A0")]
	[Command("kick", "/kick [ID]: Kick the player with ID", AutofillType.PlayerID, false)]
	private static void Kick(string[] args)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x1E43380", Offset = "0x1E41980", VA = "0x181E43380")]
	[Command("ban", "/ban [ID]: Ban the player with ID", AutofillType.PlayerID, false)]
	private static void Ban(string[] args)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x1E4AE10", Offset = "0x1E49410", VA = "0x181E4AE10")]
	[Command("infoban", "/infoban [ID]: Ban the player with the legacy infoban method.", AutofillType.PlayerID, false)]
	private static void InfoBan(string[] args)
	{
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x1E4ACE0", Offset = "0x1E492E0", VA = "0x181E4ACE0")]
	[Command("ipban", "/ipban [ID]: Room IP-ban the player with ID.", AutofillType.PlayerID, false)]
	private static void IPBan(string[] args)
	{
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x1E4E7E0", Offset = "0x1E4CDE0", VA = "0x181E4E7E0")]
	[Command("regionban", "/regionban [ID]: Region-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionBan(string[] args)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x1E4E910", Offset = "0x1E4CF10", VA = "0x181E4E910")]
	[Command("regionipban", "/regionipban [ID]: Region IP-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionIPBan(string[] args)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x1E51E90", Offset = "0x1E50490", VA = "0x181E51E90")]
	[Command("unban", "/unban [session|ip] [target] [optional reason]: Room unban by session or ip target.", AutofillType.None, false)]
	private static void Unban(string[] args)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x1E4EA40", Offset = "0x1E4D040", VA = "0x181E4EA40")]
	[Command("regionunban", "/regionunban [targetId] [optional reason]: Region unban by target id.", AutofillType.None, true)]
	private static void RegionUnban(string[] args)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x1E4D3B0", Offset = "0x1E4B9B0", VA = "0x181E4D3B0")]
	private static void PrintModerationStatus(string text)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x1E4B3C0", Offset = "0x1E499C0", VA = "0x181E4B3C0")]
	private static bool IsAdminOrModerator()
	{
		return default(bool);
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x1E43820", Offset = "0x1E41E20", VA = "0x181E43820")]
	private static bool CanUseRoomModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x1E43750", Offset = "0x1E41D50", VA = "0x181E43750")]
	private static bool CanUseRegionModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x1E51530", Offset = "0x1E4FB30", VA = "0x181E51530")]
	private static bool ShouldIncludeHiddenCommandInHelp(CommandAttribute command)
	{
		return default(bool);
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x1E45A50", Offset = "0x1E44050", VA = "0x181E45A50")]
	private static string GetOptionalReason(string[] args, int startIndex)
	{
		return null;
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x1E43920", Offset = "0x1E41F20", VA = "0x181E43920")]
	private static bool CanVoteKick(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x1E4BF20", Offset = "0x1E4A520", VA = "0x181E4BF20")]
	[Command("maxplayers", "/maxplayers [num]: Sets room's max player count.", AutofillType.None, false)]
	private static void MaxPlayers(string[] args)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x1E4B7E0", Offset = "0x1E49DE0", VA = "0x181E4B7E0")]
	public static void KickPlayer(Player player, bool print = true, bool ban = false, string reason = ".")
	{
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x1E52A10", Offset = "0x1E51010", VA = "0x181E52A10")]
	public static void VoteKickPlayer(Player voter, Player target)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x1E4D2A0", Offset = "0x1E4B8A0", VA = "0x181E4D2A0")]
	public static void PreserveInputText(string text, int caretPosition)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x1E45F20", Offset = "0x1E44520", VA = "0x181E45F20")]
	public static (string, int, int) GetPreservedInputWithCaret()
	{
		return default((string, int, int));
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x1E4D350", Offset = "0x1E4B950", VA = "0x181E4D350")]
	public static void PreservePMTargetActorNumber(int actorNumber)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x1E50880", Offset = "0x1E4EE80", VA = "0x181E50880")]
	public static void SaveConversation(string key, string text, int caretPos)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x1E44F80", Offset = "0x1E43580", VA = "0x181E44F80")]
	public static (string, int) GetConversation(string key)
	{
		return default((string, int));
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x1E43C40", Offset = "0x1E42240", VA = "0x181E43C40")]
	public static void ClearConversation(string key)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x1E4FBD0", Offset = "0x1E4E1D0", VA = "0x181E4FBD0")]
	public static void ResetNotifiedForPM(int pmId)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x1E4EC30", Offset = "0x1E4D230", VA = "0x181E4EC30")]
	public static bool RegisterCustomCommand(string name, UserMethod callback, string description, AutofillType autofillType = AutofillType.None)
	{
		return default(bool);
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x1E43D00", Offset = "0x1E42300", VA = "0x181E43D00")]
	public static void ClearCustomCommands()
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x1E4CE30", Offset = "0x1E4B430", VA = "0x181E4CE30")]
	public static string[] ParseCommandArgs(string text)
	{
		return null;
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x1E44C40", Offset = "0x1E43240", VA = "0x181E44C40")]
	private static int GetAutofillTokenStart(string input, int firstSpaceIndex, AutofillType autofillType)
	{
		return default(int);
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x1E4B030", Offset = "0x1E49630", VA = "0x181E4B030")]
	public static void Init()
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x1E4FC50", Offset = "0x1E4E250", VA = "0x181E4FC50")]
	public static void Reset()
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x1E444A0", Offset = "0x1E42AA0", VA = "0x181E444A0")]
	public static void Clear()
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x1E4B470", Offset = "0x1E49A70", VA = "0x181E4B470")]
	public static bool IsChatActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x1E4B520", Offset = "0x1E49B20", VA = "0x181E4B520")]
	public static bool IsChatAvailable()
	{
		return default(bool);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x1E50A00", Offset = "0x1E4F000", VA = "0x181E50A00")]
	public static void SendChatAll(string message, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x1E50DA0", Offset = "0x1E4F3A0", VA = "0x181E50DA0")]
	public static void SendPlayerChatAll(string message)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x1E50BD0", Offset = "0x1E4F1D0", VA = "0x181E50BD0")]
	public static void SendChat(string message, Player player, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x1E4C550", Offset = "0x1E4AB50", VA = "0x181E4C550")]
	public static void OnChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x1E4C7C0", Offset = "0x1E4ADC0", VA = "0x181E4C7C0")]
	public static void OnPlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x1E4C4C0", Offset = "0x1E4AAC0", VA = "0x181E4C4C0")]
	public static void OnAnnounceRPC(string message)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x1E42DF0", Offset = "0x1E413F0", VA = "0x181E42DF0")]
	public static void AddLine(string message, [Optional][DefaultParameterValue(0)] ChatTextColor color, [Optional][DefaultParameterValue(false)] bool isSystem, [Optional] DateTime? timestamp, int senderID = -1, bool isSuggestion = false, bool isPM = false, int pmPartnerID = -1, bool isNotification = false)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x1E42FD0", Offset = "0x1E415D0", VA = "0x181E42FD0")]
	private static void AddPlayerLine(Player sender, string message, ChatTextColor bodyColor, DateTime timestamp, bool isPM, int pmPartnerID)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x1E42700", Offset = "0x1E40D00", VA = "0x181E42700")]
	private static void AddLineInternal(string formattedMessage, ChatTextColor color, bool isSystem, DateTime messageTime, int senderID, bool isSuggestion, bool isPM, int pmPartnerID, bool isNotification, ChatPlayerLineData playerLineData)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x1E434B0", Offset = "0x1E41AB0", VA = "0x181E434B0")]
	private static void BeginLineBatch()
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x1E44A50", Offset = "0x1E43050", VA = "0x181E44A50")]
	private static void EndLineBatch()
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x1E4EE80", Offset = "0x1E4D480", VA = "0x181E4EE80")]
	private static void RemoveLineAt(int index)
	{
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x1E421A0", Offset = "0x1E407A0", VA = "0x181E421A0")]
	public static void AddException(string line)
	{
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x1E4F490", Offset = "0x1E4DA90", VA = "0x181E4F490")]
	private static void ReplaceLastLine(string message, ChatTextColor color, bool isSystem)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x1E45740", Offset = "0x1E43D40", VA = "0x181E45740")]
	public static string GetFormattedMessage(string message, DateTime timestamp, bool isSuggestion = false)
	{
		return null;
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x1E450D0", Offset = "0x1E436D0", VA = "0x181E450D0")]
	public static ChatDisplayLine GetDisplayLine(int index)
	{
		return default(ChatDisplayLine);
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x1E46040", Offset = "0x1E44640", VA = "0x181E46040")]
	private static string GetTimestampPrefix(DateTime timestamp, bool isSuggestion)
	{
		return null;
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x1E424A0", Offset = "0x1E40AA0", VA = "0x181E424A0")]
	public static void AddFeed(string line)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x1E4B660", Offset = "0x1E49C60", VA = "0x181E4B660")]
	public static void IsTalking(Player player, bool isSpeaking)
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x1E4BB90", Offset = "0x1E4A190", VA = "0x181E4BB90")]
	public static void LoadTheme()
	{
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x1E46960", Offset = "0x1E44F60", VA = "0x181E46960")]
	public static void HandleInput(string input)
	{
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x1E4D500", Offset = "0x1E4BB00", VA = "0x181E4D500")]
	private static string ProcessMentions(string message)
	{
		return null;
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	private static string FormatChatMessage(string message)
	{
		return null;
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x1E52710", Offset = "0x1E50D10", VA = "0x181E52710")]
	public static void UpdateChatPanel()
	{
	}

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x1E46340", Offset = "0x1E44940", VA = "0x181E46340")]
	private static void HandleCommand(string[] args)
	{
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x1E4C130", Offset = "0x1E4A730", VA = "0x181E4C130")]
	public static void MutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x1E52130", Offset = "0x1E50730", VA = "0x181E52130")]
	public static void UnmutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x1E513C0", Offset = "0x1E4F9C0", VA = "0x181E513C0")]
	public static void SetPlayerVolume(Player player, float volume)
	{
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x1E45DA0", Offset = "0x1E443A0", VA = "0x181E45DA0")]
	private static Player GetPlayer(string stringID)
	{
		return null;
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x1E45C60", Offset = "0x1E44260", VA = "0x181E45C60")]
	public static Player GetPlayer(string[] args)
	{
		return null;
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x1E43B70", Offset = "0x1E42170", VA = "0x181E43B70")]
	private static bool CheckMC()
	{
		return default(bool);
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x1E44C80", Offset = "0x1E43280", VA = "0x181E44C80")]
	private static ChatPanel GetChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x1E45610", Offset = "0x1E43C10", VA = "0x181E45610")]
	private static FeedPanel GetFeedPanel()
	{
		return null;
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x1E46290", Offset = "0x1E44890", VA = "0x181E46290")]
	private static VoiceChatPanel GetVoiceChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x1E459A0", Offset = "0x1E43FA0", VA = "0x181E459A0")]
	private static KDRPanel GetKDRPanel()
	{
		return null;
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x1E458B0", Offset = "0x1E43EB0", VA = "0x181E458B0")]
	public static string GetIDString(int id, bool includeMC = false, bool myPlayer = false)
	{
		return null;
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x1E44DB0", Offset = "0x1E433B0", VA = "0x181E44DB0")]
	public static string GetColorString(string str, ChatTextColor color, bool bold = false)
	{
		return null;
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x1E52910", Offset = "0x1E50F10", VA = "0x181E52910")]
	private void Update()
	{
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x1E4A300", Offset = "0x1E48900", VA = "0x181E4A300")]
	public static void HandleTyping(string input)
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x1E47440", Offset = "0x1E45A40", VA = "0x181E47440")]
	private static void HandleTypingInternal(string input)
	{
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x1E51610", Offset = "0x1E4FC10", VA = "0x181E51610")]
	private static void ShowCommandSuggestions(List<string> suggestions)
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x1E46FA0", Offset = "0x1E455A0", VA = "0x181E46FA0")]
	public static void HandleTabComplete()
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x1E46CA0", Offset = "0x1E452A0", VA = "0x181E46CA0")]
	public static void HandleSuggestionClick(int suggestionIndex)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x1E4DA30", Offset = "0x1E4C030", VA = "0x181E4DA30")]
	[IteratorStateMachine(typeof(_003CReactivateInputAfterClick_003Ed__136))]
	private IEnumerator ReactivateInputAfterClick(ChatPanel chatPanel)
	{
		return null;
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x1E43560", Offset = "0x1E41B60", VA = "0x181E43560")]
	private static string BuildCompletedText(string currentInput, string suggestion)
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x1E4E720", Offset = "0x1E4CD20", VA = "0x181E4E720")]
	private static void RefreshSuggestionDisplay()
	{
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x1E4DC20", Offset = "0x1E4C220", VA = "0x181E4DC20")]
	private static void RefreshSuggestionDisplayInternal()
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x1E4F390", Offset = "0x1E4D990", VA = "0x181E4F390")]
	private static bool RemoveSuggestionLines()
	{
		return default(bool);
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x1E43EE0", Offset = "0x1E424E0", VA = "0x181E43EE0")]
	public static void ClearLastSuggestions()
	{
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x1E44BC0", Offset = "0x1E431C0", VA = "0x181E44BC0")]
	public static void ForceSuggestionRefresh()
	{
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x1E50F40", Offset = "0x1E4F540", VA = "0x181E50F40")]
	public static void SendPrivateMessage(Player target, string message)
	{
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x1E4C900", Offset = "0x1E4AF00", VA = "0x181E4C900")]
	public static void OnPrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x1E4F960", Offset = "0x1E4DF60", VA = "0x181E4F960")]
	public static void ResetAllPMState()
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x1E51C90", Offset = "0x1E50290", VA = "0x181E51C90")]
	public static void SyncPMPartnersOnJoin()
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x1E45AF0", Offset = "0x1E440F0", VA = "0x181E45AF0")]
	public static string GetPlayerIdentifier(Player player)
	{
		return null;
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x1E51880", Offset = "0x1E4FE80", VA = "0x181E51880")]
	public static void ShowPMNotification(Player senderPlayer)
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x1E4A440", Offset = "0x1E48A40", VA = "0x181E4A440")]
	public static bool HasActivePlayerSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x1E4A4E0", Offset = "0x1E48AE0", VA = "0x181E4A4E0")]
	public static bool HasActiveSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x1E4DAA0", Offset = "0x1E4C0A0", VA = "0x181E4DAA0")]
	public static void RefreshPlayerSuggestions()
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x1E441F0", Offset = "0x1E427F0", VA = "0x181E441F0")]
	private static void ClearPMNotificationFromChat(int playerID)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x1E443B0", Offset = "0x1E429B0", VA = "0x181E443B0")]
	public static void ClearPMNotification(int playerID)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x1E4A3C0", Offset = "0x1E489C0", VA = "0x181E4A3C0")]
	public static bool HasActivePMNotification(int playerID)
	{
		return default(bool);
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x1E4A520", Offset = "0x1E48B20", VA = "0x181E4A520")]
	public static bool HasAnyActivePMNotification()
	{
		return default(bool);
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x1E527D0", Offset = "0x1E50DD0", VA = "0x181E527D0")]
	private static void UpdatePartialTextAfterCompletion(string newText, string chosen)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ChatManager()
	{
	}
}
