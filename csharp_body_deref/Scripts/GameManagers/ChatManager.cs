using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20001D2")]
internal class ChatManager : MonoBehaviour
{
	[Token(Token = "0x20001D3")]
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
	private class CommandAttribute : Attribute
	{
		[Token(Token = "0x1700012D")]
		public string Name
		{
			[Token(Token = "0x6000AF2")]
			[Address(RVA = "0x41256E0", Offset = "0x41256E0", VA = "0x41256E0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000AF3")]
			[Address(RVA = "0x41256F0", Offset = "0x41256F0", VA = "0x41256F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700012E")]
		public string Description
		{
			[Token(Token = "0x6000AF4")]
			[Address(RVA = "0x4125700", Offset = "0x4125700", VA = "0x4125700")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000AF5")]
			[Address(RVA = "0x4125710", Offset = "0x4125710", VA = "0x4125710")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700012F")]
		public string Alias
		{
			[Token(Token = "0x6000AF6")]
			[Address(RVA = "0x4125720", Offset = "0x4125720", VA = "0x4125720")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000AF7")]
			[Address(RVA = "0x4125730", Offset = "0x4125730", VA = "0x4125730")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000130")]
		public MethodInfo Command
		{
			[Token(Token = "0x6000AF8")]
			[Address(RVA = "0x4125740", Offset = "0x4125740", VA = "0x4125740")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000AF9")]
			[Address(RVA = "0x4125750", Offset = "0x4125750", VA = "0x4125750")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000131")]
		public bool IsAlias
		{
			[Token(Token = "0x6000AFA")]
			[Address(RVA = "0x4125760", Offset = "0x4125760", VA = "0x4125760")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000AFB")]
			[Address(RVA = "0x4125770", Offset = "0x4125770", VA = "0x4125770")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000132")]
		public string[] Parameters
		{
			[Token(Token = "0x6000AFC")]
			[Address(RVA = "0x4125780", Offset = "0x4125780", VA = "0x4125780")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000AFD")]
			[Address(RVA = "0x4125790", Offset = "0x4125790", VA = "0x4125790")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000133")]
		public AutofillType AutofillType
		{
			[Token(Token = "0x6000AFE")]
			[Address(RVA = "0x41257A0", Offset = "0x41257A0", VA = "0x41257A0")]
			[CompilerGenerated]
			get
			{
				return default(AutofillType);
			}
			[Token(Token = "0x6000AFF")]
			[Address(RVA = "0x41257B0", Offset = "0x41257B0", VA = "0x41257B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000134")]
		public bool ExcludeFromHelp
		{
			[Token(Token = "0x6000B00")]
			[Address(RVA = "0x41257C0", Offset = "0x41257C0", VA = "0x41257C0")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000B01")]
			[Address(RVA = "0x41257D0", Offset = "0x41257D0", VA = "0x41257D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x411AF80", Offset = "0x411AF80", VA = "0x411AF80")]
		public CommandAttribute(CommandAttribute commandAttribute)
		{
		}

		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x41257E0", Offset = "0x41257E0", VA = "0x41257E0")]
		public CommandAttribute(string name, string description, AutofillType autofillType = AutofillType.None, bool excludeFromHelp = false)
		{
		}
	}

	[Token(Token = "0x20001D5")]
	private static class SuggestionState
	{
		[Token(Token = "0x4000A3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static string PartialText;

		[Token(Token = "0x4000A40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static string OriginalText;

		[Token(Token = "0x4000A41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static int OriginalStartPos;

		[Token(Token = "0x4000A42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static int OriginalEndPos;

		[Token(Token = "0x4000A43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static List<string> Suggestions;

		[Token(Token = "0x4000A44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static int CurrentIndex;

		[Token(Token = "0x4000A45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public static SuggestionType Type;

		[Token(Token = "0x4000A46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static bool IsTabCompleting;

		[Token(Token = "0x4000A47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static string OriginalPartialText;

		[Token(Token = "0x4000A48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static bool IsProcessingClick;

		[Token(Token = "0x17000135")]
		public static bool HasSuggestions
		{
			[Token(Token = "0x6000B09")]
			[Address(RVA = "0x4125AA0", Offset = "0x4125AA0", VA = "0x4125AA0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000136")]
		public static bool IsActive
		{
			[Token(Token = "0x6000B0A")]
			[Address(RVA = "0x4121DC0", Offset = "0x4121DC0", VA = "0x4121DC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x4123890", Offset = "0x4123890", VA = "0x4123890")]
		public static void Clear()
		{
		}

		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x4121790", Offset = "0x4121790", VA = "0x4121790")]
		public static void SetOriginalContext(string original, int startPos, int endPos)
		{
		}
	}

	[Token(Token = "0x20001D6")]
	private enum SuggestionType
	{
		[Token(Token = "0x4000A4A")]
		None,
		[Token(Token = "0x4000A4B")]
		Command,
		[Token(Token = "0x4000A4C")]
		Mention,
		[Token(Token = "0x4000A4D")]
		PlayerID
	}

	[Token(Token = "0x20001D9")]
	[CompilerGenerated]
	private sealed class _003CReactivateInputAfterClick_003Ed__114 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel chatPanel;

		[Token(Token = "0x4000A5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CwasTabCompleting_003E5__2;

		[Token(Token = "0x4000A5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private int _003CpreservedIndex_003E5__3;

		[Token(Token = "0x17000137")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B1C")]
			[Address(RVA = "0x41265A0", Offset = "0x41265A0", VA = "0x41265A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000138")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B1E")]
			[Address(RVA = "0x41265F0", Offset = "0x41265F0", VA = "0x41265F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x4123870", Offset = "0x4123870", VA = "0x4123870")]
		[DebuggerHidden]
		public _003CReactivateInputAfterClick_003Ed__114(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x4126370", Offset = "0x4126370", VA = "0x4126370", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x4126380", Offset = "0x4126380", VA = "0x4126380", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x41265B0", Offset = "0x41265B0", VA = "0x41265B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001DA")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLeave_003Ed__0 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000139")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B22")]
			[Address(RVA = "0x41268C0", Offset = "0x41268C0", VA = "0x41268C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B24")]
			[Address(RVA = "0x4126910", Offset = "0x4126910", VA = "0x4126910", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B1F")]
		[Address(RVA = "0x4114B90", Offset = "0x4114B90", VA = "0x4114B90")]
		[DebuggerHidden]
		public _003CWaitAndLeave_003Ed__0(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B20")]
		[Address(RVA = "0x4126600", Offset = "0x4126600", VA = "0x4126600", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B21")]
		[Address(RVA = "0x4126610", Offset = "0x4126610", VA = "0x4126610", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x41268D0", Offset = "0x41268D0", VA = "0x41268D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex CommandRegex;

	[Token(Token = "0x4000A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex MentionRegex;

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Regex ParamRegex;

	[Token(Token = "0x4000A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Regex RichTextPattern;

	[Token(Token = "0x4000A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static ChatManager _instance;

	[Token(Token = "0x4000A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> RawMessages;

	[Token(Token = "0x4000A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> SenderIDs;

	[Token(Token = "0x4000A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<ChatTextColor> Colors;

	[Token(Token = "0x4000A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<bool> SystemFlags;

	[Token(Token = "0x4000A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static List<DateTime> Timestamps;

	[Token(Token = "0x4000A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static List<bool> SuggestionFlags;

	[Token(Token = "0x4000A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static List<bool> NotificationFlags;

	[Token(Token = "0x4000A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static List<string> FeedLines;

	[Token(Token = "0x4000A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static Dictionary<ChatTextColor, string> ColorTags;

	[Token(Token = "0x4000A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<string, CommandAttribute> CommandsCache;

	[Token(Token = "0x4000A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static string LastException;

	[Token(Token = "0x4000A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static int LastExceptionCount;

	[Token(Token = "0x4000A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly StringBuilder MessageBuilder;

	[Token(Token = "0x4000A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly StringBuilder TimeBuilder;

	[Token(Token = "0x4000A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static readonly StringBuilder MentionBuilder;

	[Token(Token = "0x4000A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static readonly HashSet<int> ActivePMNotifications;

	[Token(Token = "0x4000A2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static readonly HashSet<int> NotifiedPMs;

	[Token(Token = "0x4000A2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public static List<bool> PrivateFlags;

	[Token(Token = "0x4000A2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public static List<int> PMPartnerIDs;

	[Token(Token = "0x4000A2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private static string _preservedInputText;

	[Token(Token = "0x4000A30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static int _preservedInputCaretPosition;

	[Token(Token = "0x4000A31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private static int _preservedPMTargetActorNumber;

	[Token(Token = "0x4000A32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public static bool PreserveInputOnRestart;

	[Token(Token = "0x4000A33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private static readonly Dictionary<string, string> _conversationTexts;

	[Token(Token = "0x4000A34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private static readonly Dictionary<string, int> _conversationCarets;

	[Token(Token = "0x1700012C")]
	public static int MaxLines
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x411A500", Offset = "0x411A500", VA = "0x411A500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4114B40", Offset = "0x4114B40", VA = "0x4114B40")]
	[IteratorStateMachine(typeof(_003CWaitAndLeave_003Ed__0))]
	private IEnumerator WaitAndLeave()
	{
		return null;
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x4114BB0", Offset = "0x4114BB0", VA = "0x4114BB0")]
	[Command("clear", "/clear: Clears the chat window.", AutofillType.None, false, Alias = "c")]
	private static void Clear(string[] args)
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x4114F00", Offset = "0x4114F00", VA = "0x4114F00")]
	[Command("reviveall", "/reviveall: Revive all players.", AutofillType.None, false, Alias = "rva")]
	private static void ReviveAll(string[] args)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4115300", Offset = "0x4115300", VA = "0x4115300")]
	[Command("revive", "/revive [ID]: Revives the player with ID", AutofillType.PlayerID, false, Alias = "rv")]
	private static void Revive(string[] args)
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x41160C0", Offset = "0x41160C0", VA = "0x41160C0")]
	[Command("mute", "/mute [ID]: Mute player with ID.", AutofillType.PlayerID, false)]
	private static void Mute(string[] args)
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4116490", Offset = "0x4116490", VA = "0x4116490")]
	[Command("unmute", "/unmute [ID]: Unmute player with ID.", AutofillType.PlayerID, false)]
	private static void Unmute(string[] args)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4116930", Offset = "0x4116930", VA = "0x4116930")]
	[Command("nextsong", "/nextsong: Play next song in playlist.", AutofillType.None, false)]
	private static void NextSong(string[] args)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4116940", Offset = "0x4116940", VA = "0x4116940")]
	[Command("pause", "/pause: Pause the multiplayer game.", AutofillType.None, false)]
	private static void Pause(string[] args)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4116B10", Offset = "0x4116B10", VA = "0x4116B10")]
	[Command("unpause", "/unpause: Unpause the multiplayer game.", AutofillType.None, false)]
	private static void Unpause(string[] args)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4116CE0", Offset = "0x4116CE0", VA = "0x4116CE0")]
	[Command("resetkd", "/resetkd: Reset your own stats.", AutofillType.None, false)]
	private static void Resetkd(string[] args)
	{
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4116F00", Offset = "0x4116F00", VA = "0x4116F00")]
	[Command("resetkdall", "/resetkdall: Reset all player stats.", AutofillType.None, false)]
	private static void Resetkdall(string[] args)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4117010", Offset = "0x4117010", VA = "0x4117010")]
	[Command("help", "/help [page(optional)]: Displays command usage.", AutofillType.None, false)]
	private static void Help(string[] args)
	{
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x41176D0", Offset = "0x41176D0", VA = "0x41176D0")]
	[Command("savechat", "/savechat: Save chat history to Aottg2/Chat folder", AutofillType.None, false)]
	private static void SaveChatHistory(string[] args)
	{
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x4117D50", Offset = "0x4117D50", VA = "0x4117D50")]
	[Command("pm", "/pm [ID]: Send a private message to player with ID", AutofillType.PlayerID, false)]
	private static void PM(string[] args)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x41184C0", Offset = "0x41184C0", VA = "0x41184C0")]
	[Command("restart", "/restart: Restarts the game.", AutofillType.None, false, Alias = "r")]
	private static void Restart(string[] args)
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x41187E0", Offset = "0x41187E0", VA = "0x41187E0")]
	[Command("closelobby", "/closelobby: Kicks all players and ends the lobby.", AutofillType.None, false)]
	private static void CloseLobby(string[] args)
	{
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x4118B90", Offset = "0x4118B90", VA = "0x4118B90")]
	[Command("kick", "/kick [ID]: Kick the player with ID", AutofillType.PlayerID, false)]
	private static void Kick(string[] args)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x4118F20", Offset = "0x4118F20", VA = "0x4118F20")]
	[Command("ban", "/ban [ID]: Ban the player with ID", AutofillType.PlayerID, false)]
	private static void Ban(string[] args)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x4119200", Offset = "0x4119200", VA = "0x4119200")]
	[Command("infoban", "/infoban [ID]: Ban the player with the legacy infoban method.", AutofillType.PlayerID, false)]
	private static void InfoBan(string[] args)
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x4119430", Offset = "0x4119430", VA = "0x4119430")]
	[Command("ipban", "/ipban [ID]: Room IP-ban the player with ID.", AutofillType.PlayerID, false)]
	private static void IPBan(string[] args)
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x4119590", Offset = "0x4119590", VA = "0x4119590")]
	[Command("regionban", "/regionban [ID]: Region-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionBan(string[] args)
	{
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x41197D0", Offset = "0x41197D0", VA = "0x41197D0")]
	[Command("regionipban", "/regionipban [ID]: Region IP-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionIPBan(string[] args)
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4119930", Offset = "0x4119930", VA = "0x4119930")]
	[Command("unban", "/unban [session|ip] [target] [optional reason]: Room unban by session or ip target.", AutofillType.None, false)]
	private static void Unban(string[] args)
	{
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x4119BC0", Offset = "0x4119BC0", VA = "0x4119BC0")]
	[Command("regionunban", "/regionunban [targetId] [optional reason]: Region unban by target id.", AutofillType.None, true)]
	private static void RegionUnban(string[] args)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x4119DA0", Offset = "0x4119DA0", VA = "0x4119DA0")]
	private static void PrintModerationStatus(string text)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x4119ED0", Offset = "0x4119ED0", VA = "0x4119ED0")]
	private static bool IsAdminOrModerator()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4119080", Offset = "0x4119080", VA = "0x4119080")]
	private static bool CanUseRoomModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x41196F0", Offset = "0x41196F0", VA = "0x41196F0")]
	private static bool CanUseRegionModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4119F90", Offset = "0x4119F90", VA = "0x4119F90")]
	private static bool ShouldIncludeHiddenCommandInHelp(CommandAttribute command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4119160", Offset = "0x4119160", VA = "0x4119160")]
	private static string GetOptionalReason(string[] args, int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4118D80", Offset = "0x4118D80", VA = "0x4118D80")]
	private static bool CanVoteKick(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x411A080", Offset = "0x411A080", VA = "0x411A080")]
	[Command("maxplayers", "/maxplayers [num]: Sets room's max player count.", AutofillType.None, false)]
	private static void MaxPlayers(string[] args)
	{
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x41189A0", Offset = "0x41189A0", VA = "0x41189A0")]
	public static void KickPlayer(Player player, bool print = true, bool ban = false, string reason = ".")
	{
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x411A220", Offset = "0x411A220", VA = "0x411A220")]
	public static void VoteKickPlayer(Player voter, Player target)
	{
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x411A610", Offset = "0x411A610", VA = "0x411A610")]
	public static void PreserveInputText(string text, int caretPosition)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x411A6D0", Offset = "0x411A6D0", VA = "0x411A6D0")]
	public static (string, int, int) GetPreservedInputWithCaret()
	{
		return default((string, int, int));
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x411A7C0", Offset = "0x411A7C0", VA = "0x411A7C0")]
	public static void PreservePMTargetActorNumber(int actorNumber)
	{
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x411A820", Offset = "0x411A820", VA = "0x411A820")]
	public static void SaveConversation(string key, string text, int caretPos)
	{
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x411A960", Offset = "0x411A960", VA = "0x411A960")]
	public static (string, int) GetConversation(string key)
	{
		return default((string, int));
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x411AAD0", Offset = "0x411AAD0", VA = "0x411AAD0")]
	public static void ClearConversation(string key)
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x411ABB0", Offset = "0x411ABB0", VA = "0x411ABB0")]
	public static void ResetNotifiedForPM(int pmId)
	{
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x411AC50", Offset = "0x411AC50", VA = "0x411AC50")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x411B000", Offset = "0x411B000", VA = "0x411B000")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x4114C00", Offset = "0x4114C00", VA = "0x4114C00")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x411B710", Offset = "0x411B710", VA = "0x411B710")]
	public static bool IsChatActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x411B480", Offset = "0x411B480", VA = "0x411B480")]
	public static bool IsChatAvailable()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x4115150", Offset = "0x4115150", VA = "0x4115150")]
	public static void SendChatAll(string message, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x41156C0", Offset = "0x41156C0", VA = "0x41156C0")]
	public static void SendChat(string message, Player player, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x411B990", Offset = "0x411B990", VA = "0x411B990")]
	public static void OnChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x411BBB0", Offset = "0x411BBB0", VA = "0x411BBB0")]
	public static void OnAnnounceRPC(string message)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x4115880", Offset = "0x4115880", VA = "0x4115880")]
	public static void AddLine(string message, [Optional][DefaultParameterValue(0)] ChatTextColor color, [Optional][DefaultParameterValue(false)] bool isSystem, [Optional] DateTime? timestamp, int senderID = -1, bool isSuggestion = false, bool isPM = false, int pmPartnerID = -1, bool isNotification = false)
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x411BEE0", Offset = "0x411BEE0", VA = "0x411BEE0")]
	public static void AddException(string line)
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x411C1C0", Offset = "0x411C1C0", VA = "0x411C1C0")]
	private static void ReplaceLastLine(string message, ChatTextColor color, bool isSystem)
	{
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x411BC20", Offset = "0x411BC20", VA = "0x411BC20")]
	public static string GetFormattedMessage(string message, DateTime timestamp, bool isSuggestion = false)
	{
		return null;
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x411C5B0", Offset = "0x411C5B0", VA = "0x411C5B0")]
	public static void AddFeed(string line)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x411C820", Offset = "0x411C820", VA = "0x411C820")]
	public static void IsTalking(Player player, bool isSpeaking)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x411B060", Offset = "0x411B060", VA = "0x411B060")]
	public static void LoadTheme()
	{
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x411C9E0", Offset = "0x411C9E0", VA = "0x411C9E0")]
	public static void HandleInput(string input)
	{
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x411D080", Offset = "0x411D080", VA = "0x411D080")]
	private static string ProcessMentions(string message)
	{
		return null;
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x411D610", Offset = "0x411D610", VA = "0x411D610")]
	private static string FormatChatMessage(string message)
	{
		return null;
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x411D620", Offset = "0x411D620", VA = "0x411D620")]
	public static void UpdateChatPanel()
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x411CE00", Offset = "0x411CE00", VA = "0x411CE00")]
	private static void HandleCommand(string[] args)
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x41161C0", Offset = "0x41161C0", VA = "0x41161C0")]
	public static void MutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4116590", Offset = "0x4116590", VA = "0x4116590")]
	public static void UnmutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x411D6F0", Offset = "0x411D6F0", VA = "0x411D6F0")]
	public static void SetPlayerVolume(Player player, float volume)
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x411D890", Offset = "0x411D890", VA = "0x411D890")]
	private static Player GetPlayer(string stringID)
	{
		return null;
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x41155A0", Offset = "0x41155A0", VA = "0x41155A0")]
	public static Player GetPlayer(string[] args)
	{
		return null;
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x4115090", Offset = "0x4115090", VA = "0x4115090")]
	private static bool CheckMC()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x4117F60", Offset = "0x4117F60", VA = "0x4117F60")]
	private static ChatPanel GetChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x411B5A0", Offset = "0x411B5A0", VA = "0x411B5A0")]
	private static FeedPanel GetFeedPanel()
	{
		return null;
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x411C920", Offset = "0x411C920", VA = "0x411C920")]
	private static VoiceChatPanel GetVoiceChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x411D9E0", Offset = "0x411D9E0", VA = "0x411D9E0")]
	private static KDRPanel GetKDRPanel()
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x411DAA0", Offset = "0x411DAA0", VA = "0x411DAA0")]
	public static string GetIDString(int id, bool includeMC = false, bool myPlayer = false)
	{
		return null;
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x411B7C0", Offset = "0x411B7C0", VA = "0x411B7C0")]
	public static string GetColorString(string str, ChatTextColor color, bool bold = false)
	{
		return null;
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x411DB70", Offset = "0x411DB70", VA = "0x411DB70")]
	private void Update()
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x411DC80", Offset = "0x411DC80", VA = "0x411DC80")]
	public static void HandleTyping(string input)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x4121810", Offset = "0x4121810", VA = "0x4121810")]
	private static void ShowCommandSuggestions(List<string> suggestions)
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x4121A00", Offset = "0x4121A00", VA = "0x4121A00")]
	public static void HandleTabComplete()
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4123520", Offset = "0x4123520", VA = "0x4123520")]
	public static void HandleSuggestionClick(int suggestionIndex)
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x4123800", Offset = "0x4123800", VA = "0x4123800")]
	[IteratorStateMachine(typeof(_003CReactivateInputAfterClick_003Ed__114))]
	private IEnumerator ReactivateInputAfterClick(ChatPanel chatPanel)
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4121ED0", Offset = "0x4121ED0", VA = "0x4121ED0")]
	private static string BuildCompletedText(string currentInput, string suggestion)
	{
		return null;
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x4122240", Offset = "0x4122240", VA = "0x4122240")]
	private static void RefreshSuggestionDisplay()
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x41213D0", Offset = "0x41213D0", VA = "0x41213D0")]
	public static void ClearLastSuggestions()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x41239F0", Offset = "0x41239F0", VA = "0x41239F0")]
	public static void ForceSuggestionRefresh()
	{
	}

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x41180D0", Offset = "0x41180D0", VA = "0x41180D0")]
	public static void SendPrivateMessage(Player target, string message)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x4123A60", Offset = "0x4123A60", VA = "0x4123A60")]
	public static void OnPrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x41242A0", Offset = "0x41242A0", VA = "0x41242A0")]
	public static void ResetAllPMState()
	{
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x41243A0", Offset = "0x41243A0", VA = "0x41243A0")]
	public static void SyncPMPartnersOnJoin()
	{
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x41245A0", Offset = "0x41245A0", VA = "0x41245A0")]
	public static string GetPlayerIdentifier(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x4124040", Offset = "0x4124040", VA = "0x4124040")]
	public static void ShowPMNotification(Player senderPlayer)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x4124700", Offset = "0x4124700", VA = "0x4124700")]
	public static bool HasActivePlayerSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x41247B0", Offset = "0x41247B0", VA = "0x41247B0")]
	public static bool HasActiveSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x4124810", Offset = "0x4124810", VA = "0x4124810")]
	public static void RefreshPlayerSuggestions()
	{
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x41249B0", Offset = "0x41249B0", VA = "0x41249B0")]
	private static void ClearPMNotificationFromChat(int playerID)
	{
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x4124D30", Offset = "0x4124D30", VA = "0x4124D30")]
	public static void ClearPMNotification(int playerID)
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4124E40", Offset = "0x4124E40", VA = "0x4124E40")]
	public static bool HasActivePMNotification(int playerID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x4124EE0", Offset = "0x4124EE0", VA = "0x4124EE0")]
	public static bool HasAnyActivePMNotification()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x41220F0", Offset = "0x41220F0", VA = "0x41220F0")]
	private static void UpdatePartialTextAfterCompletion(string newText, string chosen)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4124F70", Offset = "0x4124F70", VA = "0x4124F70")]
	public ChatManager()
	{
	}
}
