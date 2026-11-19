// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationConfig
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationConfig.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200096D")]
internal class ApplicationConfig
{
	[Token(Token = "0x4002F6A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string DevelopmentConfigPath;

	[Token(Token = "0x4002F6B")]
	[FieldOffset(Offset = "0x8")]
	public static bool DevelopmentMode;

	[Token(Token = "0x4002F6C")]
	public const string GameVersion = "11.15.2026";

	[Token(Token = "0x600583F")]
	[Address(RVA = "0x5D080A0", Offset = "0x5D070A0", VA = "0x5D080A0")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationConfig.c (ApplicationManagers.ApplicationConfig$$Init): clean
		bool bVar1;
		int iVar2;

		bVar1 = File.Exists(ApplicationConfig.DevelopmentConfigPath);
		if (!bVar1) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				iVar2 = Application.platform;
			}
			else {
				iVar2 = Application.platform;
			}
			if (iVar2 != 7) {
				return;
			}
		}
		if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor == 0) {
			ApplicationConfig.DevelopmentMode = true;
			return;
		}
		ApplicationConfig.DevelopmentMode = true;
		return;
	}

	[Token(Token = "0x6005840")]
	[Address(RVA = "0x5D08160", Offset = "0x5D07160", VA = "0x5D08160")]
	public ApplicationConfig()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationConfig.c (ApplicationManagers.ApplicationConfig$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/ApplicationConfig.c.

	// ApplicationManagers.ApplicationConfig$$.cctor: clean
	static ApplicationConfig()
	{
		String pSVar1;

		pSVar1 = Application.dataPath;
		pSVar1 = String.Concat(pSVar1, "/DevelopmentConfig");
		ApplicationConfig.DevelopmentConfigPath = pSVar1;
		ApplicationConfig.DevelopmentMode = false;
		return;
	}
}
