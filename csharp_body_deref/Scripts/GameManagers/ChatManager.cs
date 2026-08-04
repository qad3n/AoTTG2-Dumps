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

[Token(Token = "0x2000205")]
internal class ChatManager : MonoBehaviour
{
	[Token(Token = "0x2000206")]
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
	private class CommandAttribute : Attribute
	{
		[Token(Token = "0x17000183")]
		public string Name
		{
			[Token(Token = "0x6000C7F")]
			[Address(RVA = "0x4458D20", Offset = "0x4458D20", VA = "0x4458D20")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C80")]
			[Address(RVA = "0x4458D30", Offset = "0x4458D30", VA = "0x4458D30")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000184")]
		public string Description
		{
			[Token(Token = "0x6000C81")]
			[Address(RVA = "0x4458D40", Offset = "0x4458D40", VA = "0x4458D40")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C82")]
			[Address(RVA = "0x4458D50", Offset = "0x4458D50", VA = "0x4458D50")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000185")]
		public string Alias
		{
			[Token(Token = "0x6000C83")]
			[Address(RVA = "0x4458D60", Offset = "0x4458D60", VA = "0x4458D60")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C84")]
			[Address(RVA = "0x4458D70", Offset = "0x4458D70", VA = "0x4458D70")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000186")]
		public MethodInfo Command
		{
			[Token(Token = "0x6000C85")]
			[Address(RVA = "0x4458D80", Offset = "0x4458D80", VA = "0x4458D80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C86")]
			[Address(RVA = "0x4458D90", Offset = "0x4458D90", VA = "0x4458D90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000187")]
		public bool IsAlias
		{
			[Token(Token = "0x6000C87")]
			[Address(RVA = "0x4458DA0", Offset = "0x4458DA0", VA = "0x4458DA0")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000C88")]
			[Address(RVA = "0x4458DB0", Offset = "0x4458DB0", VA = "0x4458DB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000188")]
		public string[] Parameters
		{
			[Token(Token = "0x6000C89")]
			[Address(RVA = "0x4458DC0", Offset = "0x4458DC0", VA = "0x4458DC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C8A")]
			[Address(RVA = "0x4458DD0", Offset = "0x4458DD0", VA = "0x4458DD0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000189")]
		public AutofillType AutofillType
		{
			[Token(Token = "0x6000C8B")]
			[Address(RVA = "0x4458DE0", Offset = "0x4458DE0", VA = "0x4458DE0")]
			[CompilerGenerated]
			get
			{
				return default(AutofillType);
			}
			[Token(Token = "0x6000C8C")]
			[Address(RVA = "0x4458DF0", Offset = "0x4458DF0", VA = "0x4458DF0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700018A")]
		public bool ExcludeFromHelp
		{
			[Token(Token = "0x6000C8D")]
			[Address(RVA = "0x4458E00", Offset = "0x4458E00", VA = "0x4458E00")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000C8E")]
			[Address(RVA = "0x4458E10", Offset = "0x4458E10", VA = "0x4458E10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x4458E20", Offset = "0x4458E20", VA = "0x4458E20")]
		public CommandAttribute(CommandAttribute commandAttribute)
		{
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x4458EA0", Offset = "0x4458EA0", VA = "0x4458EA0")]
		public CommandAttribute(string name, string description, AutofillType autofillType = AutofillType.None, bool excludeFromHelp = false)
		{
		}
	}

	[Token(Token = "0x2000208")]
	private class CLCommandAttribute : CommandAttribute
	{
		[Token(Token = "0x1700018B")]
		public UserMethod Callback
		{
			[Token(Token = "0x6000C94")]
			[Address(RVA = "0x4459160", Offset = "0x4459160", VA = "0x4459160")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C95")]
		[Address(RVA = "0x4459170", Offset = "0x4459170", VA = "0x4459170")]
		public CLCommandAttribute(string name, string description, UserMethod callback, AutofillType autofillType)
		{
		}
	}

	[Token(Token = "0x2000209")]
	private static class SuggestionState
	{
		[Token(Token = "0x4000B0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static string PartialText;

		[Token(Token = "0x4000B0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static string OriginalText;

		[Token(Token = "0x4000B0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static int OriginalStartPos;

		[Token(Token = "0x4000B0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public static int OriginalEndPos;

		[Token(Token = "0x4000B0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static List<string> Suggestions;

		[Token(Token = "0x4000B0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static int CurrentIndex;

		[Token(Token = "0x4000B10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public static SuggestionType Type;

		[Token(Token = "0x4000B11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static bool IsTabCompleting;

		[Token(Token = "0x4000B12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static string OriginalPartialText;

		[Token(Token = "0x4000B13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static bool IsProcessingClick;

		[Token(Token = "0x1700018C")]
		public static bool HasSuggestions
		{
			[Token(Token = "0x6000C98")]
			[Address(RVA = "0x4459380", Offset = "0x4459380", VA = "0x4459380")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700018D")]
		public static bool IsActive
		{
			[Token(Token = "0x6000C99")]
			[Address(RVA = "0x4459410", Offset = "0x4459410", VA = "0x4459410")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x44591A0", Offset = "0x44591A0", VA = "0x44591A0")]
		public static void Clear()
		{
		}

		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x4459300", Offset = "0x4459300", VA = "0x4459300")]
		public static void SetOriginalContext(string original, int startPos, int endPos)
		{
		}
	}

	[Token(Token = "0x200020A")]
	private enum SuggestionType
	{
		[Token(Token = "0x4000B15")]
		None,
		[Token(Token = "0x4000B16")]
		Command,
		[Token(Token = "0x4000B17")]
		Mention,
		[Token(Token = "0x4000B18")]
		PlayerID
	}

	[Token(Token = "0x200020B")]
	public struct ChatDisplayLine
	{
		[Token(Token = "0x4000B19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string PlainText;

		[Token(Token = "0x4000B1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public bool UsePlayerStyle;

		[Token(Token = "0x4000B1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string TimeText;

		[Token(Token = "0x4000B1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string IdText;

		[Token(Token = "0x4000B1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string SenderName;

		[Token(Token = "0x4000B1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string BodyText;

		[Token(Token = "0x4000B1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int SenderID;

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x4459640", Offset = "0x4459640", VA = "0x4459640")]
		public static ChatDisplayLine Plain(string text)
		{
			return default(ChatDisplayLine);
		}
	}

	[Token(Token = "0x200020C")]
	private struct ChatPlayerLineData
	{
		[Token(Token = "0x4000B20")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool Active;

		[Token(Token = "0x4000B21")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string SenderName;

		[Token(Token = "0x4000B22")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string BodyText;
	}

	[Token(Token = "0x200020F")]
	[CompilerGenerated]
	private sealed class _003CReactivateInputAfterClick_003Ed__115 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ChatPanel chatPanel;

		[Token(Token = "0x4000B31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CwasTabCompleting_003E5__2;

		[Token(Token = "0x4000B32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private int _003CpreservedIndex_003E5__3;

		[Token(Token = "0x1700018E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CAC")]
			[Address(RVA = "0x445A090", Offset = "0x445A090", VA = "0x445A090", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700018F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CAE")]
			[Address(RVA = "0x445A0E0", Offset = "0x445A0E0", VA = "0x445A0E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0x4459E40", Offset = "0x4459E40", VA = "0x4459E40")]
		[DebuggerHidden]
		public _003CReactivateInputAfterClick_003Ed__115(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x4459E60", Offset = "0x4459E60", VA = "0x4459E60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x4459E70", Offset = "0x4459E70", VA = "0x4459E70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CAD")]
		[Address(RVA = "0x445A0A0", Offset = "0x445A0A0", VA = "0x445A0A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000210")]
	[CompilerGenerated]
	private sealed class _003CWaitAndLeave_003Ed__0 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000190")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CB2")]
			[Address(RVA = "0x445A3D0", Offset = "0x445A3D0", VA = "0x445A3D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000191")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CB4")]
			[Address(RVA = "0x445A420", Offset = "0x445A420", VA = "0x445A420", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x445A0F0", Offset = "0x445A0F0", VA = "0x445A0F0")]
		[DebuggerHidden]
		public _003CWaitAndLeave_003Ed__0(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x445A110", Offset = "0x445A110", VA = "0x445A110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x445A120", Offset = "0x445A120", VA = "0x445A120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x445A3E0", Offset = "0x445A3E0", VA = "0x445A3E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000ADD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex CommandRegex;

	[Token(Token = "0x4000ADE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Regex MentionRegex;

	[Token(Token = "0x4000ADF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Regex ParamRegex;

	[Token(Token = "0x4000AE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Regex RichTextPattern;

	[Token(Token = "0x4000AE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static ChatManager _instance;

	[Token(Token = "0x4000AE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> RawMessages;

	[Token(Token = "0x4000AE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<int> SenderIDs;

	[Token(Token = "0x4000AE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<ChatTextColor> Colors;

	[Token(Token = "0x4000AE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<bool> SystemFlags;

	[Token(Token = "0x4000AE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static List<DateTime> Timestamps;

	[Token(Token = "0x4000AE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static List<bool> SuggestionFlags;

	[Token(Token = "0x4000AE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static List<bool> NotificationFlags;

	[Token(Token = "0x4000AE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static List<string> FeedLines;

	[Token(Token = "0x4000AEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public static Dictionary<ChatTextColor, string> ColorTags;

	[Token(Token = "0x4000AEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static readonly Dictionary<string, CommandAttribute> CommandsCache;

	[Token(Token = "0x4000AEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static string LastException;

	[Token(Token = "0x4000AED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static int LastExceptionCount;

	[Token(Token = "0x4000AEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private static int _lineBatchDepth;

	[Token(Token = "0x4000AEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static bool _pendingBatchSync;

	[Token(Token = "0x4000AF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly StringBuilder MessageBuilder;

	[Token(Token = "0x4000AF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private static readonly StringBuilder TimeBuilder;

	[Token(Token = "0x4000AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static readonly StringBuilder MentionBuilder;

	[Token(Token = "0x4000AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private static readonly HashSet<int> ActivePMNotifications;

	[Token(Token = "0x4000AF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private static readonly HashSet<int> NotifiedPMs;

	[Token(Token = "0x4000AF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public static List<bool> PrivateFlags;

	[Token(Token = "0x4000AF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public static List<int> PMPartnerIDs;

	[Token(Token = "0x4000AF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private static readonly List<ChatPlayerLineData> PlayerLineData;

	[Token(Token = "0x4000AF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private static string _preservedInputText;

	[Token(Token = "0x4000AF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private static int _preservedInputCaretPosition;

	[Token(Token = "0x4000AFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private static int _preservedPMTargetActorNumber;

	[Token(Token = "0x4000AFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public static bool PreserveInputOnRestart;

	[Token(Token = "0x4000AFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private static readonly Dictionary<string, string> _conversationTexts;

	[Token(Token = "0x4000AFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private static readonly Dictionary<string, int> _conversationCarets;

	[Token(Token = "0x4000AFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private static readonly HashSet<string> CustomCommandKeys;

	[Token(Token = "0x17000182")]
	public static int MaxLines
	{
		[Token(Token = "0x6000C18")]
		[Address(RVA = "0x4449FC0", Offset = "0x4449FC0", VA = "0x4449FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x4446DC0", Offset = "0x4446DC0", VA = "0x4446DC0")]
	[IteratorStateMachine(typeof(_003CWaitAndLeave_003Ed__0))]
	private IEnumerator WaitAndLeave()
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x4446E00", Offset = "0x4446E00", VA = "0x4446E00")]
	[Command("clear", "/clear: Clears the chat window.", AutofillType.None, false, Alias = "c")]
	private static void Clear(string[] args)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x44471A0", Offset = "0x44471A0", VA = "0x44471A0")]
	[Command("reviveall", "/reviveall: Revive all players.", AutofillType.None, false, Alias = "rva")]
	private static void ReviveAll(string[] args)
	{
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x44475A0", Offset = "0x44475A0", VA = "0x44475A0")]
	[Command("revive", "/revive [ID]: Revives the player with ID", AutofillType.PlayerID, false, Alias = "rv")]
	private static void Revive(string[] args)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4447CE0", Offset = "0x4447CE0", VA = "0x4447CE0")]
	[Command("mute", "/mute [ID]: Mute player with ID.", AutofillType.PlayerID, false)]
	private static void Mute(string[] args)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x44480B0", Offset = "0x44480B0", VA = "0x44480B0")]
	[Command("unmute", "/unmute [ID]: Unmute player with ID.", AutofillType.PlayerID, false)]
	private static void Unmute(string[] args)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4448550", Offset = "0x4448550", VA = "0x4448550")]
	[Command("nextsong", "/nextsong: Play next song in playlist.", AutofillType.None, false)]
	private static void NextSong(string[] args)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x4448560", Offset = "0x4448560", VA = "0x4448560")]
	[Command("pause", "/pause: Pause the multiplayer game.", AutofillType.None, false)]
	private static void Pause(string[] args)
	{
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x4448640", Offset = "0x4448640", VA = "0x4448640")]
	[Command("unpause", "/unpause: Unpause the multiplayer game.", AutofillType.None, false)]
	private static void Unpause(string[] args)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x4448720", Offset = "0x4448720", VA = "0x4448720")]
	[Command("resetkd", "/resetkd: Reset your own stats.", AutofillType.None, false)]
	private static void Resetkd(string[] args)
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x44487A0", Offset = "0x44487A0", VA = "0x44487A0")]
	[Command("resetkdall", "/resetkdall: Reset all player stats.", AutofillType.None, false)]
	private static void Resetkdall(string[] args)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x44488B0", Offset = "0x44488B0", VA = "0x44488B0")]
	[Command("help", "/help [page(optional)]: Displays command usage.", AutofillType.None, false)]
	private static void Help(string[] args)
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x44491D0", Offset = "0x44491D0", VA = "0x44491D0")]
	[Command("savechat", "/savechat: Save chat history to Aottg2/Chat folder", AutofillType.None, false)]
	private static void SaveChatHistory(string[] args)
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x4449850", Offset = "0x4449850", VA = "0x4449850")]
	[Command("pm", "/pm [ID]: Send a private message to player with ID", AutofillType.PlayerID, false)]
	private static void PM(string[] args)
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x444A0D0", Offset = "0x444A0D0", VA = "0x444A0D0")]
	public static void PreserveInputText(string text, int caretPosition)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x444A190", Offset = "0x444A190", VA = "0x444A190")]
	public static (string, int, int) GetPreservedInputWithCaret()
	{
		return default((string, int, int));
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x444A280", Offset = "0x444A280", VA = "0x444A280")]
	public static void PreservePMTargetActorNumber(int actorNumber)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x444A2E0", Offset = "0x444A2E0", VA = "0x444A2E0")]
	public static void SaveConversation(string key, string text, int caretPos)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x444A420", Offset = "0x444A420", VA = "0x444A420")]
	public static (string, int) GetConversation(string key)
	{
		return default((string, int));
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x444A590", Offset = "0x444A590", VA = "0x444A590")]
	public static void ClearConversation(string key)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x444A670", Offset = "0x444A670", VA = "0x444A670")]
	public static void ResetNotifiedForPM(int pmId)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x444A710", Offset = "0x444A710", VA = "0x444A710")]
	public static bool RegisterCustomCommand(string name, UserMethod callback, string description, AutofillType autofillType = AutofillType.None)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x444A940", Offset = "0x444A940", VA = "0x444A940")]
	public static void ClearCustomCommands()
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x444AB60", Offset = "0x444AB60", VA = "0x444AB60")]
	public static string[] ParseCommandArgs(string text)
	{
		return null;
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x444B010", Offset = "0x444B010", VA = "0x444B010")]
	private static int GetAutofillTokenStart(string input, int firstSpaceIndex, AutofillType autofillType)
	{
		return default(int);
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x444B040", Offset = "0x444B040", VA = "0x444B040")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x444B370", Offset = "0x444B370", VA = "0x444B370")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4446E50", Offset = "0x4446E50", VA = "0x4446E50")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x444BA80", Offset = "0x444BA80", VA = "0x444BA80")]
	public static bool IsChatActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x444B7F0", Offset = "0x444B7F0", VA = "0x444B7F0")]
	public static bool IsChatAvailable()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x44473F0", Offset = "0x44473F0", VA = "0x44473F0")]
	public static void SendChatAll(string message, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x444BB30", Offset = "0x444BB30", VA = "0x444BB30")]
	public static void SendPlayerChatAll(string message)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4447960", Offset = "0x4447960", VA = "0x4447960")]
	public static void SendChat(string message, Player player, ChatTextColor color = ChatTextColor.Default)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x444BCC0", Offset = "0x444BCC0", VA = "0x444BCC0")]
	public static void OnChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x444BEE0", Offset = "0x444BEE0", VA = "0x444BEE0")]
	public static void OnPlayerChatRPC(string message, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x444C3C0", Offset = "0x444C3C0", VA = "0x444C3C0")]
	public static void OnAnnounceRPC(string message)
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4447B20", Offset = "0x4447B20", VA = "0x4447B20")]
	public static void AddLine(string message, [Optional][DefaultParameterValue(0)] ChatTextColor color, [Optional][DefaultParameterValue(false)] bool isSystem, [Optional] DateTime? timestamp, int senderID = -1, bool isSuggestion = false, bool isPM = false, int pmPartnerID = -1, bool isNotification = false)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x444C010", Offset = "0x444C010", VA = "0x444C010")]
	private static void AddPlayerLine(Player sender, string message, ChatTextColor bodyColor, DateTime timestamp, bool isPM, int pmPartnerID)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x444C430", Offset = "0x444C430", VA = "0x444C430")]
	private static void AddLineInternal(string formattedMessage, ChatTextColor color, bool isSystem, DateTime messageTime, int senderID, bool isSuggestion, bool isPM, int pmPartnerID, bool isNotification, ChatPlayerLineData playerLineData)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x444D150", Offset = "0x444D150", VA = "0x444D150")]
	private static void BeginLineBatch()
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x444D230", Offset = "0x444D230", VA = "0x444D230")]
	private static void EndLineBatch()
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x444CB20", Offset = "0x444CB20", VA = "0x444CB20")]
	private static void RemoveLineAt(int index)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x444D3E0", Offset = "0x444D3E0", VA = "0x444D3E0")]
	public static void AddException(string line)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x444D6C0", Offset = "0x444D6C0", VA = "0x444D6C0")]
	private static void ReplaceLastLine(string message, ChatTextColor color, bool isSystem)
	{
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x444D000", Offset = "0x444D000", VA = "0x444D000")]
	public static string GetFormattedMessage(string message, DateTime timestamp, bool isSuggestion = false)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x444DDE0", Offset = "0x444DDE0", VA = "0x444DDE0")]
	public static ChatDisplayLine GetDisplayLine(int index)
	{
		return default(ChatDisplayLine);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x444DB90", Offset = "0x444DB90", VA = "0x444DB90")]
	private static string GetTimestampPrefix(DateTime timestamp, bool isSuggestion)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x444E2B0", Offset = "0x444E2B0", VA = "0x444E2B0")]
	public static void AddFeed(string line)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x444E520", Offset = "0x444E520", VA = "0x444E520")]
	public static void IsTalking(Player player, bool isSpeaking)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x444B3D0", Offset = "0x444B3D0", VA = "0x444B3D0")]
	public static void LoadTheme()
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x444E6E0", Offset = "0x444E6E0", VA = "0x444E6E0")]
	public static void HandleInput(string input)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x444ED60", Offset = "0x444ED60", VA = "0x444ED60")]
	private static string ProcessMentions(string message)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x444F2E0", Offset = "0x444F2E0", VA = "0x444F2E0")]
	private static string FormatChatMessage(string message)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x444F2F0", Offset = "0x444F2F0", VA = "0x444F2F0")]
	public static void UpdateChatPanel()
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x444E860", Offset = "0x444E860", VA = "0x444E860")]
	private static void HandleCommand(string[] args)
	{
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4447DE0", Offset = "0x4447DE0", VA = "0x4447DE0")]
	public static void MutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x44481B0", Offset = "0x44481B0", VA = "0x44481B0")]
	public static void UnmutePlayer(Player player, string muteType)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x444F3C0", Offset = "0x444F3C0", VA = "0x444F3C0")]
	public static void SetPlayerVolume(Player player, float volume)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x444F560", Offset = "0x444F560", VA = "0x444F560")]
	private static Player GetPlayer(string stringID)
	{
		return null;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4447840", Offset = "0x4447840", VA = "0x4447840")]
	public static Player GetPlayer(string[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4447330", Offset = "0x4447330", VA = "0x4447330")]
	private static bool CheckMC()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4449A60", Offset = "0x4449A60", VA = "0x4449A60")]
	private static ChatPanel GetChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x444B910", Offset = "0x444B910", VA = "0x444B910")]
	private static FeedPanel GetFeedPanel()
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x444E620", Offset = "0x444E620", VA = "0x444E620")]
	private static VoiceChatPanel GetVoiceChatPanel()
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x444F6B0", Offset = "0x444F6B0", VA = "0x444F6B0")]
	private static KDRPanel GetKDRPanel()
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x444F770", Offset = "0x444F770", VA = "0x444F770")]
	public static string GetIDString(int id, bool includeMC = false, bool myPlayer = false)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4449000", Offset = "0x4449000", VA = "0x4449000")]
	public static string GetColorString(string str, ChatTextColor color, bool bold = false)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x444F840", Offset = "0x444F840", VA = "0x444F840")]
	private void Update()
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x444F950", Offset = "0x444F950", VA = "0x444F950")]
	public static void HandleTyping(string input)
	{
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x444FB50", Offset = "0x444FB50", VA = "0x444FB50")]
	private static void HandleTypingInternal(string input)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4453490", Offset = "0x4453490", VA = "0x4453490")]
	private static void ShowCommandSuggestions(List<string> suggestions)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x44538B0", Offset = "0x44538B0", VA = "0x44538B0")]
	public static void HandleTabComplete()
	{
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x44541D0", Offset = "0x44541D0", VA = "0x44541D0")]
	public static void HandleSuggestionClick(int suggestionIndex)
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x44544B0", Offset = "0x44544B0", VA = "0x44544B0")]
	[IteratorStateMachine(typeof(_003CReactivateInputAfterClick_003Ed__115))]
	private IEnumerator ReactivateInputAfterClick(ChatPanel chatPanel)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4453C70", Offset = "0x4453C70", VA = "0x4453C70")]
	private static string BuildCompletedText(string currentInput, string suggestion)
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4453FE0", Offset = "0x4453FE0", VA = "0x4453FE0")]
	private static void RefreshSuggestionDisplay()
	{
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4454520", Offset = "0x4454520", VA = "0x4454520")]
	private static void RefreshSuggestionDisplayInternal()
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4455540", Offset = "0x4455540", VA = "0x4455540")]
	private static bool RemoveSuggestionLines()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4453330", Offset = "0x4453330", VA = "0x4453330")]
	public static void ClearLastSuggestions()
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4455690", Offset = "0x4455690", VA = "0x4455690")]
	public static void ForceSuggestionRefresh()
	{
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x4449BD0", Offset = "0x4449BD0", VA = "0x4449BD0")]
	public static void SendPrivateMessage(Player target, string message)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4455700", Offset = "0x4455700", VA = "0x4455700")]
	public static void OnPrivateChatRPC(string message, int targetID, long senderTimestamp, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x4455BF0", Offset = "0x4455BF0", VA = "0x4455BF0")]
	public static void ResetAllPMState()
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x4455CF0", Offset = "0x4455CF0", VA = "0x4455CF0")]
	public static void SyncPMPartnersOnJoin()
	{
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4455EF0", Offset = "0x4455EF0", VA = "0x4455EF0")]
	public static string GetPlayerIdentifier(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x4455990", Offset = "0x4455990", VA = "0x4455990")]
	public static void ShowPMNotification(Player senderPlayer)
	{
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x4456050", Offset = "0x4456050", VA = "0x4456050")]
	public static bool HasActivePlayerSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x44560F0", Offset = "0x44560F0", VA = "0x44560F0")]
	public static bool HasActiveSuggestions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4456150", Offset = "0x4456150", VA = "0x4456150")]
	public static void RefreshPlayerSuggestions()
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x44562F0", Offset = "0x44562F0", VA = "0x44562F0")]
	private static void ClearPMNotificationFromChat(int playerID)
	{
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x44564D0", Offset = "0x44564D0", VA = "0x44564D0")]
	public static void ClearPMNotification(int playerID)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x44565E0", Offset = "0x44565E0", VA = "0x44565E0")]
	public static bool HasActivePMNotification(int playerID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4456680", Offset = "0x4456680", VA = "0x4456680")]
	public static bool HasAnyActivePMNotification()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4453E90", Offset = "0x4453E90", VA = "0x4453E90")]
	private static void UpdatePartialTextAfterCompletion(string newText, string chosen)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4456710", Offset = "0x4456710", VA = "0x4456710")]
	[Command("restart", "/restart: Restarts the game.", AutofillType.None, false, Alias = "r")]
	private static void Restart(string[] args)
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x44567A0", Offset = "0x44567A0", VA = "0x44567A0")]
	[Command("closelobby", "/closelobby: Kicks all players and ends the lobby.", AutofillType.None, false)]
	private static void CloseLobby(string[] args)
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4456B50", Offset = "0x4456B50", VA = "0x4456B50")]
	[Command("kick", "/kick [ID]: Kick the player with ID", AutofillType.PlayerID, false)]
	private static void Kick(string[] args)
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4456EE0", Offset = "0x4456EE0", VA = "0x4456EE0")]
	[Command("ban", "/ban [ID]: Ban the player with ID", AutofillType.PlayerID, false)]
	private static void Ban(string[] args)
	{
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x44571C0", Offset = "0x44571C0", VA = "0x44571C0")]
	[Command("infoban", "/infoban [ID]: Ban the player with the legacy infoban method.", AutofillType.PlayerID, false)]
	private static void InfoBan(string[] args)
	{
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x44573F0", Offset = "0x44573F0", VA = "0x44573F0")]
	[Command("ipban", "/ipban [ID]: Room IP-ban the player with ID.", AutofillType.PlayerID, false)]
	private static void IPBan(string[] args)
	{
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x4457550", Offset = "0x4457550", VA = "0x4457550")]
	[Command("regionban", "/regionban [ID]: Region-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionBan(string[] args)
	{
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4457790", Offset = "0x4457790", VA = "0x4457790")]
	[Command("regionipban", "/regionipban [ID]: Region IP-ban the player with ID.", AutofillType.PlayerID, true)]
	private static void RegionIPBan(string[] args)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x44578F0", Offset = "0x44578F0", VA = "0x44578F0")]
	[Command("unban", "/unban [session|ip] [target] [optional reason]: Room unban by session or ip target.", AutofillType.None, false)]
	private static void Unban(string[] args)
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4457B80", Offset = "0x4457B80", VA = "0x4457B80")]
	[Command("regionunban", "/regionunban [targetId] [optional reason]: Region unban by target id.", AutofillType.None, true)]
	private static void RegionUnban(string[] args)
	{
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4457D60", Offset = "0x4457D60", VA = "0x4457D60")]
	private static void PrintModerationStatus(string text)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4457E90", Offset = "0x4457E90", VA = "0x4457E90")]
	private static bool IsAdminOrModerator()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4457040", Offset = "0x4457040", VA = "0x4457040")]
	private static bool CanUseRoomModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x44576B0", Offset = "0x44576B0", VA = "0x44576B0")]
	private static bool CanUseRegionModerationCommand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4457F50", Offset = "0x4457F50", VA = "0x4457F50")]
	private static bool ShouldIncludeHiddenCommandInHelp(CommandAttribute command)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4457120", Offset = "0x4457120", VA = "0x4457120")]
	private static string GetOptionalReason(string[] args, int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4456D40", Offset = "0x4456D40", VA = "0x4456D40")]
	private static bool CanVoteKick(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4458040", Offset = "0x4458040", VA = "0x4458040")]
	[Command("maxplayers", "/maxplayers [num]: Sets room's max player count.", AutofillType.None, false)]
	private static void MaxPlayers(string[] args)
	{
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x4456960", Offset = "0x4456960", VA = "0x4456960")]
	public static void KickPlayer(Player player, bool print = true, bool ban = false, string reason = ".")
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x44581E0", Offset = "0x44581E0", VA = "0x44581E0")]
	public static void VoteKickPlayer(Player voter, Player target)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x44584C0", Offset = "0x44584C0", VA = "0x44584C0")]
	public ChatManager()
	{
	}
}
