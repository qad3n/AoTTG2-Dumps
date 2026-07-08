using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000012")]
public interface ICloner
{
	[Token(Token = "0x6000054")]
	bool Handles(Type type);

	[Token(Token = "0x6000055")]
	object ConstructClone(Type type, object original);

	[Token(Token = "0x6000056")]
	void BeforeClone(Type type, object original);

	[Token(Token = "0x6000057")]
	void FillClone(Type type, ref object clone, object original, CloningContext context);

	[Token(Token = "0x6000058")]
	void AfterClone(Type type, object clone);
}
