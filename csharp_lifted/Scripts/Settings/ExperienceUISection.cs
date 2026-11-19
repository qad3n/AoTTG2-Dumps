// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ExperienceUISection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ExperienceUISection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x20000B5")]
public class ExperienceUISection
{
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x18")]
	public List<string> Settings;

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x5A3BD70", Offset = "0x5A3AD70", VA = "0x5A3BD70")]
	public ExperienceUISection()
	{
		// Lifted from source/cpp/Settings/ExperienceUISection.c (Settings.ExperienceUISection$$.ctor): clean
		base();
		return;
	}
}
