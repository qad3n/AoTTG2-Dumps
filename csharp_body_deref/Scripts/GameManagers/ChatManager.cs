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
				return null;
			}
			[Token(Token = "0x6001608")]
			[Address(RVA = "0x583ADB0", Offset = "0x5839DB0", VA = "0x583ADB0")]
			[CompilerGenerated]
			private set
			{
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
				return null;
			}
			[Token(Token = "0x600160A")]
			[Address(RVA = "0x583ADD0", Offset = "0x5839DD0", VA = "0x583ADD0")]
			[CompilerGenerated]
			private set
			{
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
				return null;
			}
			[Token(Token = "0x600160C")]
			[Address(RVA = "0x583ADF0", Offset = "0x5839DF0", VA = "0x583ADF0")]
			[CompilerGenerated]
			set
			{
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
				return null;
			}
			[Token(Token = "0x600160E")]
			[Address(RVA = "0x583AE10", Offset = "0x5839E10", VA = "0x583AE10")]
			[CompilerGenerated]
			set
			{
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
				return default(bool);
			}
			[Token(Token = "0x6001610")]
			[Address(RVA = "0x583AE30", Offset = "0x5839E30", VA = "0x583AE30")]
			[CompilerGenerated]
			set
			{
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
				return null;
			}
			[Token(Token = "0x6001612")]
			[Address(RVA = "0x583AE50", Offset = "0x5839E50", VA = "0x583AE50")]
			[CompilerGenerated]
			private set
			{
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
				return default(AutofillType);
			}
			[Token(Token = "0x6001614")]
			[Address(RVA = "0x583AE70", Offset = "0x5839E70", VA = "0x583AE70")]
			[CompilerGenerated]
			set
			{
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
				return default(bool);
			}
			[Token(Token = "0x6001616")]
			[Address(RVA = "0x583AE90", Offset = "0x5839E90", VA = "0x583AE90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001617")]
		[Address(RVA = "0x583AEA0", Offset = "0x5839EA0", VA = "0x583AEA0")]
		public CommandAttribute(CommandAttribute commandAttribute)
		{
		}

		[Token(Token = "0x6001618")]
		[Address(RVA = "0x583AF20", Offset = "0x5839F20", VA = "0x583AF20")]
		public CommandAttribute(string name, string description, AutofillType autofillType = AutofillType.None, bool excludeFromHelp = false)
		{
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
				return null;
			}
		}

		[Token(Token = "0x600161D")]
		[Address(RVA = "0x583B1F0", Offset = "0x583A1F0", VA = "0x583B1F0")]
		public CLCommandAttribute(string name, string description, UserMethod callback, AutofillType autofillType)
		{
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
				return default(bool);
			}
		}

		[Token(Token = "0x17000268")]
		public static bool IsActive
		{
			[Token(Token = "0x6001621")]
			[Address(RVA = "0x583B490", Offset = "0x583A490", VA = "0x583B490")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600161E")]
		[Address(RVA = "0x583B220", Offset = "0x583A220", VA = "0x583B220")]
		public static void Clear()
		{
		}

		[Token(Token = "0x600161F")]
		[Address(RVA = "0x583B380", Offset = "0x583A380", VA = "0x583B380")]
		public static void SetOriginalContext(string original, int startPos, int endPos)
		{
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
			return default(ChatDisplayLine);
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6001634")]
		[Address(RVA = "0x583BF40", Offset = "0x583AF40", VA = "0x583BF40")]
		[DebuggerHidden]
		public _003CReactivateInputAfterClick_003Ed__143(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001635")]
		[Address(RVA = "0x583BF60", Offset = "0x583AF60", VA = "0x583BF60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001636")]
		[Address(RVA = "0x583BF70", Offset = "0x583AF70", VA = "0x583BF70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001638")]
		[Address(RVA = "0x583C1A0", Offset = "0x583B1A0", VA = "0x583C1A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x600163A")]
		[Address(RVA = "0x583C1F0", Offset = "0x583B1F0", VA = "0x583C1F0")]
		[DebuggerHidden]
		public _003CWaitAndLeave_003Ed__0(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600163B")]
		[Address(RVA = "0x583C210", Offset = "0x583B210", VA = "0x583C210", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600163C")]
		[Address(RVA = "0x583C220", Offset = "0x583B220", VA = "0x583C220", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600163E")]
		[Address(RVA = "0x583C500", Offset = "0x583B500", VA = "0x583C500", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
			return default(int);
		}
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x5828EC0", Offset = "0x5827EC0", VA = "0x5828EC0")]
	[IteratorStateMachine(typeof(_003CWaitAndLeave_003Ed__0))]
	private IEnumerator WaitAndLeave()
	{
		return null;
	}

	[Token(Token = "0x600158F")]
	[Address(RVA = "0x5828F00", Offset = "0x5827F00", VA = "0x5828F00")]
	[Command("hood", "/hood: Toggles the hood of your equipped cloak.", AutofillType.None, false)]
	private static void HandleHoodToggle(string[] args)
	{
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x5829200", Offset = "0x5828200", VA = "0x5829200")]
	[Command("emote", "/emote [name|list]: Plays an emote on your current character, or lists available emotes.", AutofillType.None, false)]
	private static void Emote(string[] args)
	{
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x58296D0", Offset = "0x58286D0", VA = "0x58296D0")]
	[Command("clear", "/clear: Clears the chat window.", AutofillType.None, false, Alias = "c")]
	private static void Clear(string[] args)
	{
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x5829B10", Offset = "0x5828B10", VA = "0x5829B10")]
	[Command("reviveall", "/reviveall: Revive all players.", AutofillType.None, false, Alias = "rva")]
	private static void ReviveAll(string[] args)
	{
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x5829F00", Offset = "0x5828F00", VA = "0x5829F00")]
	[Command("revive", "/revive [ID]: Revives the player with ID", AutofillType.PlayerID, false, Alias = "rv")]
	private static void Revive(string[] args)
	{
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x582A470", Offset = "0x5829470", VA = "0x582A470")]
	[Command("mute", "/mute [ID]: Mute player with ID.", AutofillType.PlayerID, false)]
	private static void Mute(string[] args)
	{
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x582A830", Offset = "0x5829830", VA = "0x582A830")]
	[Command("unmute", "/unmute [ID]: Unmute player with ID.", AutofillType.PlayerID, false)]
	private static void Unmute(string[] args)
	{
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x582ACE0", Offset = "0x5829CE0", VA = "0x582ACE0")]
	[Command("nextsong", "/nextsong: Play next song in playlist.", AutofillType.None, false)]
	private static void NextSong(string[] args)
	{
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x582ACF0", Offset = "0x5829CF0", VA = "0x582ACF0")]
	[Command("pause", "/pause: Pause the multiplayer game.", AutofillType.None, false)]
	private static void Pause(string[] args)
	{
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x582ADD0", Offset = "0x5829DD0", VA = "0x582ADD0")]
	[Command("unpause", "/unpause: Unpause the multiplayer game.", AutofillType.None, false)]
	private static void Unpause(string[] args)
	{
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x582AEB0", Offset = "0x5829EB0", VA = "0x582AEB0")]
	[Command("resetkd", "/resetkd: Reset your own stats.", AutofillType.None, false)]
	private static void Resetkd(string[] args)
	{
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x582AF30", Offset = "0x5829F30", VA = "0x582AF30")]
	[Command("resetkdall", "/resetkdall: Reset all player stats.", AutofillType.None, false)]
	private static void Resetkdall(string[] args)
	{
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x582B040", Offset = "0x582A040", VA = "0x582B040")]
	[Command("help", "/help [page(optional)]: Displays command usage.", AutofillType.None, false)]
	private static void Help(string[] args)
	{
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x582B910", Offset = "0x582A910", VA = "0x582B910")]
	[Command("savechat", "/savechat: Save chat history to Aottg2/Chat folder", AutofillType.None, false)]
	private static void SaveChatHistory(string[] args)
	{
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x582BE40", Offset = "0x582AE40", VA = "0x582BE40")]
	[Command("pm", "/pm [ID]: Send a private message to player with ID", AutofillType.PlayerID, false)]
	private static void PM(string[] args)
	{
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x582C580", Offset = "0x582B580", VA = "0x582C580")]
	[Command("restart", "/restart: Restarts the game.", AutofillType.None, false, Alias = "r")]
	private static void Restart(string[] args)
	{
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x582C610", Offset = "0x582B610", VA = "0x582C610")]
	[Command("closelobby", "/closelobby: Kicks all players and ends the lobby.", AutofillType.None, false)]
	private static void CloseLobby(string[] args)
	{
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x582C9C0", Offset = "0x582B9C0", VA = "0x582C9C0")]
	[Command("kick", "/kick [ID]: Kick the player with ID", AutofillType.PlayerID, false)]
	private static void Kick(string[] args)
	{
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x582CD50", Offset = "0x582BD50", VA = "0x582CD50")]
	[Command("ban", "/ban [ID]: Ban the player with ID", AutofillType.PlayerID, false)]
	private static void Ban(string[] args)
	{
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x582D020", Offset = "0x582C020", VA = "0x582D020")]
	[Command("infoban", "/infoban [ID]: Ban the player with the legacy infoban method.", AutofillType.PlayerID, false)]
	private static void InfoBan(string[] args)
	{
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x582D240", Offset = "0x582C240", VA = "0x582D240")]
	[Command("ipban", "/ipban [ID]: Room IP-ban the player with ID.", AutofillType.PlayerID, false)]
	private static void IPBan(string[] args)
	{
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x582D390", Offset = "0x582C390", VA = "0x582D390")]
	[Command("regionban", "/regionban [ID]: Region-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionBan(string[] args)
	{
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x582D5A0", Offset = "0x582C5A0", VA = "0x582D5A0")]
	[Command("regionipban", "/regionipban [ID]: Region IP-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionIPBan(string[] args)
	{
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x582D6F0", Offset = "0x582C6F0", VA = "0x582D6F0")]
	[Command("unban", "/unban [session|ip] [target] [optional reason]: Room unban by session or ip target.", AutofillType.None, false)]
	private static void Unban(string[] args)
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x582D990", Offset = "0x582C990", VA = "0x582D990")]
	[Command("regionunban", "/regionunban [targetId] [optional reason]: Region unban by target id.", AutofillType.None, true)]
	private static void RegionUnban(string[] args)
	{
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x582DB50", Offset = "0x582CB50", VA = "0x582DB50")]
	private static void PrintModerationStatus(string text)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x582DC70", Offset = "0x582CC70", VA = "0x582DC70")]
	private static bool IsAdminOrModerator()
	{
		return default(bool);
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x582CEA0", Offset = "0x582BEA0", VA = "0x582CEA0")]
	private static bool CanUseRoomModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x582D4E0", Offset = "0x582C4E0", VA = "0x582D4E0")]
	private static bool CanUseRegionModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x582DD30", Offset = "0x582CD30", VA = "0x582DD30")]
	private static bool ShouldIncludeHiddenCommandInHelp(CommandAttribute command)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x582CF80", Offset = "0x582BF80", VA = "0x582CF80")]
	private static string GetOptionalReason(string[] args, int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x582CBC0", Offset = "0x582BBC0", VA = "0x582CBC0")]
	private static bool CanVoteKick(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x582DE20", Offset = "0x582CE20", VA = "0x582DE20")]
	[Command("maxplayers", "/maxplayers [num]: Sets room's max player count.", AutofillType.None, false)]
	private static void MaxPlayers(string[] args)
	{
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x582C7C0", Offset = "0x582B7C0", VA = "0x582C7C0")]
	public static void KickPlayer(Player player, bool print = true, bool ban = false, string reason = ".")
	{
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x582DFB0", Offset = "0x582CFB0", VA = "0x582DFB0")]
	public static void VoteKickPlayer(Player voter, Player target)
	{
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x582E390", Offset = "0x582D390", VA = "0x582E390")]
	public static void PreserveInputText(string text, int caretPosition)
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x582E450", Offset = "0x582D450", VA = "0x582E450")]
	public static (string, int, int) GetPreservedInputWithCaret()
	{
		return default((string, int, int));
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x582E540", Offset = "0x582D540", VA = "0x582E540")]
	public static void PreservePMTargetActorNumber(int actorNumber)
	{
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x582E5A0", Offset = "0x582D5A0", VA = "0x582E5A0")]
	public static void SaveConversation(string key, string text, int caretPos)
	{
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x582E700", Offset = "0x582D700", VA = "0x582E700")]
	public static (string, int) GetConversation(string key)
	{
		return default((string, int));
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x582E850", Offset = "0x582D850", VA = "0x582E850")]
	public static void ClearConversation(string key)
	{
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x582E930", Offset = "0x582D930", VA = "0x582E930")]
	public static void ResetNotifiedForPM(int pmId)
	{
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x582E9D0", Offset = "0x582D9D0", VA = "0x582E9D0")]
	public static bool RegisterCustomCommand(string name, UserMethod callback, string description, AutofillType autofillType = AutofillType.None)
	{
		return default(bool);
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x582EC00", Offset = "0x582DC00", VA = "0x582EC00")]
	public static void ClearCustomCommands()
	{
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x582EE00", Offset = "0x582DE00", VA = "0x582EE00")]
	public static string[] ParseCommandArgs(string text)
	{
		return null;
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x582F350", Offset = "0x582E350", VA = "0x582F350")]
	private static int GetAutofillTokenStart(string input, int firstSpaceIndex, AutofillType autofillType)
	{
		return default(int);
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x582F380", Offset = "0x582E380", VA = "0x582F380")]
	public static void Init()
	{
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x582F6B0", Offset = "0x582E6B0", VA = "0x582F6B0")]
	public static void Reset()
	{
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x5829730", Offset = "0x5828730", VA = "0x5829730")]
	public static void Clear()
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x582FD30", Offset = "0x582ED30", VA = "0x582FD30")]
	public static bool IsChatActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x582FAB0", Offset = "0x582EAB0", VA = "0x582FAB0")]
	public static bool IsChatAvailable()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x5829D50", Offset = "0x5828D50", VA = "0x5829D50")]
	public static void SendChatAll(string message, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x582FDE0", Offset = "0x582EDE0", VA = "0x582FDE0")]
	public static void SendPlayerChatAll(string message)
	{
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x582A2B0", Offset = "0x58292B0", VA = "0x582A2B0")]
	public static void SendChat(string message, Player player, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x582FF70", Offset = "0x582EF70", VA = "0x582FF70")]
	public static void OnChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x5830190", Offset = "0x582F190", VA = "0x5830190")]
	public static void OnPlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x5830670", Offset = "0x582F670", VA = "0x5830670")]
	public static void OnAnnounceRPC(string message)
	{
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x5829040", Offset = "0x5828040", VA = "0x5829040")]
	public static void AddLine(string message, [Optional][DefaultParameterValue(0)] ChatTextColor color, [Optional][DefaultParameterValue(false)] bool isSystem, [Optional] DateTime? timestamp, int senderID = -1, bool isSuggestion = false, bool isPM = false, int pmPartnerID = -1, bool isNotification = false)
	{
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x58302C0", Offset = "0x582F2C0", VA = "0x58302C0")]
	private static void AddPlayerLine(Player sender, string message, ChatTextColor bodyColor, DateTime timestamp, bool isPM, int pmPartnerID)
	{
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x58306E0", Offset = "0x582F6E0", VA = "0x58306E0")]
	private static void AddLineInternal(string formattedMessage, ChatTextColor color, bool isSystem, DateTime messageTime, int senderID, bool isSuggestion, bool isPM, int pmPartnerID, bool isNotification, ChatPlayerLineData playerLineData)
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x58315E0", Offset = "0x58305E0", VA = "0x58315E0")]
	private static void BeginLineBatch()
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x58316C0", Offset = "0x58306C0", VA = "0x58316C0")]
	private static void EndLineBatch()
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x5830EB0", Offset = "0x582FEB0", VA = "0x5830EB0")]
	private static void RemoveLineAt(int index)
	{
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x5831850", Offset = "0x5830850", VA = "0x5831850")]
	public static void AddException(string line)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x5831B00", Offset = "0x5830B00", VA = "0x5831B00")]
	private static void ReplaceLastLine(string message, ChatTextColor color, bool isSystem)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x5831490", Offset = "0x5830490", VA = "0x5831490")]
	public static string GetFormattedMessage(string message, DateTime timestamp, bool isSuggestion = false)
	{
		return null;
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x58322F0", Offset = "0x58312F0", VA = "0x58322F0")]
	public static ChatDisplayLine GetDisplayLine(int index)
	{
		return default(ChatDisplayLine);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x5832620", Offset = "0x5831620", VA = "0x5832620")]
	private static void InvalidateDisplayLines()
	{
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x5832760", Offset = "0x5831760", VA = "0x5832760")]
	private static ChatDisplayLine BuildDisplayLine(int index)
	{
		return default(ChatDisplayLine);
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x58320B0", Offset = "0x58310B0", VA = "0x58320B0")]
	private static string GetTimestampPrefix(DateTime timestamp, bool isSuggestion)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x5832C30", Offset = "0x5831C30", VA = "0x5832C30")]
	public static void AddFeed(string line)
	{
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x5832E90", Offset = "0x5831E90", VA = "0x5832E90")]
	public static void IsTalking(Player player, bool isSpeaking)
	{
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x5833040", Offset = "0x5832040", VA = "0x5833040")]
	public static void ClearTalking(int actorNumber)
	{
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x582F710", Offset = "0x582E710", VA = "0x582F710")]
	public static void LoadTheme()
	{
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x5833120", Offset = "0x5832120", VA = "0x5833120")]
	public static void HandleInput(string input)
	{
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x58337A0", Offset = "0x58327A0", VA = "0x58337A0")]
	private static string ProcessMentions(string message)
	{
		return null;
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x5833D20", Offset = "0x5832D20", VA = "0x5833D20")]
	private static string FormatChatMessage(string message)
	{
		return null;
	}

	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x5833D30", Offset = "0x5832D30", VA = "0x5833D30")]
	public static void UpdateChatPanel()
	{
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x58332A0", Offset = "0x58322A0", VA = "0x58332A0")]
	private static void HandleCommand(string[] args)
	{
	}

	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x582A570", Offset = "0x5829570", VA = "0x582A570")]
	public static void MutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x582A930", Offset = "0x5829930", VA = "0x582A930")]
	public static void UnmutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x5833E00", Offset = "0x5832E00", VA = "0x5833E00")]
	public static void SetPlayerVolume(Player player, float volume)
	{
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x5833F90", Offset = "0x5832F90", VA = "0x5833F90")]
	private static Player GetPlayer(string stringID)
	{
		return null;
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x582A190", Offset = "0x5829190", VA = "0x582A190")]
	public static Player GetPlayer(string[] args)
	{
		return null;
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x5829CA0", Offset = "0x5828CA0", VA = "0x5829CA0")]
	private static bool CheckMC()
	{
		return default(bool);
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x582C040", Offset = "0x582B040", VA = "0x582C040")]
	private static ChatPanel GetChatPanel()
	{
		return null;
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x582FBD0", Offset = "0x582EBD0", VA = "0x582FBD0")]
	private static FeedPanel GetFeedPanel()
	{
		return null;
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x5832F80", Offset = "0x5831F80", VA = "0x5832F80")]
	private static VoiceChatPanel GetVoiceChatPanel()
	{
		return null;
	}

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x58340D0", Offset = "0x58330D0", VA = "0x58340D0")]
	public static string GetIDString(int id, bool includeMC = false, bool myPlayer = false)
	{
		return null;
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x582B740", Offset = "0x582A740", VA = "0x582B740")]
	public static string GetColorString(string str, ChatTextColor color, bool bold = false)
	{
		return null;
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x58341A0", Offset = "0x58331A0", VA = "0x58341A0")]
	private void Update()
	{
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x58342A0", Offset = "0x58332A0", VA = "0x58342A0")]
	public static void HandleTyping(string input)
	{
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x5834480", Offset = "0x5833480", VA = "0x5834480")]
	private static void HandleTypingInternal(string input)
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x5837530", Offset = "0x5836530", VA = "0x5837530")]
	private static void ShowCommandSuggestions(List<string> suggestions)
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x58378C0", Offset = "0x58368C0", VA = "0x58378C0")]
	public static void HandleTabComplete()
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x5838180", Offset = "0x5837180", VA = "0x5838180")]
	public static void HandleSuggestionClick(int suggestionIndex)
	{
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x5838440", Offset = "0x5837440", VA = "0x5838440")]
	[IteratorStateMachine(typeof(_003CReactivateInputAfterClick_003Ed__143))]
	private IEnumerator ReactivateInputAfterClick(ChatPanel chatPanel)
	{
		return null;
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x5837C50", Offset = "0x5836C50", VA = "0x5837C50")]
	private static string BuildCompletedText(string currentInput, string suggestion)
	{
		return null;
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x5837FB0", Offset = "0x5836FB0", VA = "0x5837FB0")]
	private static void RefreshSuggestionDisplay()
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x58384B0", Offset = "0x58374B0", VA = "0x58384B0")]
	private static void RefreshSuggestionDisplayInternal()
	{
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x5839160", Offset = "0x5838160", VA = "0x5839160")]
	private static bool RemoveSuggestionLines()
	{
		return default(bool);
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x58373C0", Offset = "0x58363C0", VA = "0x58373C0")]
	public static void ClearLastSuggestions()
	{
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x5839280", Offset = "0x5838280", VA = "0x5839280")]
	public static void ForceSuggestionRefresh()
	{
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x582C1A0", Offset = "0x582B1A0", VA = "0x582C1A0")]
	public static void SendPrivateMessage(Player target, string message)
	{
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x58392F0", Offset = "0x58382F0", VA = "0x58392F0")]
	public static void OnPrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x5839850", Offset = "0x5838850", VA = "0x5839850")]
	public static void ResetAllPMState()
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x5839AA0", Offset = "0x5838AA0", VA = "0x5839AA0")]
	public static void SyncPMPartnersOnJoin()
	{
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x5839C80", Offset = "0x5838C80", VA = "0x5839C80")]
	public static string GetPlayerIdentifier(Player player)
	{
		return null;
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x58395F0", Offset = "0x58385F0", VA = "0x58395F0")]
	public static void ShowPMNotification(Player senderPlayer)
	{
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x5839DE0", Offset = "0x5838DE0", VA = "0x5839DE0")]
	public static bool HasActivePlayerSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x5839E80", Offset = "0x5838E80", VA = "0x5839E80")]
	public static bool HasActiveSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x5839EE0", Offset = "0x5838EE0", VA = "0x5839EE0")]
	public static void RefreshPlayerSuggestions()
	{
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x583A060", Offset = "0x5839060", VA = "0x583A060")]
	private static void ClearPMNotificationFromChat(int playerID)
	{
	}

	[Token(Token = "0x6001601")]
	[Address(RVA = "0x583A260", Offset = "0x5839260", VA = "0x583A260")]
	public static void ClearPMNotification(int playerID)
	{
	}

	[Token(Token = "0x6001602")]
	[Address(RVA = "0x583A370", Offset = "0x5839370", VA = "0x583A370")]
	public static bool HasActivePMNotification(int playerID)
	{
		return default(bool);
	}

	[Token(Token = "0x6001603")]
	[Address(RVA = "0x583A410", Offset = "0x5839410", VA = "0x583A410")]
	public static bool HasAnyActivePMNotification()
	{
		return default(bool);
	}

	[Token(Token = "0x6001604")]
	[Address(RVA = "0x5837E70", Offset = "0x5836E70", VA = "0x5837E70")]
	private static void UpdatePartialTextAfterCompletion(string newText, string chosen)
	{
	}

	[Token(Token = "0x6001605")]
	[Address(RVA = "0x583A4A0", Offset = "0x58394A0", VA = "0x583A4A0")]
	public ChatManager()
	{
	}
}
