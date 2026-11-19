// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.TeamInfo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/TeamInfo.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20003AA")]
internal class TeamInfo
{
	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x0")]
	public static string Blue;

	[Token(Token = "0x40012C0")]
	[FieldOffset(Offset = "0x8")]
	public static string Red;

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x18")]
	public static string Titan;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x20")]
	public static string Human;

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x5858850", Offset = "0x5857850", VA = "0x5858850")]
	public static bool SameTeam(string a, string b)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$SameTeam): clean
		bool bVar1;

		bVar1 = (a == b);
		if (bVar1) {
			bVar1 = (a != TeamInfo.None);
			if (bVar1) {
				bVar1 = (b != TeamInfo.None);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x5858900", Offset = "0x5857900", VA = "0x5858900")]
	public static bool SameTeam(BaseCharacter a, BaseCharacter b)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$SameTeam): 2 lines keep C-only constructs
		byte bVar1;
		String a_00;
		String b_00;
		BaseCharacter pCVar2;
		bool bVar3;
		bool bVar4;

		if ((a == null) || (b == null)) {
			throw new NullReferenceException();
		}
		a_00 = a.Team;
		b_00 = b.Team;
		if ((typeof(TeamInfo)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar3 = TeamInfo.SameTeam(a_00, b_00);
		if (!bVar3) {
			bVar3 = ((Object)a == (Object)b);
			if (!bVar3) {
				bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
				if ((bVar1 <= (b.klass._2).typeHierarchyDepth) &&((b.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
					pCVar2 = (*(ulong)((sbyte)b + 0x100));
					bVar3 = ((Object)pCVar2 == (Object)a);
					if (bVar3) {
						return true;
					}
				}
				bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
				if ((bVar1 <= (a.klass._2).typeHierarchyDepth) &&((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
					pCVar2 = (*(ulong)((sbyte)a + 0x100));
					bVar3 = ((Object)pCVar2 == (Object)b);
					return bVar3;
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x600175E")]
	[Address(RVA = "0x5858B00", Offset = "0x5857B00", VA = "0x5858B00")]
	private static bool IsOwnHorse(BaseCharacter human, BaseCharacter horse)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$IsOwnHorse): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter x;
		bool bVar2;

		if (horse != null) {
			bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
			if ((bVar1 <= (horse.klass._2).typeHierarchyDepth) &&((horse.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Horse))) {
				x = (*(ulong)((sbyte)horse + 0x100));
				bVar2 = ((Object)x == (Object)human);
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x600175F")]
	[Address(RVA = "0x5858BA0", Offset = "0x5857BA0", VA = "0x5858BA0")]
	public static bool SameTeam(BaseCharacter a, string b)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$SameTeam): clean
		String a_00;
		bool bVar1;

		if (a == null) {
			throw new NullReferenceException();
		}
		bVar1 = (a.Team == b);
		if (bVar1) {
			a_00 = a.Team;
			bVar1 = (a_00 != TeamInfo.None);
			if (bVar1) {
				bVar1 = (b != TeamInfo.None);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x5858C60", Offset = "0x5857C60", VA = "0x5858C60")]
	public static Color GetTeamColorUnity(string Team)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$GetTeamColorUnity): clean
		Color UVar1;
		String htmlString;
		Color local_18;

		local_18.r = 0.0;
		local_18.g = 0.0;
		local_18.b = 0.0;
		local_18.a = 0.0;
		htmlString = TeamInfo.GetTeamColor(Team);
		ColorUtility.TryParseHtmlString(htmlString, ref local_18);
		UVar1.b = local_18.b;
		UVar1.a = local_18.a;
		UVar1.r = local_18.r;
		UVar1.g = local_18.g;
		return (Color)UVar1;
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x5858CD0", Offset = "0x5857CD0", VA = "0x5858CD0")]
	public static string GetTeamColor(string team)
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$GetTeamColor): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;

		bVar1 = (team == TeamInfo.Blue);
		if (bVar1) {
			ppSVar2 = &"#3399FF";
		}
		else {
			bVar1 = (team == TeamInfo.Red);
			if (bVar1) {
				ppSVar2 = &"#9A3334";
			}
			else {
				bVar1 = (team == TeamInfo.Human);
				if (bVar1) {
					ppSVar2 = &"#ACD1E9";
				}
				else {
					bVar1 = (team == TeamInfo.Titan);
					if (bVar1) {
						ppSVar2 = &"#FFD800";
					}
					else {
						ppSVar2 = &"white";
					}
				}
			}
		}
		return *ppSVar2;
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x5858E30", Offset = "0x5857E30", VA = "0x5858E30")]
	public TeamInfo()
	{
		// Lifted from source/cpp/GameManagers/TeamInfo.c (GameManagers.TeamInfo$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/TeamInfo.c.

	// GameManagers.TeamInfo$$.cctor: clean
	static TeamInfo()
	{
		GameManagers_TeamInfo_StaticFields pGVar1;

		TeamInfo.Blue = "Blue";
		pGVar1 = typeof(TeamInfo).static_fields;
		pGVar1.Red = "Red";
		pGVar1 = typeof(TeamInfo).static_fields;
		pGVar1.None = "None";
		pGVar1 = typeof(TeamInfo).static_fields;
		pGVar1.Titan = "Titan";
		pGVar1 = typeof(TeamInfo).static_fields;
		pGVar1.Human = "Human";
		return;
	}
}
