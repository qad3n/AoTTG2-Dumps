// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000663")]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x40019B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.IO.FileStatus _fileStatus;

	[Token(Token = "0x40019B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected string FullPath;

	[Token(Token = "0x40019B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	protected string OriginalPath;

	[Token(Token = "0x40019B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	internal string _name;

	[Token(Token = "0x17000811")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6003211")]
		[Address(RVA = "0x547AE80", Offset = "0x5479E80", VA = "0x547AE80")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x17000812")]
	internal bool ExistsCore
	{
		[Token(Token = "0x6003212")]
		[Address(RVA = "0x547C0C0", Offset = "0x547B0C0", VA = "0x547C0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000813")]
	internal DateTimeOffset CreationTimeCore
	{
		[Token(Token = "0x6003213")]
		[Address(RVA = "0x547C160", Offset = "0x547B160", VA = "0x547C160")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000814")]
	internal DateTimeOffset LastWriteTimeCore
	{
		[Token(Token = "0x6003214")]
		[Address(RVA = "0x547C1C0", Offset = "0x547B1C0", VA = "0x547C1C0")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000815")]
	internal long LengthCore
	{
		[Token(Token = "0x6003215")]
		[Address(RVA = "0x547B000", Offset = "0x547A000", VA = "0x547B000")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000816")]
	internal string NormalizedPath
	{
		[Token(Token = "0x6003217")]
		[Address(RVA = "0x547C2C0", Offset = "0x547B2C0", VA = "0x547C2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000817")]
	public virtual string FullName
	{
		[Token(Token = "0x600321A")]
		[Address(RVA = "0x547C460", Offset = "0x547B460", VA = "0x547C460", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000818")]
	public virtual string Name
	{
		[Token(Token = "0x600321B")]
		[Address(RVA = "0x547C470", Offset = "0x547B470", VA = "0x547C470", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000819")]
	public virtual bool Exists
	{
		[Token(Token = "0x600321C")]
		[Address(RVA = "0x547C480", Offset = "0x547B480", VA = "0x547C480", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700081A")]
	public DateTime CreationTime
	{
		[Token(Token = "0x600321E")]
		[Address(RVA = "0x547C580", Offset = "0x547B580", VA = "0x547C580")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700081B")]
	public DateTime CreationTimeUtc
	{
		[Token(Token = "0x600321F")]
		[Address(RVA = "0x547C5E0", Offset = "0x547B5E0", VA = "0x547C5E0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700081C")]
	public DateTime LastWriteTime
	{
		[Token(Token = "0x6003220")]
		[Address(RVA = "0x547C6B0", Offset = "0x547B6B0", VA = "0x547C6B0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700081D")]
	public DateTime LastWriteTimeUtc
	{
		[Token(Token = "0x6003221")]
		[Address(RVA = "0x547C710", Offset = "0x547B710", VA = "0x547C710")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600320E")]
	[Address(RVA = "0x5477C00", Offset = "0x5476C00", VA = "0x5477C00")]
	protected FileSystemInfo()
	{
	}

	[Token(Token = "0x600320F")]
	[Address(RVA = "0x547BE70", Offset = "0x547AE70", VA = "0x547BE70")]
	internal static FileSystemInfo Create(string fullPath, string fileName, ref System.IO.FileStatus fileStatus)
	{
		return null;
	}

	[Token(Token = "0x6003210")]
	[Address(RVA = "0x547C010", Offset = "0x547B010", VA = "0x547C010")]
	internal void Init(ref System.IO.FileStatus fileStatus)
	{
	}

	[Token(Token = "0x6003216")]
	[Address(RVA = "0x547C220", Offset = "0x547B220", VA = "0x547C220")]
	internal static void ThrowNotFound(string path)
	{
	}

	[Token(Token = "0x6003218")]
	[Address(RVA = "0x5478560", Offset = "0x5477560", VA = "0x5478560")]
	protected FileSystemInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6003219")]
	[Address(RVA = "0x547C330", Offset = "0x547B330", VA = "0x547C330", Slot = "7")]
	[ComVisible(false)]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600321D")]
	public abstract void Delete();

	[Token(Token = "0x6003222")]
	[Address(RVA = "0x547C7E0", Offset = "0x547B7E0", VA = "0x547C7E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
