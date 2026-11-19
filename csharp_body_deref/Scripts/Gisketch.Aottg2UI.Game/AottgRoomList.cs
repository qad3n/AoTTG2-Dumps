// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomList
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomList.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D3")]
internal static class AottgRoomList
{
	[Token(Token = "0x4000E4A")]
	public const string ContentId = "room-list-rooms";

	[Token(Token = "0x4000E4B")]
	private const string HeaderId = "room-list-header";

	[Token(Token = "0x4000E4C")]
	private const string PlayersId = "room-list-header-players";

	[Token(Token = "0x4000E4D")]
	private const string PageId = "room-list-header-page";

	[Token(Token = "0x4000E4E")]
	private const int RoomsPerPage = 12;

	[Token(Token = "0x4000E4F")]
	private const float RowHeight = 60f;

	[Token(Token = "0x4000E50")]
	private const float RowGap = 4f;

	[Token(Token = "0x4000E51")]
	private const float SearchWidth = 360f;

	[Token(Token = "0x4000E52")]
	private const string SandboxIcon = "joystick";

	[Token(Token = "0x4000E53")]
	private const string AccountIcon = "UI/Icons/Navigation/Verification";

	[Token(Token = "0x4000E54")]
	private const string PasswordIcon = "UI/Icons/Navigation/KeyIcon";

	[Token(Token = "0x4000E55")]
	private const float RowIconSize = 24f;

	[Token(Token = "0x4000E56")]
	[FieldOffset(Offset = "0x0")]
	public static readonly StringSetting Query;

	[Token(Token = "0x4000E57")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BoolSetting ShowFull;

	[Token(Token = "0x4000E58")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BoolSetting ShowPassword;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<RoomInfo> Filtered;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly StringBuilder SignatureBuilder;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x30")]
	private static int _page;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x38")]
	private static string _layoutSignature;

	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x40")]
	private static string _countSignature;

	[Token(Token = "0x170001EF")]
	public static RoomInfo PasswordRoom
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x57CC8C0", Offset = "0x57CB8C0", VA = "0x57CC8C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x57CC930", Offset = "0x57CB930", VA = "0x57CC930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x57CC990", Offset = "0x57CB990", VA = "0x57CC990")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x57CCA10", Offset = "0x57CBA10", VA = "0x57CCA10")]
	public static void Refresh()
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x57CD840", Offset = "0x57CC840", VA = "0x57CD840")]
	private static void Rebuild(string layout, string counts)
	{
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x57CDA30", Offset = "0x57CCA30", VA = "0x57CDA30")]
	private static void PatchCounts(string counts)
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x57CDD80", Offset = "0x57CCD80", VA = "0x57CDD80")]
	private static void SetText(GisketchView view, string id, string text)
	{
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x57CE0D0", Offset = "0x57CD0D0", VA = "0x57CE0D0")]
	public static void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x57CE2B0", Offset = "0x57CD2B0", VA = "0x57CE2B0")]
	public static void BuildHeader(AottgUi ui)
	{
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x57CE4C0", Offset = "0x57CD4C0", VA = "0x57CE4C0")]
	private static void SearchChanged(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x57CE550", Offset = "0x57CD550", VA = "0x57CE550")]
	public static void ChangePage(int delta)
	{
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x57CE6C0", Offset = "0x57CD6C0", VA = "0x57CE6C0")]
	public static void Join(RoomInfo room)
	{
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x57CEBC0", Offset = "0x57CDBC0", VA = "0x57CEBC0")]
	public static bool TryJoinPasswordRoom(string password)
	{
		return default(bool);
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x57CEB20", Offset = "0x57CDB20", VA = "0x57CEB20")]
	public static void Warn(string title, string message)
	{
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x57CBFC0", Offset = "0x57CAFC0", VA = "0x57CBFC0")]
	public static string RoomTitle(RoomInfo room)
	{
		return null;
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x57CEEC0", Offset = "0x57CDEC0", VA = "0x57CEEC0")]
	private static void BuildRoom(AottgUi content, RoomInfo room, int index)
	{
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x57CEAC0", Offset = "0x57CDAC0", VA = "0x57CEAC0")]
	private static string AccountRequiredText()
	{
		return null;
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x57CFD30", Offset = "0x57CED30", VA = "0x57CFD30")]
	private static GisketchNodeDefinition Text(string id, string text, GisketchLayoutDefinition layout)
	{
		return null;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x57CFE50", Offset = "0x57CEE50", VA = "0x57CFE50")]
	private static GisketchNodeDefinition Icon(string id, string icon, string style, string tooltip)
	{
		return null;
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x57CCB20", Offset = "0x57CBB20", VA = "0x57CCB20")]
	private static void Filter()
	{
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x57CFFF0", Offset = "0x57CEFF0", VA = "0x57CFFF0")]
	private static bool Matches(RoomInfo room, string property, string search)
	{
		return default(bool);
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x57CD240", Offset = "0x57CC240", VA = "0x57CD240")]
	private static string Signature(bool counts)
	{
		return null;
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x57CDF50", Offset = "0x57CCF50", VA = "0x57CDF50")]
	private static void VisibleRange(out int start, out int end)
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x57CE000", Offset = "0x57CD000", VA = "0x57CE000")]
	private static string RowId(int index)
	{
		return null;
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x57CE050", Offset = "0x57CD050", VA = "0x57CE050")]
	private static string PlayerCount(RoomInfo room)
	{
		return null;
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x57CE5F0", Offset = "0x57CD5F0", VA = "0x57CE5F0")]
	private static int PageCount()
	{
		return default(int);
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x57CDC80", Offset = "0x57CCC80", VA = "0x57CDC80")]
	private static string PageLabel()
	{
		return null;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x57CDE80", Offset = "0x57CCE80", VA = "0x57CDE80")]
	private static string PlayersOnline()
	{
		return null;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x57CA230", Offset = "0x57C9230", VA = "0x57CA230")]
	public static bool IsValid(RoomInfo room)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x57CA370", Offset = "0x57C9370", VA = "0x57CA370")]
	public static string PasswordHash(RoomInfo room)
	{
		return null;
	}
}
